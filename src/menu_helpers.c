#include "global.h"
#include "task.h"
#include "window.h"
#include "menu.h"
#include "menu_helpers.h"
#include "gpu_regs.h"
#include "bg.h"
#include "main.h"
#include "text.h"
#include "graphics.h"
#include "link.h"
#include "string_util.h"
#include "sound.h"
#include "mail.h"
#include "overworld.h"
#include "decompress.h"
#include "constants/songs.h"
#include "constants/items.h"

#define TAG_SWAP_LINE 109

static void Task_ContinueTaskAfterMessagePrints(u32 taskId);
static void Task_CallYesOrNoCallback(u32 taskId);

EWRAM_DATA static struct YesNoFuncTable sYesNo = {0};
EWRAM_DATA static u32 sMessageWindowId = 0;

static TaskFunc sMessageNextTask;

static const struct OamData sOamData_SwapLine =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0
};

static const union AnimCmd sAnim_SwapLine_RightArrow[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd sAnim_SwapLine_Line[] =
{
    ANIMCMD_FRAME(4, 0),
    ANIMCMD_END
};

static const union AnimCmd sAnim_SwapLine_LeftArrow[] =
{
    ANIMCMD_FRAME(0, 0, .hFlip = TRUE),
    ANIMCMD_END
};

static const union AnimCmd *const sAnims_SwapLine[] =
{
    sAnim_SwapLine_RightArrow,
    sAnim_SwapLine_Line,
    sAnim_SwapLine_LeftArrow
};

static const struct CompressedSpriteSheet sSpriteSheet_SwapLine =
{
    gSwapLineGfx, 0x100, TAG_SWAP_LINE
};

static const struct CompressedSpritePalette sSpritePalette_SwapLine =
{
    gSwapLinePal, TAG_SWAP_LINE
};

static const struct SpriteTemplate sSpriteTemplate_SwapLine =
{
    .tileTag = TAG_SWAP_LINE,
    .paletteTag = TAG_SWAP_LINE,
    .oam = &sOamData_SwapLine,
    .anims = sAnims_SwapLine,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

// code
void ResetVramOamAndBgCntRegs(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BG3CNT, 0);
    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    CpuFill16(0, (void *) VRAM, VRAM_SIZE);
    CpuFill32(0, (void *) OAM, OAM_SIZE);
    CpuFill16(0, (void *) PLTT, PLTT_SIZE);
}

void ResetAllBgsCoordinates(void)
{
    ChangeBgX(0, 0, BG_COORD_SET);
    ChangeBgY(0, 0, BG_COORD_SET);
    ChangeBgX(1, 0, BG_COORD_SET);
    ChangeBgY(1, 0, BG_COORD_SET);
    ChangeBgX(2, 0, BG_COORD_SET);
    ChangeBgY(2, 0, BG_COORD_SET);
    ChangeBgX(3, 0, BG_COORD_SET);
    ChangeBgY(3, 0, BG_COORD_SET);
}

void SetVBlankHBlankCallbacksToNull(void)
{
    SetVBlankCallback(NULL);
    SetHBlankCallback(NULL);
}

void DisplayMessageAndContinueTask(u32 taskId, u32 windowId, u32 tileNum, u32 paletteNum, u32 fontId, u32 textSpeed, const u32 *string, void *taskFunc)
{
    sMessageWindowId = windowId;
    DrawDialogFrameWithCustomTileAndPalette(windowId, TRUE, tileNum, paletteNum);

    if (string != gStringVar4)
        StringExpandPlaceholders(gStringVar4, string);

    gTextFlags.canABSpeedUpPrint = 1;
    AddTextPrinterParameterized2(windowId, fontId, gStringVar4, textSpeed, NULL, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY);
    sMessageNextTask = taskFunc;
    gTasks[taskId].func = Task_ContinueTaskAfterMessagePrints;
}

bool32 RunTextPrintersRetIsActive(u32 textPrinterId)
{
    RunTextPrinters();
    return IsTextPrinterActive(textPrinterId);
}

static void Task_ContinueTaskAfterMessagePrints(u32 taskId)
{
    if (!RunTextPrintersRetIsActive(sMessageWindowId))
        sMessageNextTask(taskId);
}

void DoYesNoFuncWithChoice(u32 taskId, const struct YesNoFuncTable *data)
{
    sYesNo = *data;
    gTasks[taskId].func = Task_CallYesOrNoCallback;
}

void CreateYesNoMenuWithCallbacks(u32 taskId, const struct WindowTemplate *template, u32 unused1, u32 unused2, u32 unused3, u32 tileStart, u32 palette, const struct YesNoFuncTable *yesNo)
{
    CreateYesNoMenu(template, tileStart, palette, 0);
    sYesNo = *yesNo;
    gTasks[taskId].func = Task_CallYesOrNoCallback;
}

static void Task_CallYesOrNoCallback(u32 taskId)
{
    switch (Menu_ProcessInputNoWrapClearOnChoose())
    {
    case 0:
        PlaySE(SE_SELECT);
        sYesNo.yesFunc(taskId);
        break;
    case 1:
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        sYesNo.noFunc(taskId);
        break;
    }
}

// Returns TRUE if the quantity was changed, FALSE if it remained the same
bool32 AdjustQuantityAccordingToDPadInput(s32 *quantity, u32 max)
{
    s32 valBefore = *quantity;

    if (JOY_REPEAT(DPAD_ANY) == DPAD_UP)
    {
        (*quantity)++;
        if (*quantity > max)
            *quantity = 1;

        if (*quantity == valBefore)
        {
            return FALSE;
        }
        else
        {
            PlaySE(SE_SELECT);
            return TRUE;
        }
    }
    else if (JOY_REPEAT(DPAD_ANY) == DPAD_DOWN)
    {
        (*quantity)--;
        if (*quantity <= 0)
            *quantity = max;

        if (*quantity == valBefore)
        {
            return FALSE;
        }
        else
        {
            PlaySE(SE_SELECT);
            return TRUE;
        }
    }
    else if (JOY_REPEAT(DPAD_ANY) == DPAD_RIGHT)
    {
        *quantity += 10;
        if (*quantity > max)
            *quantity = max;

        if (*quantity == valBefore)
        {
            return FALSE;
        }
        else
        {
            PlaySE(SE_SELECT);
            return TRUE;
        }
    }
    else if (JOY_REPEAT(DPAD_ANY) == DPAD_LEFT)
    {
        *quantity -= 10;
        if (*quantity <= 0)
            *quantity = 1;

        if (*quantity == valBefore)
        {
            return FALSE;
        }
        else
        {
            PlaySE(SE_SELECT);
            return TRUE;
        }
    }

    return FALSE;
}

u32 GetLRKeysPressed(void)
{
    if (gSaveBlock2Ptr->optionsButtonMode == OPTIONS_BUTTON_MODE_LR)
    {
        if (JOY_NEW(L_BUTTON))
            return MENU_L_PRESSED;
        if (JOY_NEW(R_BUTTON))
            return MENU_R_PRESSED;
    }

    return 0;
}

u32 GetLRKeysPressedAndHeld(void)
{
    if (gSaveBlock2Ptr->optionsButtonMode == OPTIONS_BUTTON_MODE_LR)
    {
        if (JOY_REPEAT(L_BUTTON))
            return MENU_L_PRESSED;
        if (JOY_REPEAT(R_BUTTON))
            return MENU_R_PRESSED;
    }

    return 0;
}

bool32 IsHoldingItemAllowed(u32 itemId)
{
    // e-Reader Enigma Berry can't be held in link areas
    if (itemId == ITEM_ENIGMA_BERRY_E_READER
     && ((gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(TRADE_CENTER)
       && gSaveBlock1Ptr->location.mapNum == MAP_NUM(TRADE_CENTER))
       || InUnionRoom() == TRUE))
        return FALSE;
    else
        return TRUE;
}

bool32 IsWritingMailAllowed(u32 itemId)
{
    if ((IsOverworldLinkActive() == TRUE || InUnionRoom() == TRUE) && ItemIsMail(itemId) == TRUE)
        return FALSE;
    else
        return TRUE;
}

bool32 MenuHelpers_IsLinkActive(void)
{
    if (IsOverworldLinkActive() == TRUE || gReceivedRemoteLinkPlayers == 1)
        return TRUE;
    else
        return FALSE;
}

static bool32 IsActiveOverworldLinkBusy(void)
{
    if (!MenuHelpers_IsLinkActive())
        return FALSE;
    else
        return Overworld_IsRecvQueueAtMax();
}

bool32 MenuHelpers_ShouldWaitForLinkRecv(void)
{
    if (IsActiveOverworldLinkBusy() == TRUE || IsLinkRecvQueueAtOverworldMax() == TRUE )
        return TRUE;
    else
        return FALSE;
}

void SetItemListPerPageCount(struct ItemSlot *slots, u32 slotsCount, u32 *pageItems, u32 *totalItems, u32 maxPerPage)
{
    u32 i;
    struct ItemSlot *slots_ = slots;

    // Count the number of non-empty item slots
    *totalItems = 0;
    for (i = 0; i < slotsCount; i++)
    {
        if (slots_[i].itemId != ITEM_NONE)
            (*totalItems)++;
    }
    (*totalItems)++; // + 1 for 'Cancel'

    // Set number of items per page
    if (*totalItems > maxPerPage)
        *pageItems = maxPerPage;
    else
        *pageItems = *totalItems;
}

void SetCursorWithinListBounds(u32 *scrollOffset, u32 *cursorPos, u32 maxShownItems, u32 totalItems)
{
    if (*scrollOffset != 0 && *scrollOffset + maxShownItems > totalItems)
        *scrollOffset = totalItems - maxShownItems;

    if (*scrollOffset + *cursorPos >= totalItems)
    {
        if (totalItems == 0)
            *cursorPos = 0;
        else
            *cursorPos = totalItems - 1;
    }
}

void SetCursorScrollWithinListBounds(u32 *scrollOffset, u32 *cursorPos, u32 shownItems, u32 totalItems, u32 maxShownItems)
{
    u32 i;

    if (maxShownItems % 2 != 0)
    {
        // Is cursor at least halfway down visible list
        if (*cursorPos >= maxShownItems / 2)
        {
            for (i = 0; i < *cursorPos - (maxShownItems / 2); i++)
            {
                // Stop if reached end of list
                if (*scrollOffset + shownItems == totalItems)
                    break;
                (*cursorPos)--;
                (*scrollOffset)++;
            }
        }
    }
    else
    {
        // Is cursor at least halfway down visible list
        if (*cursorPos >= (maxShownItems / 2) + 1)
        {
            for (i = 0; i <= *cursorPos - (maxShownItems / 2); i++)
            {
                // Stop if reached end of list
                if (*scrollOffset + shownItems == totalItems)
                    break;
                (*cursorPos)--;
                (*scrollOffset)++;
            }
        }
    }
}

void LoadListMenuSwapLineGfx(void)
{
    LoadCompressedSpriteSheet(&sSpriteSheet_SwapLine);
    LoadCompressedSpritePalette(&sSpritePalette_SwapLine);
}

void CreateSwapLineSprites(u32 *spriteIds, u32 count)
{
    u32 i;

    for (i = 0; i < count; i++)
    {
        spriteIds[i] = CreateSprite(&sSpriteTemplate_SwapLine, i * 16, 0, 0);
        if (i != 0)
            StartSpriteAnim(&gSprites[spriteIds[i]], 1);

        gSprites[spriteIds[i]].invisible = TRUE;
    }
}

void DestroySwapLineSprites(u32 *spriteIds, u32 count)
{
    u32 i;

    for (i = 0; i < count; i++)
    {
        if (i == count - 1)
            DestroySpriteAndFreeResources(&gSprites[spriteIds[i]]);
        else
            DestroySprite(&gSprites[spriteIds[i]]);
    }
}

void SetSwapLineSpritesInvisibility(u32 *spriteIds, u32 count, bool32 invisible)
{
    u32 i;

    for (i = 0; i < count; i++)
        gSprites[spriteIds[i]].invisible = invisible;
}

void UpdateSwapLineSpritesPos(u32 *spriteIds, u32 count, s32 x, u32 y)
{
    u32 i;
    bool32 hasMargin = count & SWAP_LINE_HAS_MARGIN;
    count &= ~SWAP_LINE_HAS_MARGIN;

    for (i = 0; i < count; i++)
    {
        // If the list menu has a right margin, the swap line
        // shouldn't extend all the way to the edge of the screen.
        // If this is the last sprite in the line, move it a bit
        // to the left to keep it out of the margin.
        if (i == count - 1 && hasMargin)
            gSprites[spriteIds[i]].x2 = x - 8;
        else
            gSprites[spriteIds[i]].x2 = x;

        gSprites[spriteIds[i]].y = 1 + y;
    }
}
