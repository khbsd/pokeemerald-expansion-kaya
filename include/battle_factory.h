#ifndef GUARD_BATTLE_FACTORY_H
#define GUARD_BATTLE_FACTORY_H

void CallBattleFactoryFunction(void);
bool32 InBattleFactory(void);
u8 GetFactoryMonFixedIV(u8 challengeNum, bool32 isLastBattle);
void FillFactoryBrainParty(void);
u8 GetNumPastRentalsRank(u8 battleMode, u8 lvlMode);
u32 GetAiScriptsInBattleFactory(void);
void SetMonMoveAvoidReturn(struct Pokemon *mon, u32 moveArg, u8 moveSlot);

#endif // GUARD_BATTLE_FACTORY_H
