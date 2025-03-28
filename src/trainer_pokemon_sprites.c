#include "global.h"
#include "sprite.h"
#include "window.h"
#include "malloc.h"
#include "palette.h"
#include "decompress.h"
#include "trainer_pokemon_sprites.h"
#include "data.h"
#include "pokemon.h"
#include "constants/trainers.h"

#define PICS_COUNT 8

// Needs to be large enough to store either a decompressed Pokémon pic or trainer pic
#define PIC_SPRITE_SIZE max(MON_PIC_SIZE, TRAINER_PIC_SIZE)
#define MAX_PIC_FRAMES  max(MAX_MON_PIC_FRAMES, MAX_TRAINER_PIC_FRAMES)

struct PicData
{
    u32 *frames;
    struct SpriteFrameImage *images;
    u32 paletteTag;
    u32 spriteId;
    u32 active;
};

static EWRAM_DATA struct SpriteTemplate sCreatingSpriteTemplate = {};
static EWRAM_DATA struct PicData sSpritePics[PICS_COUNT] = {};

static const struct PicData sDummyPicData = {};

static const struct OamData sOamData_Normal =
{
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64)
};

static const struct OamData sOamData_Affine =
{
    .affineMode = ST_OAM_AFFINE_NORMAL,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64)
};

static void DummyPicSpriteCallback(struct Sprite *sprite)
{

}

bool32 ResetAllPicSprites(void)
{
    int i;

    for (i = 0; i < PICS_COUNT; i ++)
        sSpritePics[i] = sDummyPicData;

    return FALSE;
}

static bool32 DecompressPic(u32 species, u32 personality, bool32 isFrontPic, u32 *dest, bool32 isTrainer)
{
    if (!isTrainer)
    {
        LoadSpecialPokePic(dest, species, personality, isFrontPic);
    }
    else
    {
        if (isFrontPic)
            DecompressPicFromTable(&gTrainerSprites[species].frontPic, dest);
        else
            DecompressPicFromTable(&gTrainerBacksprites[species].backPic, dest);
    }
    return FALSE;
}

static void LoadPicPaletteByTagOrSlot(u32 species, bool32 isShiny, u32 personality, u32 paletteSlot, u32 paletteTag, bool32 isTrainer)
{
    if (!isTrainer)
    {
        if (paletteTag == TAG_NONE)
        {
            sCreatingSpriteTemplate.paletteTag = TAG_NONE;
            LoadCompressedPalette(GetMonSpritePalFromSpeciesAndPersonality(species, isShiny, personality), OBJ_PLTT_ID(paletteSlot), PLTT_SIZE_4BPP);
        }
        else
        {
            sCreatingSpriteTemplate.paletteTag = paletteTag;
            LoadCompressedSpritePaletteWithTag(GetMonSpritePalFromSpeciesAndPersonality(species, isShiny, personality), species);
        }
    }
    else
    {
        if (paletteTag == TAG_NONE)
        {
            sCreatingSpriteTemplate.paletteTag = TAG_NONE;
            LoadCompressedPalette(gTrainerSprites[species].palette.data, OBJ_PLTT_ID(paletteSlot), PLTT_SIZE_4BPP);
        }
        else
        {
            sCreatingSpriteTemplate.paletteTag = paletteTag;
            LoadCompressedSpritePalette(&gTrainerSprites[species].palette);
        }
    }
}

static void LoadPicPaletteBySlot(u32 species, bool32 isShiny, u32 personality, u32 paletteSlot, bool32 isTrainer)
{
    if (!isTrainer)
        LoadCompressedPalette(GetMonSpritePalFromSpeciesAndPersonality(species, isShiny, personality), PLTT_ID(paletteSlot), PLTT_SIZE_4BPP);
    else
        LoadCompressedPalette(gTrainerSprites[species].palette.data, PLTT_ID(paletteSlot), PLTT_SIZE_4BPP);
}

static void AssignSpriteAnimsTable(bool32 isTrainer)
{
    if (!isTrainer)
        sCreatingSpriteTemplate.anims = gAnims_MonPic;
    else
        sCreatingSpriteTemplate.anims = gAnims_Trainer;
}

static u32 CreatePicSprite(u32 species, bool32 isShiny, u32 personality, bool32 isFrontPic, s32 x, s32 y, u32 paletteSlot, u32 paletteTag, bool32 isTrainer)
{
    u32 i;
    u32 *framePics;
    struct SpriteFrameImage *images;
    int j;
    u32 spriteId;

    for (i = 0; i < PICS_COUNT; i ++)
    {
        if (!sSpritePics[i].active)
            break;
    }
    if (i == PICS_COUNT)
        return 0xFFFF;

    framePics = Alloc(PIC_SPRITE_SIZE * MAX_PIC_FRAMES);
    if (!framePics)
        return 0xFFFF;

    images = Alloc(sizeof(struct SpriteFrameImage) * MAX_PIC_FRAMES);
    if (!images)
    {
        Free(framePics);
        return 0xFFFF;
    }
    if (DecompressPic(species, personality, isFrontPic, framePics, isTrainer))
    {
        // debug trap?
        return 0xFFFF;
    }
    for (j = 0; j < MAX_PIC_FRAMES; j ++)
    {
        images[j].data = framePics + PIC_SPRITE_SIZE * j;
        images[j].size = PIC_SPRITE_SIZE;
    }
    sCreatingSpriteTemplate.tileTag = TAG_NONE;
    sCreatingSpriteTemplate.oam = &sOamData_Normal;
    AssignSpriteAnimsTable(isTrainer);
    sCreatingSpriteTemplate.images = images;
    sCreatingSpriteTemplate.affineAnims = gDummySpriteAffineAnimTable;
    sCreatingSpriteTemplate.callback = DummyPicSpriteCallback;
    LoadPicPaletteByTagOrSlot(species, isShiny, personality, paletteSlot, paletteTag, isTrainer);
    spriteId = CreateSprite(&sCreatingSpriteTemplate, x, y, 0);
    if (paletteTag == TAG_NONE)
        gSprites[spriteId].oam.paletteNum = paletteSlot;
    sSpritePics[i].frames = framePics;
    sSpritePics[i].images = images;
    sSpritePics[i].paletteTag = paletteTag;
    sSpritePics[i].spriteId = spriteId;
    sSpritePics[i].active = TRUE;
    return spriteId;
}

u32 CreateMonPicSprite_Affine(u32 species, bool32 isShiny, u32 personality, u32 flags, s32 x, s32 y, u32 paletteSlot, u32 paletteTag)
{
    u32 *framePics;
    struct SpriteFrameImage *images;
    int j;
    u32 i;
    u32 spriteId;
    u32 type;
    species = SanitizeSpeciesId(species);

    for (i = 0; i < PICS_COUNT; i++)
    {
        if (!sSpritePics[i].active)
            break;
    }
    if (i == PICS_COUNT)
        return 0xFFFF;

    framePics = Alloc(MON_PIC_SIZE * MAX_MON_PIC_FRAMES);
    if (!framePics)
        return 0xFFFF;

    if (flags & F_MON_PIC_NO_AFFINE)
    {
        flags &= ~F_MON_PIC_NO_AFFINE;
        type = MON_PIC_AFFINE_NONE;
    }
    else
    {
        type = flags;
    }
    images = Alloc(sizeof(struct SpriteFrameImage) * MAX_MON_PIC_FRAMES);
    if (!images)
    {
        Free(framePics);
        return 0xFFFF;
    }
    if (DecompressPic(species, personality, flags, framePics, FALSE))
    {
        // debug trap?
        return 0xFFFF;
    }
    for (j = 0; j < MAX_MON_PIC_FRAMES; j ++)
    {
        images[j].data = framePics + MON_PIC_SIZE * j;
        images[j].size = MON_PIC_SIZE;
    }
    sCreatingSpriteTemplate.tileTag = TAG_NONE;
    sCreatingSpriteTemplate.anims = gSpeciesInfo[species].frontAnimFrames;
    sCreatingSpriteTemplate.images = images;
    if (type == MON_PIC_AFFINE_FRONT)
    {
        sCreatingSpriteTemplate.affineAnims = gAffineAnims_BattleSpriteOpponentSide;
        sCreatingSpriteTemplate.oam = &sOamData_Affine;
    }
    else if (type == MON_PIC_AFFINE_BACK)
    {
        sCreatingSpriteTemplate.affineAnims = gAffineAnims_BattleSpritePlayerSide;
        sCreatingSpriteTemplate.oam = &sOamData_Affine;
    }
    else // MON_PIC_AFFINE_NONE
    {
        sCreatingSpriteTemplate.oam = &sOamData_Normal;
        sCreatingSpriteTemplate.affineAnims = gDummySpriteAffineAnimTable;
    }
    sCreatingSpriteTemplate.callback = DummyPicSpriteCallback;
    LoadPicPaletteByTagOrSlot(species, isShiny, personality, paletteSlot, paletteTag, FALSE);
    spriteId = CreateSprite(&sCreatingSpriteTemplate, x, y, 0);
    if (paletteTag == TAG_NONE)
        gSprites[spriteId].oam.paletteNum = paletteSlot;
    sSpritePics[i].frames = framePics;
    sSpritePics[i].images = images;
    sSpritePics[i].paletteTag = paletteTag;
    sSpritePics[i].spriteId = spriteId;
    sSpritePics[i].active = TRUE;
    return spriteId;
}

static u32 FreeAndDestroyPicSpriteInternal(u32 spriteId, bool32 clearPalette)
{
    u32 i;
    u32 *framePics;
    struct SpriteFrameImage *images;

    for (i = 0; i < PICS_COUNT; i ++)
    {
        if (sSpritePics[i].spriteId == spriteId)
            break;
    }
    if (i == PICS_COUNT)
        return 0xFFFF;

    framePics = sSpritePics[i].frames;
    images = sSpritePics[i].images;
    if (clearPalette && sSpritePics[i].paletteTag != TAG_NONE)
        FreeSpritePaletteByTag(GetSpritePaletteTagByPaletteNum(gSprites[spriteId].oam.paletteNum));
    DestroySprite(&gSprites[spriteId]);
    Free(framePics);
    Free(images);
    sSpritePics[i] = sDummyPicData;
    return 0;
}

static u32 LoadPicSpriteInWindow(u32 species, bool32 isShiny, u32 personality, bool32 isFrontPic, u32 paletteSlot, u32 windowId, bool32 isTrainer)
{
    if (DecompressPic(species, personality, isFrontPic, (u32 *)GetWindowAttribute(windowId, WINDOW_TILE_DATA), FALSE))
        return 0xFFFF;

    LoadPicPaletteBySlot(species, isShiny, personality, paletteSlot, isTrainer);
    return 0;
}

static u32 CreateTrainerCardSprite(u32 species, bool32 isShiny, u32 personality, bool32 isFrontPic, u32 destX, u32 destY, u32 paletteSlot, u32 windowId, bool32 isTrainer)
{
    u32 *framePics;

    framePics = Alloc(TRAINER_PIC_SIZE * MAX_TRAINER_PIC_FRAMES);
    if (framePics && !DecompressPic(species, personality, isFrontPic, framePics, isTrainer))
    {
        BlitBitmapRectToWindow(windowId, framePics, 0, 0, TRAINER_PIC_WIDTH, TRAINER_PIC_HEIGHT, destX, destY, TRAINER_PIC_WIDTH, TRAINER_PIC_HEIGHT);
        LoadPicPaletteBySlot(species, isShiny, personality, paletteSlot, isTrainer);
        Free(framePics);
        return 0;
    }
    return 0xFFFF;
}

u32 CreateMonPicSprite(u32 species, bool32 isShiny, u32 personality, bool32 isFrontPic, s32 x, s32 y, u32 paletteSlot, u32 paletteTag)
{
    return CreatePicSprite(species, isShiny, personality, isFrontPic, x, y, paletteSlot, paletteTag, FALSE);
}

u32 FreeAndDestroyMonPicSprite(u32 spriteId)
{
    return FreeAndDestroyPicSpriteInternal(spriteId, TRUE);
}

u32 FreeAndDestroyMonPicSpriteNoPalette(u32 spriteId)
{
    return FreeAndDestroyPicSpriteInternal(spriteId, FALSE);
}

static u32 UNUSED LoadMonPicInWindow(u32 species, bool32 isShiny, u32 personality, bool32 isFrontPic, u32 paletteSlot, u32 windowId)
{
    return LoadPicSpriteInWindow(species, isShiny, personality, isFrontPic, paletteSlot, windowId, FALSE);
}

// Unused, FRLG only
u32 CreateTrainerCardMonIconSprite(u32 species, bool32 isShiny, u32 personality, bool32 isFrontPic, u32 destX, u32 destY, u32 paletteSlot, u32 windowId)
{
    return CreateTrainerCardSprite(species, isShiny, personality, isFrontPic, destX, destY, paletteSlot, windowId, FALSE);
}

u32 CreateTrainerPicSprite(u32 species, bool32 isFrontPic, s32 x, s32 y, u32 paletteSlot, u32 paletteTag)
{
    return CreatePicSprite(species, FALSE, 0, isFrontPic, x, y, paletteSlot, paletteTag, TRUE);
}

u32 FreeAndDestroyTrainerPicSprite(u32 spriteId)
{
    return FreeAndDestroyPicSpriteInternal(spriteId, TRUE);
}

static u32 UNUSED LoadTrainerPicInWindow(u32 species, bool32 isFrontPic, u32 paletteSlot, u32 windowId)
{
    return LoadPicSpriteInWindow(species, FALSE, 0, isFrontPic, paletteSlot, windowId, TRUE);
}

u32 CreateTrainerCardTrainerPicSprite(u32 species, bool32 isFrontPic, u32 destX, u32 destY, u32 paletteSlot, u32 windowId)
{
    return CreateTrainerCardSprite(species, FALSE, 0, isFrontPic, destX, destY, paletteSlot, windowId, TRUE);
}

u32 PlayerGenderToFrontTrainerPicId_Debug(u32 gender, bool32 getClass)
{
    if (getClass == TRUE)
    {
        if (gender != MALE)
            return gFacilityClassToPicIndex[FACILITY_CLASS_MAY];
        else
            return gFacilityClassToPicIndex[FACILITY_CLASS_BRENDAN];
    }
    return gender;
}
