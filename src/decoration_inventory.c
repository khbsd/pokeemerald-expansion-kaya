#include "global.h"
#include "constants/decorations.h"
#include "decoration.h"
#include "decoration_inventory.h"

EWRAM_DATA struct DecorationInventory gDecorationInventories[DECORCAT_COUNT] = {};

#define SET_DECOR_INV(i, ptr) {\
    gDecorationInventories[i].items = ptr;\
    gDecorationInventories[i].size = ARRAY_COUNT(ptr);\
}

void SetDecorationInventoriesPointers(void)
{
    SET_DECOR_INV(DECORCAT_DESK, gSaveBlock1Ptr->decorationDesks);
    SET_DECOR_INV(DECORCAT_CHAIR, gSaveBlock1Ptr->decorationChairs);
    SET_DECOR_INV(DECORCAT_PLANT, gSaveBlock1Ptr->decorationPlants);
    SET_DECOR_INV(DECORCAT_ORNAMENT, gSaveBlock1Ptr->decorationOrnaments);
    SET_DECOR_INV(DECORCAT_MAT, gSaveBlock1Ptr->decorationMats);
    SET_DECOR_INV(DECORCAT_POSTER, gSaveBlock1Ptr->decorationPosters);
    SET_DECOR_INV(DECORCAT_DOLL, gSaveBlock1Ptr->decorationDolls);
    SET_DECOR_INV(DECORCAT_CUSHION, gSaveBlock1Ptr->decorationCushions);
    InitDecorationContextItems();
}

static void ClearDecorationInventory(u32 category)
{
    u32 i;
    for (i = 0; i < gDecorationInventories[category].size; i ++)
        gDecorationInventories[category].items[i] = DECOR_NONE;
}

void ClearDecorationInventories(void)
{
    u32 category;
    for (category = 0; category < DECORCAT_COUNT; category++)
        ClearDecorationInventory(category);
}

s32 GetFirstEmptyDecorSlot(u32 category)
{
    s32 i;
    for (i = 0; i < (s32)gDecorationInventories[category].size; i++)
    {
        if (gDecorationInventories[category].items[i] == DECOR_NONE)
            return i;
    }

    return -1;
}

bool32 CheckHasDecoration(u32 decor)
{
    u32 i;
    u32 category;

    category = gDecorations[decor].category;
    for (i = 0; i < gDecorationInventories[category].size; i ++)
    {
        if (gDecorationInventories[category].items[i] == decor)
            return TRUE;
    }

    return FALSE;
}

bool32 DecorationAdd(u32 decor)
{
    u32 category;
    s32 idx;

    if (decor == DECOR_NONE)
        return FALSE;
    category = gDecorations[decor].category;
    idx = GetFirstEmptyDecorSlot(category);
    if (idx == -1)
        return FALSE;
    gDecorationInventories[category].items[idx] = decor;
    return TRUE;
}

bool32 DecorationCheckSpace(u32 decor)
{
    if (decor == DECOR_NONE)
        return FALSE;
    if (GetFirstEmptyDecorSlot(gDecorations[decor].category) == -1)
        return FALSE;
    return TRUE;
}

s32 DecorationRemove(u32 decor)
{
    u32 i;
    u32 category;

    i = 0;
    if (decor == DECOR_NONE)
        return 0;

    for (i = 0; i < gDecorationInventories[gDecorations[decor].category].size; i ++)
    {
        category = gDecorations[decor].category;
        if (gDecorationInventories[category].items[i] == decor)
        {
            gDecorationInventories[category].items[i] = DECOR_NONE;
            CondenseDecorationsInCategory(category);
            return 1;
        }
    }

    return 0;
}

void CondenseDecorationsInCategory(u32 category)
{
    u32 i;
    u32 j;
    u32 tmp;

    for (i = 0; i < gDecorationInventories[category].size; i ++)
    {
        for (j = i + 1; j < gDecorationInventories[category].size; j ++)
        {
            if (gDecorationInventories[category].items[j] != DECOR_NONE && (gDecorationInventories[category].items[i] == DECOR_NONE || gDecorationInventories[category].items[i] > gDecorationInventories[category].items[j]))
            {
                tmp = gDecorationInventories[category].items[i];
                gDecorationInventories[category].items[i] = gDecorationInventories[category].items[j];
                gDecorationInventories[category].items[j] = tmp;
            }
        }
    }
}

u32 GetNumOwnedDecorationsInCategory(u32 category)
{
    u32 i;
    u32 ct;

    ct = 0;
    for (i = 0; i < gDecorationInventories[category].size; i++)
    {
        if (gDecorationInventories[category].items[i] != DECOR_NONE)
            ct++;
    }

    return ct;
}

u32 GetNumOwnedDecorations(void)
{
    u32 category;
    u32 count;

    count = 0;
    for (category = 0; category < DECORCAT_COUNT; category++)
        count += GetNumOwnedDecorationsInCategory(category);

    return count;
}
