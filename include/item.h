#ifndef GUARD_ITEM_H
#define GUARD_ITEM_H

#include "constants/item.h"
#include "constants/items.h"
#include "constants/tms_hms.h"

typedef void (*ItemUseFunc)(u8);

struct Item
{
    u32 price;
    u32 secondaryId;
    ItemUseFunc fieldUseFunc;
    const u8 *description;
    const u8 *effect;
    u8 name[ITEM_NAME_LENGTH];
    u8 pluralName[ITEM_NAME_PLURAL_LENGTH];
    u8 holdEffect;
    u8 holdEffectParam;
    u8 importance:2;
    u8 notConsumed:1;
    u8 padding:5;
    u8 pocket;
    u8 type;
    u8 battleUsage;
    u8 flingPower;
    const u32 *iconPic;
    const u32 *iconPalette;
};

struct BagPocket
{
    struct ItemSlot *itemSlots;
    u8 capacity;
};

extern const struct Item gItemsInfo[];
extern struct BagPocket gBagPockets[];

void ApplyNewEncryptionKeyToBagItems(u32 newKey);
void ApplyNewEncryptionKeyToBagItems_(u32 newKey);
void SetBagItemsPointers(void);
u8 *CopyItemName(u32 itemId, u8 *dst);
u8 *CopyItemNameHandlePlural(u32 itemId, u8 *dst, u32 quantity);
bool32 IsBagPocketNonEmpty(u8 pocket);
bool32 CheckBagHasItem(u32 itemId, u32 count);
bool32 HasAtLeastOneBerry(void);
bool32 HasAtLeastOnePokeBall(void);
bool32 CheckBagHasSpace(u32 itemId, u32 count);
u32 GetFreeSpaceForItemInBag(u32 itemId);
bool32 AddBagItem(u32 itemId, u32 count);
bool32 RemoveBagItem(u32 itemId, u32 count);
u8 GetPocketByItemId(u32 itemId);
void ClearItemSlots(struct ItemSlot *itemSlots, u8 itemCount);
u8 CountUsedPCItemSlots(void);
bool32 CheckPCHasItem(u32 itemId, u32 count);
bool32 AddPCItem(u32 itemId, u32 count);
void RemovePCItem(u8 index, u32 count);
void CompactPCItems(void);
void SwapRegisteredBike(void);
u32 BagGetItemIdByPocketPosition(u8 pocketId, u32 pocketPos);
u32 BagGetQuantityByPocketPosition(u8 pocketId, u32 pocketPos);
void CompactItemsInBagPocket(struct BagPocket *bagPocket);
void SortBerriesOrTMHMs(struct BagPocket *bagPocket);
void MoveItemSlotInList(struct ItemSlot* itemSlots_, u32 from, u32 to_);
void ClearBag(void);
u32 CountTotalItemQuantityInBag(u32 itemId);
bool32 AddPyramidBagItem(u32 itemId, u32 count);
bool32 RemovePyramidBagItem(u32 itemId, u32 count);
const u8 *ItemId_GetName(u32 itemId);
u32 ItemId_GetPrice(u32 itemId);
const u8 *ItemId_GetEffect(u32 itemId);
u32 ItemId_GetHoldEffect(u32 itemId);
u32 ItemId_GetHoldEffectParam(u32 itemId);
const u8 *ItemId_GetDescription(u32 itemId);
u8 ItemId_GetImportance(u32 itemId);
u8 ItemId_GetConsumability(u32 itemId);
u8 ItemId_GetPocket(u32 itemId);
u8 ItemId_GetType(u32 itemId);
ItemUseFunc ItemId_GetFieldFunc(u32 itemId);
u8 ItemId_GetBattleUsage(u32 itemId);
u32 ItemId_GetSecondaryId(u32 itemId);
u32 ItemId_GetFlingPower(u32 itemId);
u32 GetItemStatus1Mask(u32 itemId);
u32 GetItemStatus2Mask(u32 itemId);

/* Expands to:
 * enum
 * {
 *   ITEM_TM_FOCUS_PUNCH,
 *   ...
 *   ITEM_HM_CUT,
 *   ...
 * }; */
#define ENUM_TM(id) CAT(ITEM_TM_, id),
#define ENUM_HM(id) CAT(ITEM_HM_, id),
enum
{
    ENUM_TM_START_ = ITEM_TM01 - 1,
    FOREACH_TM(ENUM_TM)

    ENUM_HM_START_ = ITEM_HM01 - 1,
    FOREACH_HM(ENUM_HM)
};
#undef ENUM_TM
#undef ENUM_HM

#endif // GUARD_ITEM_H
