#ifndef GUARD_POKERUS_H
#define GUARD_POKERUS_H

void RandomlyGivePartyPokerus(struct Pokemon *party);
u8 CheckPartyPokerus(struct Pokemon *party, u8 selection);
u8 CheckPartyHasHadPokerus(struct Pokemon *party, u8 selection);
void SpreadPokerusToSpecificMon(struct Pokemon *mon, u32 strain, u32 daysLeft);
void UpdatePartyPokerusTime(u16 days);
void PartySpreadPokerus(struct Pokemon *party);
void InfectMonWithPokerus(u32 slot, u32 days);
u32 GetPokerusStrain(void);
u32 GetPokerusDaysFromStrain(u32 strain);

void Debug_CheckPokerusStrain(void);

#endif // GUARD_POKERUS_H