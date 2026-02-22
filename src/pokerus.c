#include "global.h"
#include "event_data.h"
#include "generational_changes.h"
#include "main.h"
#include "pokemon.h"
#include "pokerus.h"
#include "random.h"
#include "constants/pokerus.h"

// Pokérus strains
const u16 POKERUS_STRAINS_GEN_2[] =
{
    [PKRS_STRAIN_1]  = 15,
    [PKRS_STRAIN_2]  = 30,
    [PKRS_STRAIN_3]  = 30,
    [PKRS_STRAIN_4]  = 30,
    [PKRS_STRAIN_5]  = 30,
    [PKRS_STRAIN_6]  = 30,
    [PKRS_STRAIN_7]  = 30,
    [PKRS_STRAIN_8]  = 30,
    [PKRS_STRAIN_9]  = 30,
    [PKRS_STRAIN_10] = 1,
    [PKRS_STRAIN_11] = 1,
    [PKRS_STRAIN_12] = 1,
    [PKRS_STRAIN_13] = 1,
    [PKRS_STRAIN_14] = 1,
    [PKRS_STRAIN_15] = 1,
    [PKRS_STRAIN_16] = 1,
};

const u16 POKERUS_STRAINS_GEN_4[] =
{
    [PKRS_STRAIN_1]   = 30,
    [PKRS_STRAIN_2]   = 31,
    [PKRS_STRAIN_3]   = 31,
    [PKRS_STRAIN_4]   = 31,
    [PKRS_STRAIN_5]   = 31,
    [PKRS_STRAIN_6]   = 31,
    [PKRS_STRAIN_7]   = 31,
    [PKRS_STRAIN_8]   = 31,
    [PKRS_STRAIN_9]   = 1,
    [PKRS_STRAIN_10]  = 1,
    [PKRS_STRAIN_11]  = 1,
    [PKRS_STRAIN_12]  = 1,
    [PKRS_STRAIN_13]  = 1,
    [PKRS_STRAIN_14]  = 1,
    [PKRS_STRAIN_15]  = 1,
    [PKRS_STRAIN_16]  = 1,
};

const u16 POKERUS_STRAINS_GEN_8[] =
{
    [PKRS_STRAIN_1]   = 0,
    [PKRS_STRAIN_2]   = 31,
    [PKRS_STRAIN_3]   = 31,
    [PKRS_STRAIN_4]   = 31,
    [PKRS_STRAIN_5]   = 31,
    [PKRS_STRAIN_6]   = 31,
    [PKRS_STRAIN_7]   = 31,
    [PKRS_STRAIN_8]   = 31,
    [PKRS_STRAIN_9]   = 0,
    [PKRS_STRAIN_10]  = 1,
    [PKRS_STRAIN_11]  = 1,
    [PKRS_STRAIN_12]  = 1,
    [PKRS_STRAIN_13]  = 1,
    [PKRS_STRAIN_14]  = 1,
    [PKRS_STRAIN_15]  = 1,
    [PKRS_STRAIN_16]  = 1,
};

const u16 POKERUS_STRAINS_GEN_3_REDUX[] =
{
    [PKRS_UNINFECTED] = 0,
    [PKRS_STRAIN_2]   = 10,
    [PKRS_STRAIN_3]   = 10,
    [PKRS_STRAIN_4]   = 10,
    [PKRS_STRAIN_5]   = 10,
    [PKRS_STRAIN_6]   = 10,
    [PKRS_STRAIN_7]   = 10,
    [PKRS_STRAIN_8]   = 10,
    [PKRS_CURED]      = 0,
    [PKRS_STRAIN_10]  = 10,
    [PKRS_STRAIN_11]  = 10,
    [PKRS_STRAIN_12]  = 10,
    [PKRS_STRAIN_13]  = 10,
    [PKRS_STRAIN_14]  = 10,
    [PKRS_STRAIN_15]  = 10,
    [PKRS_STRAIN_16]  = 10,
};

void Debug_CheckPokerusStrain(void)
{
    //DebugPrintf("pokerus strain: %u", GetPokerusStrain());
    DebugPrintf("first mon pokerus days: %u of strain %u", GetMonData(&gPlayerParty[0], MON_DATA_POKERUS_DAYS_LEFT), GetMonData(&gPlayerParty[0], MON_DATA_POKERUS_STRAIN));
}

void TrySpreadPokerusOverworld(enum PokerusSpreadOverworld spreadType)
{
    u32 badgeSpreadChance;
    switch (spreadType)
    {
    case SPREAD_DAY_UPDATE:
        badgeSpreadChance = GetNumOwnedBadges() * 4;
        break;
    default:
    case SPREAD_STEPS:
        badgeSpreadChance = GetNumOwnedBadges() / 2;
        break;
    }
    if (RandomPercentage(RNG_POKERUS_OW_SPREAD_CHANCE, badgeSpreadChance))
        PartySpreadPokerus(gPlayerParty, spreadType);
}

// helper funcs
enum PokerusStrains GetPokerusStrain(void)
{
    // Gen 1 - 2 (Gen 1 had no pokerus but we default it with gen 2)
    if (P_POKERUS_STRAIN_DISTRIBUTION < GEN_3)
        return RandomWeightedArrayIndex(RNG_POKERUS_STRAIN, POKERUS_STRAINS_GEN_2);
    //Gen 3 - 4
    else if (P_POKERUS_STRAIN_DISTRIBUTION < GEN_5)
        return RandomWeightedArrayIndex(RNG_POKERUS_STRAIN, POKERUS_STRAINS_GEN_4);
    else if (P_POKERUS_STRAIN_DISTRIBUTION == GEN_3_REDUX)
        return RandomWeightedArrayIndex(RNG_POKERUS_STRAIN, POKERUS_STRAINS_GEN_3_REDUX);
    // Gen 5+ (Pokerus was disabled in gen 9 but we default it here)
    else
        return RandomWeightedArrayIndex(RNG_POKERUS_STRAIN, POKERUS_STRAINS_GEN_8);
}

u32 CanMonShedPokerus(struct Pokemon *mon)
{
    enum PokerusStrains strain = GetMonData(mon, MON_DATA_POKERUS_STRAIN);
    bool32 shedChance = GetNumOwnedBadges() * P_POKERUS_SHED_BADGE_BOOST;

    if (strain == PKRS_CURED
        && P_POKERUS_CURED_VIRUS_SHEDDING
        && RandomPercentage(RNG_POKERUS_SHED_CHANCE, shedChance)
    )   return TRUE;
    return FALSE;
}

u32 GetPokerusDaysFromStrain(enum PokerusStrains strain)
{
    u32 gymBonus = (GetNumOwnedBadges() % 2) + FlagGet(FLAG_IS_CHAMPION) + FlagGet(FLAG_DEFEATED_METEOR_FALLS_STEVEN);
    u32 days = (strain % 4) + 1;

    if (P_POKERUS_STRAIN_DISTRIBUTION == GEN_3_REDUX)
    {
        if (strain == PKRS_CURED || strain == PKRS_UNINFECTED)
            return 0;
        days += gymBonus;
    }
    return days;
}

u32 GetRandomPokerusDays(void)
{
    return RandomUniform(RNG_POKERUS_INFECTION_DAYS, MIN_POKERUS_DAYS, MAX_POKERUS_DAYS);
}

void SpreadPokerusToSpecificMon(struct Pokemon *mon, enum PokerusStrains strain, u32 daysLeft)
{
    SetMonData(mon, MON_DATA_POKERUS_STRAIN, &strain);
    SetMonData(mon, MON_DATA_POKERUS_DAYS_LEFT, &daysLeft);
}

void RandomlyGivePartyPokerus(struct Pokemon *party)
{
    if (!GetConfig(P_POKERUS_ENABLED))
        return;

    if (!GetConfig(P_POKERUS_INFECT_AGAIN) && CheckPlayerPartyPokerus())
        return;

    if (P_POKERUS_FLAG_INFECTION && !FlagGet(P_POKERUS_FLAG_INFECTION))
        return;

    u32 rndChance = Random();
    u32 infectionChance = (GetNumOwnedBadges() * P_BADGE_BOOST_POKERUS_CHANCE) 
                        + ((gSaveBlock3Ptr->repeatSpeciesCount + POKERUS_INFECTION_CHANCE)
                        * (gMain.isPokeMoon + 1));
    enum PokerusStrains strain = GetPokerusStrain();

    if (rndChance < infectionChance)
    {
        struct Pokemon *mon;
        u32 rndSlot;

        for (u32 i = 0; i < PARTY_SIZE; i++)
        {
            rndSlot = Random() % PARTY_SIZE;
            mon = &party[rndSlot];
        }
        while (!GetMonData(mon, MON_DATA_SPECIES) || (GetMonData(mon, MON_DATA_IS_EGG) && !P_POKERUS_INFECT_EGG));

        if (!(CheckPlayerPartyPokerus()))
        {
            u32 daysLeft = GetRandomPokerusDays();
            SpreadPokerusToSpecificMon(mon, strain, daysLeft);
        }
    }
}

bool32 CheckPlayerPartyPokerus(void)
{
    if (!GetConfig(P_POKERUS_ENABLED))
        return FALSE;

    for (u32 i = 0; i < PARTY_SIZE; i++)
    {
        if (!GetMonData(&gPlayerParty[i], MON_DATA_SPECIES))
            continue;

        if (GetMonData(&gPlayerParty[i], MON_DATA_POKERUS_DAYS_LEFT))
            return TRUE;
    }

    return FALSE;
}

bool32 CheckMonPokerus(struct Pokemon *mon)
{
    if (!GetConfig(P_POKERUS_ENABLED))
        return FALSE;

    if (GetMonData(mon, MON_DATA_POKERUS_DAYS_LEFT))
        return TRUE;

    return FALSE;
}

bool32 CheckMonHasHadPokerus(struct Pokemon *mon)
{
    if (!GetConfig(P_POKERUS_ENABLED))
        return FALSE;

    if (GetMonData(mon, MON_DATA_POKERUS))
        return TRUE;

    return FALSE;
}

void UpdatePartyPokerusTime(u16 days)
{
    if (!GetConfig(P_POKERUS_ENABLED))
        return;

    if (P_POKERUS_SPREAD_DAY_UPDATE)
        TrySpreadPokerusOverworld(SPREAD_DAY_UPDATE);

    int i;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES))
        {
            enum PokerusStrains strain = GetMonData(&gPlayerParty[i], MON_DATA_POKERUS_STRAIN);
            u32 daysLeft = GetMonData(&gPlayerParty[i], MON_DATA_POKERUS_DAYS_LEFT);
            u8 nickname[POKEMON_NAME_LENGTH * 2];
            GetMonData(&gPlayerParty[i], MON_DATA_NICKNAME, nickname);

            if (P_POKERUS_STRAIN_DISTRIBUTION != GEN_3_REDUX)
            {
                if (daysLeft)
                {
                    if (daysLeft < days || days > 4)
                        daysLeft = 0;
                    else
                        daysLeft -= days;

                    //If the strain was 0, we changed it to 1 when the pokerus disappear to remember the pokemon was infected by pokerus
                    // (otherwise its data would look the same as unaffected pokemon)
                    if (daysLeft == 0 && strain == 0)
                    {
                        strain = 1;
                        SetMonData(&gPlayerParty[i], MON_DATA_POKERUS_STRAIN, &strain);
                    }
                }
            }
            else
            {
                if (daysLeft && (strain == PKRS_UNINFECTED || strain == PKRS_CURED))
                {
                    daysLeft = 0;
                    SetMonData(&gPlayerParty[i], MON_DATA_POKERUS_DAYS_LEFT, &daysLeft);
                }

                // check if there are days left for the mons infection
                if (daysLeft)
                {
                    if (daysLeft < days || days > GetPokerusDaysFromStrain(strain))
                        daysLeft = 0;
                    else
                        daysLeft -= days;
                }

                // cure mon if day timer runs out
                if (daysLeft == 0 && (strain != PKRS_UNINFECTED && strain != PKRS_CURED))
                {
                    strain = PKRS_CURED;
                    SetMonData(&gPlayerParty[i], MON_DATA_POKERUS_STRAIN, &strain);
                }
            }

            SetMonData(&gPlayerParty[i], MON_DATA_POKERUS_DAYS_LEFT, &daysLeft);
        }
    }
}


void PartySpreadPokerus(struct Pokemon *party, enum PokerusSpreadOverworld spreadType)
{
    if (!GetConfig(P_POKERUS_ENABLED))
        return;

    if (spreadType == SPREAD_BATTLE_END)
    {
        if (Random() % 3)
            return;
    }

    u32 cascadeChance = 0;
    bool32 cascadeStarted = FALSE;
    bool32 cascadeFinished = FALSE;

    for (u32 i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *monContagious = &party[i];
        if (GetMonData(monContagious, MON_DATA_SPECIES))
        {
            enum PokerusStrains strain = GetMonData(monContagious, MON_DATA_POKERUS_STRAIN);
            u32 daysLeft;
            if (P_POKERUS_SPREAD_DAYS_LEFT == GEN_3_REDUX)
                daysLeft = GetPokerusDaysFromStrain(strain);
            else
                daysLeft = GetMonData(monContagious, MON_DATA_POKERUS_DAYS_LEFT);

            if (CanMonShedPokerus(monContagious)
                || ((strain != PKRS_CURED && strain != PKRS_UNINFECTED)
                && daysLeft > 0))
            {
                bool32 spreadUp = TRUE, spreadDown = TRUE;
                struct Pokemon *monUp = &party[i - 1];
                struct Pokemon *monDown = &party[i + 1];

                if (P_POKERUS_CASCADING_SPREAD && !cascadeStarted)
                    cascadeChance = GetNumOwnedBadges();

                if (P_POKERUS_SPREAD_ADJACENCY < GEN_3)
                {
                    if (i == (CalculatePlayerPartyCount() - 1) || (Random() % 2))
                        spreadUp = FALSE;
                    else
                        spreadDown = FALSE;
                }

                if (spreadUp && i != 0)
                    SpreadPokerusToSpecificMon(monUp, strain, daysLeft);

                if (spreadDown && i != (PARTY_SIZE - 1))
                {
                    if (!P_POKERUS_CASCADING_SPREAD)
                    {
                        SpreadPokerusToSpecificMon(monDown, strain, daysLeft);
                        i++;
                    }
                    else if (!cascadeFinished && !cascadeStarted)
                    {
                        SpreadPokerusToSpecificMon(monDown, strain, daysLeft);
                        cascadeStarted = TRUE;
                    }
                    else if (!cascadeFinished
                            && cascadeStarted
                            && RandomPercentage(RNG_POKERUS_SHED_CHANCE, cascadeChance))
                    {
                        SpreadPokerusToSpecificMon(monDown, strain, daysLeft);
                        cascadeChance = (cascadeChance - 1) > 0 ? (cascadeChance - 1) : 0;
                        cascadeFinished = cascadeChance == 0;
                    }
                }
            }
        }
    }
}

void InfectMonWithPokerus(void)
{
    struct Pokemon* mon;
    enum PokerusStrains strain = GetPokerusStrain();
    u32 partyCount = CalculatePlayerPartyCount();

    u32 slot = gSpecialVar_0x8004;
    u32 days = GetPokerusDaysFromStrain(strain);

    days = days > 0 ? days : GetPokerusDaysFromStrain(strain);
    if (days == RANDOM_POKERUS_DAYS)
        days = GetRandomPokerusDays();

    slot = slot > partyCount ? PARTY_SLOT_RANDOM : slot;
    if (slot == PARTY_SLOT_RANDOM || FlagGet(P_FLAG_INFECT_RANDOM_MON_POKERUS))
    {
        do
        {
            slot = Random() % partyCount;
            mon = &gPlayerParty[slot];
        } while (!GetMonData(mon, MON_DATA_SPECIES) || GetMonData(mon, MON_DATA_IS_EGG));
    }
    else
    {
        mon = &gPlayerParty[slot];
    }

    if (GetMonData(mon, MON_DATA_SPECIES) || !GetMonData(mon, MON_DATA_IS_EGG))
        SpreadPokerusToSpecificMon(mon, strain, days);
}
