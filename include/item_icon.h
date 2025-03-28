#ifndef GUARD_ITEM_ICON_H
#define GUARD_ITEM_ICON_H

extern u8 *gItemIconDecompressionBuffer;
extern u8 *gItemIcon4x4Buffer;

extern const struct SpriteTemplate gItemIconSpriteTemplate;

bool32 AllocItemIconTemporaryBuffers(void);
void FreeItemIconTemporaryBuffers(void);
void CopyItemIconPicTo4x4Buffer(const void *src, void *dest);
u8 AddItemIconSprite(u32 tilesTag, u32 paletteTag, u32 itemId);
u8 AddCustomItemIconSprite(const struct SpriteTemplate *customSpriteTemplate, u32 tilesTag, u32 paletteTag, u32 itemId);
const void *GetItemIconPic(u32 itemId);
const void *GetItemIconPalette(u32 itemId);

#endif //GUARD_ITEM_ICON_H
