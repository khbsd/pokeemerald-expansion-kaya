#ifndef MON_MARKINGS_H
#define MON_MARKINGS_H

#define NUM_MON_MARKINGS 4

struct MonMarkingsMenu
{
    u32 baseTileTag;
    u32 basePaletteTag;
    u8 markings; // bit flags
    s32 cursorPos;
    bool32 markingsArray[NUM_MON_MARKINGS];
    u8 cursorBaseY;
    bool32 spriteSheetLoadRequired;
    struct Sprite *windowSprites[2]; // upper and lower halves of menu window
    struct Sprite *markingSprites[NUM_MON_MARKINGS];
    struct Sprite *cursorSprite;
    struct Sprite *textSprite;
    const u8 *frameTiles;
    const u32 *framePalette;
    u8 ALIGNED(2) windowSpriteTiles[0x1000];
    u8 unused[0x80];
    u8 tileLoadState;
};

void InitMonMarkingsMenu(struct MonMarkingsMenu *ptr);
void BufferMonMarkingsMenuTiles(void);
void OpenMonMarkingsMenu(u8 markings, s32 x, s32 y);
void FreeMonMarkingsMenu(void);
bool32 HandleMonMarkingsMenuInput(void);
struct Sprite *CreateMonMarkingAllCombosSprite(u32 tileTag, u32 paletteTag, const u32 *palette);
struct Sprite *CreateMonMarkingComboSprite(u32 tileTag, u32 paletteTag, const u32 *palette);
void UpdateMonMarkingTiles(u8 markings, void *dest);

#endif //MON_MARKINGS_H
