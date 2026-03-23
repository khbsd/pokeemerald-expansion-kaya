#ifndef GUARD_ROAMER_H
#define GUARD_ROAMER_H

#include "constants/species.h"
#include "pokemon.h"

void DeactivateAllRoamers(void);
void InitRoamer(void);
void UpdateLocationHistoryForRoamer(void);
void RoamerMoveToOtherLocationSet(u32 roamerIndex);
void RoamerMove(u32 roamerIndex);
bool8 IsRoamerAt(u32 roamerIndex, u8 mapGroup, u8 mapNum);
void CreateRoamerMonInstance(u32 roamerIndex);
bool8 TryStartRoamerEncounter(void);
void UpdateRoamerHPStatus(struct Pokemon *mon);
void SetRoamerInactive(u32 roamerIndex);
void GetRoamerLocation(u32 roamerIndex, u8 *mapGroup, u8 *mapNum);
bool8 TryAddRoamer(enum Species species, u8 level);
void MoveAllRoamersToOtherLocationSets(void);
void MoveAllRoamers(void);
void InitNextRoamer(void);

#define ROAMER_LEVEL 80
#define ROAMER_SPECIES_POOL_COUNT 31

static const u32 sRoamerSpeciesList[] = 
{
    SPECIES_ARTICUNO,
    SPECIES_ARTICUNO_GALAR,
    SPECIES_ZAPDOS,
    SPECIES_ZAPDOS_GALAR,
    SPECIES_MOLTRES,
    SPECIES_MOLTRES_GALAR,
    SPECIES_MEW,
    SPECIES_MEWTWO,
    SPECIES_HO_OH,
    SPECIES_LUGIA,
    SPECIES_RAIKOU,
    SPECIES_ENTEI,
    SPECIES_SUICUNE,
    SPECIES_CELEBI,
    SPECIES_LATIOS,
    SPECIES_LATIAS,
    SPECIES_REGICE,
    SPECIES_REGIROCK,
    SPECIES_REGISTEEL,
    SPECIES_GROUDON,
    SPECIES_KYOGRE,
    SPECIES_RAYQUAZA,
    SPECIES_DIALGA,
    SPECIES_PALKIA,
    SPECIES_GIRATINA,
    SPECIES_UXIE,
    SPECIES_MESPRIT,
    SPECIES_AZELF,
    SPECIES_SHAYMIN,
    SPECIES_HEATRAN,
    SPECIES_MANAPHY,
    SPECIES_DARKRAI,
    SPECIES_CRESSELIA,
    SPECIES_ARCEUS,
};

extern u8 gEncounteredRoamerIndex;

#endif // GUARD_ROAMER_H
