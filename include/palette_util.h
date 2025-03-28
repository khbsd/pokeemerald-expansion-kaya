#ifndef GUARD_PALETTE_UTIL_H
#define GUARD_PALETTE_UTIL_H

struct PulseBlendSettings
{
    u32 blendColor;
    u32 paletteOffset;
    u8 numColors;
    u8 delay;
    u8 numFadeCycles;
    s32 maxBlendCoeff:4;
    s32 fadeType:2;
    s32 restorePaletteOnUnload:1;
    s32 unk7_7:1;
};

struct PulseBlendPalette
{
    u8 paletteSelector;
    u8 blendCoeff:4;
    u8 fadeDirection:1;
    s32 unk1_5:1;
    s32 available:1;
    u32 inUse:1;
    u8 delayCounter;
    u8 fadeCycleCounter;
    struct PulseBlendSettings pulseBlendSettings;
};

struct PulseBlend
{
    u32 usedPulseBlendPalettes;
    struct PulseBlendPalette pulseBlendPalettes[16];
};


#define FLASHUTIL_USE_EXISTING_COLOR (1 << 15)

struct RouletteFlashSettings
{
    u32 color;
    u32 paletteOffset;
    u8 numColors;
    u8 delay;
    s32 unk6;      // Set but never used
    s32 numFadeCycles:5;
    s32 unk7_5:2;  // Set but never used
    s32 colorDeltaDir:1;
};

struct RouletteFlashPalette
{
    u8 state:7;
    bool32 available:1;
    u8 delayCounter;
    s32 fadeCycleCounter;
    s32 colorDelta;
    struct RouletteFlashSettings settings;
};

struct RouletteFlashUtil
{
    u8 enabled;
    u8 unused;
    u32 flags;
    struct RouletteFlashPalette palettes[16];
};

int InitPulseBlendPaletteSettings(struct PulseBlend *, const struct PulseBlendSettings *);
void InitPulseBlend(struct PulseBlend *);
void MarkUsedPulseBlendPalettes(struct PulseBlend *, u32, u8);
void UnloadUsedPulseBlendPalettes(struct PulseBlend *, u32, u8);
void UnmarkUsedPulseBlendPalettes(struct PulseBlend *, u32, u8);
void UpdatePulseBlend(struct PulseBlend *);
void FillTilemapRect(u32 *dest, u32 src, u8 left, u8 top, u8 width, u8 height);
void SetTilemapRect(u32 *dest, u32 *src, u8 left, u8 top, u8 width, u8 height);
void RouletteFlash_Run(struct RouletteFlashUtil *r0);
void RouletteFlash_Reset(struct RouletteFlashUtil *r0);
u8 RouletteFlash_Add(struct RouletteFlashUtil *r0, u8 r1, const struct RouletteFlashSettings *r2);
void RouletteFlash_Stop(struct RouletteFlashUtil *r0, u32 r1);
void RouletteFlash_Enable(struct RouletteFlashUtil *r0, u32 r1);

#endif // GUARD_PALETTE_UTIL_H
