#ifndef GUARD_DECOMPRESS_H
#define GUARD_DECOMPRESS_H

#include "sprite.h"

#define MAX_DECOMPRESSION_BUFFER_SIZE 0x4000

void LZDecompressWram(const u32 *src, void *dest);
void LZDecompressVram(const u32 *src, void *dest);

u32 IsLZ77Data(const void *ptr, u32 minSize, u32 maxSize);

u32 LoadCompressedSpriteSheet(const struct CompressedSpriteSheet *src);
u32 LoadCompressedSpriteSheetByTemplate(const struct SpriteTemplate *template, s32 offset);
u32 LoadCompressedSpriteSheetOverrideBuffer(const struct CompressedSpriteSheet *src, void *buffer);
bool32 LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet *src);

u32 LoadCompressedSpritePalette(const struct CompressedSpritePalette *src);
u32 LoadCompressedSpritePaletteWithTag(const u32 *pal, u32 tag);
void LoadCompressedSpritePaletteOverrideBuffer(const struct CompressedSpritePalette *src, void *buffer);
bool32 LoadCompressedSpritePaletteUsingHeap(const struct CompressedSpritePalette *src);

void DecompressPicFromTable(const struct CompressedSpriteSheet *src, void *buffer);

void HandleLoadSpecialPokePic(bool32 isFrontPic, void *dest, s32 species, u32 personality);

void LoadSpecialPokePic(void *dest, s32 species, u32 personality, bool32 isFrontPic);

u32 GetDecompressedDataSize(const u32 *ptr);

#endif // GUARD_DECOMPRESS_H
