#include "global.h"
#include "coins.h"
#include "text.h"
#include "window.h"
#include "strings.h"
#include "string_util.h"
#include "menu.h"
#include "international_string_util.h"
#include "constants/coins.h"

static EWRAM_DATA u32 sCoinsWindowId = 0;

void PrintCoinsString(u32 coinAmount)
{
    u32 xAlign;

    ConvertIntToDecimalStringN(gStringVar1, coinAmount, STR_CONV_MODE_RIGHT_ALIGN, MAX_COIN_DIGITS);
    StringExpandPlaceholders(gStringVar4, gText_Coins);

    xAlign = GetStringRightAlignXOffset(FONT_NORMAL, gStringVar4, 0x40);
    AddTextPrinterParameterized(sCoinsWindowId, FONT_NORMAL, gStringVar4, xAlign, 1, 0, NULL);
}

void ShowCoinsWindow(u32 coinAmount, u32 x, u32 y)
{
    struct WindowTemplate template;
    SetWindowTemplateFields(&template, 0, x, y, 8, 2, 0xF, 0x141);
    sCoinsWindowId = AddWindow(&template);
    FillWindowPixelBuffer(sCoinsWindowId, PIXEL_FILL(0));
    PutWindowTilemap(sCoinsWindowId);
    DrawStdFrameWithCustomTileAndPalette(sCoinsWindowId, FALSE, 0x214, 0xE);
    PrintCoinsString(coinAmount);
}

void HideCoinsWindow(void)
{
    ClearStdWindowAndFrame(sCoinsWindowId, TRUE);
    RemoveWindow(sCoinsWindowId);
}

u32 GetCoins(void)
{
    return gSaveBlock1Ptr->coins ^ gSaveBlock2Ptr->encryptionKey;
}

void SetCoins(u32 coinAmount)
{
    gSaveBlock1Ptr->coins = coinAmount ^ gSaveBlock2Ptr->encryptionKey;
}

bool32 AddCoins(u32 toAdd)
{
    u32 newAmount;
    u32 ownedCoins = GetCoins();
    if (ownedCoins >= MAX_COINS)
        return FALSE;
    // check overflow, can't have less coins than previously
    if (ownedCoins > ownedCoins + toAdd)
    {
        newAmount = MAX_COINS;
    }
    else
    {
        ownedCoins += toAdd;
        if (ownedCoins > MAX_COINS)
            ownedCoins = MAX_COINS;
        newAmount = ownedCoins;
    }
    SetCoins(newAmount);
    return TRUE;
}

bool32 RemoveCoins(u32 toSub)
{
    u32 ownedCoins = GetCoins();
    if (ownedCoins >= toSub)
    {
        SetCoins(ownedCoins - toSub);
        return TRUE;
    }
    return FALSE;
}
