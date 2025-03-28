#ifndef GUARD_COINS_H
#define GUARD_COINS_H

void PrintCoinsString(u32 coinAmount);
void ShowCoinsWindow(u32 coinAmount, u8 x, u8 y);
void HideCoinsWindow(void);
u32 GetCoins(void);
void SetCoins(u32 coinAmount);
bool8 AddCoins(u32 toAdd);
bool8 RemoveCoins(u32 toSub);

#endif // GUARD_COINS_H
