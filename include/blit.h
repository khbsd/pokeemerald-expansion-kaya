#ifndef GUARD_BLIT_H
#define GUARD_BLIT_H

struct Bitmap
{
    u8 *pixels;
    u32 width:16;
    u32 height:16;
};

void BlitBitmapRect4BitWithoutColorKey(const struct Bitmap *src, struct Bitmap *dst, u32 srcX, u32 srcY, u32 dstX, u32 dstY, u32 width, u32 height);
void BlitBitmapRect4Bit(const struct Bitmap *src, struct Bitmap *dst, u32 srcX, u32 srcY, u32 dstX, u32 dstY, u32 width, u32 height, u8 colorKey);
void FillBitmapRect4Bit(struct Bitmap *surface, u32 x, u32 y, u32 width, u32 height, u8 fillValue);
void BlitBitmapRect4BitTo8Bit(const struct Bitmap *src, struct Bitmap *dst, u32 srcX, u32 srcY, u32 dstX, u32 dstY, u32 width, u32 height, u8 colorKey, u8 paletteOffset);
void FillBitmapRect8Bit(struct Bitmap *surface, u32 x, u32 y, u32 width, u32 height, u8 fillValue);

#endif // GUARD_BLIT_H
