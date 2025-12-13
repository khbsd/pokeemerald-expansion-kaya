#include "global.h"
#include "blit.h"
#include "decompress.h"
#include "window.h"
#include "malloc.h"
#include "menu.h"
#include "palette.h"
#include "event_data.h"
#include "constants/overworld_image.h"

#define OVERWORLDIMAGE_PALETTE_NUM 13

static const u32 sOverworldImg_Lesbian[] = INCBIN_U32("graphics/screenshots/lesbian/lesbian.4bpp.smol");
static const u32 sOverworldImg_Guillotine[] = INCBIN_U32("graphics/screenshots/guillotine/guillotine.4bpp.smol");
static const u16 sOverworldPal[] = INCBIN_U16("graphics/screenshots/palette.gbapal");

struct OverworldImage{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    const u32* image;
    const u16* palette;
};

void DrawOverworldImage(void); //VAR_0x8000 = overworldImage id
void DrawOverworldImageAtPos(void); //VAR_0x8000 = overworldImage id, VAR_0x8001 = x, VAR_0x8002 = y
void ClearOverworldImage(void);


static const struct OverworldImage sOverworldImages[] =
{
    [OVERWORLDIMAGE_LESBIAN] =
    {
        .x = 2,
        .y = 3,
        .width = 200,
        .height = 72,
        .image = sOverworldImg_Lesbian,
        .palette = sOverworldPal,
    },
    [OVERWORLDIMAGE_GUILLOTINE] =
    {
        .x = 2,
        .y = 3,
        .width = 200,
        .height = 72,
        .image = sOverworldImg_Guillotine,
        .palette = sOverworldPal,
    }
};


//WindowId + 1, 0 if window is not open
static EWRAM_DATA u8 gOverworldImageWindow = 0;

void ClearOverworldImage(void)
{
    DebugPrintf("gOverworldImageWindow: %u", gOverworldImageWindow);
    if (gOverworldImageWindow != 0)
    {
        DebugPrintf("clearing");
        //FillWindowPixelBuffer(gOverworldImageWindow - 1, PIXEL_FILL(0));
        //ClearWindowTilemap(gOverworldImageWindow - 1);
        ClearStdWindowAndFrameToTransparent(gOverworldImageWindow - 1, TRUE);
        RemoveWindow(gOverworldImageWindow - 1);
        gOverworldImageWindow = 0;
    }
}

static void DrawOverworldImageCore(const struct OverworldImage* const overworldImage, int x, int y)
{
    struct WindowTemplate t;
    u16 windowId;

    DebugPrintf("size of image: %u", sizeof(overworldImage->image));

    if(gOverworldImageWindow != 0)
    {
        ClearOverworldImage();
    }

    DebugPrintf("drawing image at x: %u, y: %u", x, y);

    #if GAME_VERSION==VERSION_EMERALD
    SetWindowTemplateFields(&t, 0, x, y, overworldImage->width/8, overworldImage->height/8, OVERWORLDIMAGE_PALETTE_NUM, 0x40);
    #else
    t = SetWindowTemplateFields(0, x, y, image->width/8, overworldImage->height/8, OVERWORLDIMAGE_PALETTE_NUM, 0x40);
    #endif
    windowId = AddWindow(&t);
    gOverworldImageWindow = windowId + 1;

    DebugPrintf("loading resources");

    LoadPalette(overworldImage->palette, 16 * OVERWORLDIMAGE_PALETTE_NUM, 32);
    DebugPrintf("palette loaded");
    CopyToWindowPixelBuffer(windowId, overworldImage->image, 0, 0);
    DebugPrintf("copying to buffer complete");
    PutWindowRectTilemap(windowId, 0, 0, overworldImage->width/8, overworldImage->height/8);
    DebugPrintf("copying to vram...");
    CopyWindowToVram(windowId, 3);
}

void DrawOverworldImage(void)
{
    const struct OverworldImage* const overworldImage = sOverworldImages + VarGet(VAR_0x8000);
    DrawOverworldImageCore(overworldImage, overworldImage->x, overworldImage->y);
}

void DrawOverworldImageAtPos(void)
{
    DrawOverworldImageCore(sOverworldImages + VarGet(VAR_0x8000), VarGet(VAR_0x8001), VarGet(VAR_0x8002));
}
