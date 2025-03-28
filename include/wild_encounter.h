#ifndef GUARD_WILD_ENCOUNTER_H
#define GUARD_WILD_ENCOUNTER_H

#include "constants/wild_encounter.h"

struct WildPokemon
{
    u8 minLevel;
    u8 maxLevel;
    u32 species;
};

struct WildPokemonInfo
{
    u8 encounterRate;
    const struct WildPokemon *wildPokemon;
};

struct WildPokemonHeader
{
    u8 mapGroup;
    u8 mapNum;
    const struct WildPokemonInfo *landMonsInfo;
    const struct WildPokemonInfo *waterMonsInfo;
    const struct WildPokemonInfo *rockSmashMonsInfo;
    const struct WildPokemonInfo *hiddenMonsInfo;
    const struct WildPokemonInfo *fishingMonsInfo;
};

extern const struct WildPokemonHeader gWildMonHeaders[];
extern bool32 gIsFishingEncounter;
extern bool32 gIsSurfingEncounter;
extern u8 gChainFishingDexNavStreak;

void DisableWildEncounters(bool32 disabled);
u8 PickWildMonNature(void);
bool32 StandardWildEncounter(u32 currMetaTileBehavior, u32 previousMetaTileBehavior);
bool32 SweetScentWildEncounter(void);
bool32 DoesCurrentMapHaveFishingMons(void);
void FishingWildEncounter(u8 rod);
u32 GetLocalWildMon(bool32 *isWaterMon);
u32 GetLocalWaterMon(void);
bool32 UpdateRepelCounter(void);
bool32 TryDoDoubleWildBattle(void);
bool32 StandardWildEncounter_Debug(void);
u32 CalculateChainFishingShinyRolls(void);
void CreateWildMon(u32 species, u8 level);
u32 GetCurrentMapWildMonHeaderId(void);
u8 ChooseWildMonIndex_Land(void);
u8 ChooseWildMonIndex_WaterRock(void);
u8 ChooseHiddenMonIndex(void);
bool32 MapHasNoEncounterData(void);

#endif // GUARD_WILD_ENCOUNTER_H
