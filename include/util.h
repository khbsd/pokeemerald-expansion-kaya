#ifndef GUARD_UTIL_H
#define GUARD_UTIL_H

#include "sprite.h"

extern const u8 gMiscBlank_Gfx[]; // unused in Emerald

u8 CreateInvisibleSpriteWithCallback(void (*)(struct Sprite *));
void StoreWordInTwoHalfwords(u32 *, u32);
void LoadWordFromTwoHalfwords(u32 *, u32 *);
int CountTrailingZeroBits(u32 value);
u32 CalcCRC16(const u8 *data, s32 length);
u32 CalcCRC16WithTable(const u8 *data, u32 length);
u32 CalcByteArraySum(const u8 *data, u32 length);
void BlendPalette(u32 palOffset, u32 numEntries, u8 coeff, u32 blendColor);
void DoBgAffineSet(struct BgAffineDstData *dest, u32 texX, u32 texY, s16 scrX, s16 scrY, s16 sx, s16 sy, u32 alpha);
void CopySpriteTiles(u8 shape, u8 size, u8 *tiles, u32 *tilemap, u8 *output);


#endif // GUARD_UTIL_H
