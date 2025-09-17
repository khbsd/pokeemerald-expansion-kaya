#ifndef GUARD_POKERUS_H
#define GUARD_POKERUS_H

#include "constants/pokerus.h"

void RandomlyGivePartyPokerus(struct Pokemon *party);
bool32 CheckPlayerPartyPokerus();
bool32 CheckMonHasHadPokerus(struct Pokemon *mon);
bool32 CheckMonPokerus(struct Pokemon *mon);
void SpreadPokerusToSpecificMon(struct Pokemon *mon, enum PokerusStrains strain, u32 daysLeft);
void UpdatePartyPokerusTime(u16 days);
void PartySpreadPokerus(struct Pokemon *party, enum PokerusSpreadOverworld spreadType);
void InfectMonWithPokerus(void);
enum PokerusStrains GetPokerusStrain(void);
u32 GetPokerusDaysFromStrain(enum PokerusStrains strain);
u32 CanMonShedPokerus(struct Pokemon *mon);
void TrySpreadPokerusOverworld(enum PokerusSpreadOverworld spreadType);
void Debug_CheckPokerusStrain(void);

#endif // GUARD_POKERUS_H
