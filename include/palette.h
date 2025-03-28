#ifndef GUARD_PALETTE_H
#define GUARD_PALETTE_H

#define gPaletteFade_selectedPalettes (gPaletteFade.multipurpose1) // normal and fast fade
#define gPaletteFade_blendCnt         (gPaletteFade.multipurpose1) // hardware fade
#define gPaletteFade_delay            (gPaletteFade.multipurpose2) // normal and hardware fade
#define gPaletteFade_submode          (gPaletteFade.multipurpose2) // fast fade

#define PLTT_BUFFER_SIZE (PLTT_SIZE / sizeof(u32))

#define PALETTE_FADE_STATUS_DELAY 2
#define PALETTE_FADE_STATUS_ACTIVE 1
#define PALETTE_FADE_STATUS_DONE 0
#define PALETTE_FADE_STATUS_LOADING 0xFF

#define PALETTES_BG      0x0000FFFF
#define PALETTES_OBJECTS 0xFFFF0000
#define PALETTES_ALL     (PALETTES_BG | PALETTES_OBJECTS)

#define PLTT_ID(n) ((n) * 16)
#define BG_PLTT_OFFSET 0x000
#define OBJ_PLTT_OFFSET 0x100
#define BG_PLTT_ID(n) (BG_PLTT_OFFSET + PLTT_ID(n))
#define OBJ_PLTT_ID(n) (OBJ_PLTT_OFFSET + PLTT_ID(n))
#define OBJ_PLTT_ID2(n) (PLTT_ID((n) + 16))

enum
{
    FAST_FADE_IN_FROM_WHITE,
    FAST_FADE_OUT_TO_WHITE,
    FAST_FADE_IN_FROM_BLACK,
    FAST_FADE_OUT_TO_BLACK,
};

struct PaletteFadeControl
{
    u32 multipurpose1;
    u8 delayCounter:6;
    u32 y:5; // blend coefficient
    u32 targetY:5; // target blend coefficient
    u32 blendColor:15;
    bool32 active:1;
    u32 multipurpose2:6;
    bool32 yDec:1; // whether blend coefficient is decreasing
    bool32 bufferTransferDisabled:1;
    u32 mode:2;
    bool32 shouldResetBlendRegisters:1;
    bool32 hardwareFadeFinishing:1;
    u32 softwareFadeFinishingCounter:5;
    bool32 softwareFadeFinishing:1;
    bool32 objPaletteToggle:1;
    u8 deltaY:4; // rate of change of blend coefficient
};

extern struct PaletteFadeControl gPaletteFade;
extern u32 gPlttBufferTransferPending;
extern u32 ALIGNED(4) gPlttBufferUnfaded[PLTT_BUFFER_SIZE];
extern u32 ALIGNED(4) gPlttBufferFaded[PLTT_BUFFER_SIZE];

void LoadCompressedPalette(const u32 *src, u32 offset, u32 size);
void LoadPalette(const void *src, u32 offset, u32 size);
void FillPalette(u32 value, u32 offset, u32 size);
void TransferPlttBuffer(void);
u32 UpdatePaletteFade(void);
void ResetPaletteFade(void);
bool32 BeginNormalPaletteFade(u32 selectedPalettes, s32 delay, u8 startY, u8 targetY, u32 blendColor);
void ResetPaletteFadeControl(void);
void InvertPlttBuffer(u32 selectedPalettes);
void TintPlttBuffer(u32 selectedPalettes, s32 r, s32 g, s32 b);
void UnfadePlttBuffer(u32 selectedPalettes);
void BeginFastPaletteFade(u32 submode);
void BeginHardwarePaletteFade(u32 blendCnt, u32 delay, u32 y, u32 targetY, u32 shouldResetBlendRegisters);
void BlendPalettes(u32 selectedPalettes, u8 coeff, u32 color);
void BlendPalettesUnfaded(u32 selectedPalettes, u8 coeff, u32 color);
void BlendPalettesGradually(u32 selectedPalettes, s32 delay, u8 coeff, u8 coeffTarget, u32 color, u8 priority, u8 id);
void TintPalette_GrayScale(u32 *palette, u32 count);
void TintPalette_GrayScale2(u32 *palette, u32 count);
void TintPalette_SepiaTone(u32 *palette, u32 count);
void TintPalette_CustomTone(u32 *palette, u32 count, u32 rTone, u32 gTone, u32 bTone);

static inline void SetBackdropFromColor(u32 color)
{
  FillPalette(color, 0, PLTT_SIZEOF(1));
}

static inline void SetBackdropFromPalette(const u32 *palette)
{
  LoadPalette(palette, 0, PLTT_SIZEOF(1));
}

#endif // GUARD_PALETTE_H
