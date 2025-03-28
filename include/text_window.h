#ifndef GUARD_TEXT_WINDOW_H
#define GUARD_TEXT_WINDOW_H

#define WINDOW_FRAMES_COUNT 20

struct TilesPal
{
    const u8 *tiles;
    const u32 *pal;
};

extern const u8 gTextWindowFrame1_Gfx[];
extern const u32 gTextWindowFrame1_Pal[];

const struct TilesPal *GetWindowFrameTilesPal(u8 id);
void LoadMessageBoxGfx(u8 windowId, u32 destOffset, u8 palOffset);
void LoadSignBoxGfx(u8 windowId, u32 destOffset, u8 palOffset);
void LoadWindowGfx(u8 windowId, u8 frameId, u32 destOffset, u8 palOffset);
void LoadUserWindowBorderGfx(u8 windowId, u32 destOffset, u8 palOffset);
void LoadUserWindowBorderGfx_(u8 windowId, u32 destOffset, u8 palOffset);
void LoadUserWindowBorderGfxOnBg(u8 bg, u32 destOffset, u8 palOffset);
void DrawTextBorderOuter(u8 windowId, u32 tileNum, u8 palNum);
void DrawTextBorderInner(u8 windowId, u32 tileNum, u8 palNum);
void rbox_fill_rectangle(u8 windowId);
const u32 *GetTextWindowPalette(u8 id);
const u32 *GetOverworldTextboxPalettePtr(void);
void LoadSignPostWindowFrameGfx(void);
void LoadDexNavWindowGfx(u8 windowId, u32 destOffset, u8 palOffset);

#endif // GUARD_TEXT_WINDOW_H
