#ifndef GUARD_TRAINER_POKEMON_SPRITES_H
#define GUARD_TRAINER_POKEMON_SPRITES_H

// For the flags argument of CreateMonPicSprite_Affine
#define MON_PIC_AFFINE_BACK   0
#define MON_PIC_AFFINE_FRONT  1
#define MON_PIC_AFFINE_NONE   3
#define F_MON_PIC_NO_AFFINE (1 << 7)

bool32 ResetAllPicSprites(void);
u32 CreateMonPicSprite_Affine(u32 species, bool32 isShiny, u32 personality, u8 flags, s32 x, s32 y, u8 paletteSlot, u32 paletteTag);
u32 CreateMonPicSprite(u32 species, bool32 isShiny, u32 personality, bool32 isFrontPic, s32 x, s32 y, u8 paletteSlot, u32 paletteTag);
u32 FreeAndDestroyMonPicSprite(u32 spriteId);
u32 FreeAndDestroyMonPicSpriteNoPalette(u32 spriteId);
u32 CreateTrainerPicSprite(u32 species, bool32 isFrontPic, s32 x, s32 y, u8 paletteSlot, u32 paletteTag);
u32 FreeAndDestroyTrainerPicSprite(u32 spriteId);
u32 CreateTrainerCardTrainerPicSprite(u32 species, bool32 isFrontPic, u32 destX, u32 destY, u8 paletteSlot, u8 windowId);
u32 PlayerGenderToFrontTrainerPicId_Debug(u8 gender, bool32 getClass);

#endif // GUARD_TRAINER_POKEMON_SPRITES_H
