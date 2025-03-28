#ifndef GUARD_SHOP_H
#define GUARD_SHOP_H

extern struct ItemSlot gMartPurchaseHistory[3];

void CreatePokemartMenu(const u32 *);
void CreateDecorationShop1Menu(const u32 *);
void CreateDecorationShop2Menu(const u32 *);
void CB2_ExitSellMenu(void);

#endif // GUARD_SHOP_H
