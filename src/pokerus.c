#include "global.h"
#include "event_data.h"
#include "pokemon.h"
#include "pokerus.h"
#include "random.h"
#include "constants/pokerus.h"

// Pokérus strains
const u8 POKERUS_STRAINS_GEN_2[] =
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

const u8 POKERUS_STRAINS_GEN_4[] =
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

const u8 POKERUS_STRAINS_GEN_8[] =
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

const u8 POKERUS_STRAINS_GEN_3_REDUX[] =
{
    [PKRS_UNINFECTED] = 0,
    [PKRS_STRAIN_2]   = 3,
    [PKRS_STRAIN_3]   = 3,
    [PKRS_STRAIN_4]   = 3,
    [PKRS_STRAIN_5]   = 3,
    [PKRS_STRAIN_6]   = 3,
    [PKRS_STRAIN_7]   = 3,
    [PKRS_STRAIN_8]   = 3,
    [PKRS_CURED]      = 0,
    [PKRS_STRAIN_10]  = 30,
    [PKRS_STRAIN_11]  = 30,
    [PKRS_STRAIN_12]  = 30,
    [PKRS_STRAIN_13]  = 30,
    [PKRS_STRAIN_14]  = 30,
    [PKRS_STRAIN_15]  = 30,
    [PKRS_STRAIN_16]  = 30,
};

void Debug_CheckPokerusStrain(void)
{
    //DebugPrintf("pokerus strain: %u", GetPokerusStrain());
    DebugPrintf("first mon pokerus days: %u of strain %u", GetMonData(&gPlayerParty[0], MON_DATA_POKERUS_DAYS_LEFT), GetMonData(&gPlayerParty[0], MON_DATA_POKERUS_STRAIN, 0));
}

// helper funcs
u32 GetPokerusStrain(void)
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

u32 GetPokerusDaysFromStrain(u32 strain)
{
    u32 modifier = 4;
    if (P_POKERUS_STRAIN_DISTRIBUTION == GEN_3_REDUX)
    {
        if (strain == PKRS_CURED || strain == PKRS_UNINFECTED)
            return 0;
        modifier = 6;
    }
    return (strain % modifier) + 1;
}

u32 GetRandomPokerusDays(void)
{
    return RandomUniform(RNG_POKERUS_INFECTION_DAYS, MIN_POKERUS_DAYS, MAX_POKERUS_DAYS);
}

void SpreadPokerusToSpecificMon(struct Pokemon *mon, u32 strain, u32 daysLeft)
{
    if (P_POKERUS_STRAIN_DISTRIBUTION > GEN_3)
    {
        if (strain == PKRS_UNINFECTED)
            strain = GetPokerusStrain();
    }
    DebugPrintf("setting mon strain to strain: %u", strain);
    SetMonData(mon, MON_DATA_POKERUS_STRAIN, &strain);
    DebugPrintf("set mon strain to strain: %u", GetMonData(&gPlayerParty[0], MON_DATA_POKERUS_STRAIN));
    if (P_POKERUS_SPREAD_DAYS_LEFT < GEN_3)
        daysLeft = GetPokerusDaysFromStrain(strain);
    SetMonData(mon, MON_DATA_POKERUS_DAYS_LEFT, &daysLeft);
}

void RandomlyGivePartyPokerus(struct Pokemon *party)
{
    if (!P_POKERUS_ENABLED)
        return;

    if (!P_POKERUS_INFECT_AGAIN && CheckPartyPokerus(gPlayerParty, (1 << (PARTY_SIZE - 1))))
        return;

    if (P_POKERUS_INFECTION_FLAG && !FlagGet(P_POKERUS_INFECTION_FLAG))
        return;

    u32 rndChance = Random();
    u32 infectionChance = (GetNumOwnedBadges() * (P_BADGE_BOOST_POKERUS_CHANCE)) + POKERUS_INFECTION_CHANCE;
    u32 strain = GetPokerusStrain();

    if (rndChance < infectionChance)
    {
        struct Pokemon *mon;
        u32 rndSlot;

        do
        {
            rndSlot = Random() % PARTY_SIZE;
            mon = &party[rndSlot];
        }
        while (!GetMonData(mon, MON_DATA_SPECIES, 0) || GetMonData(mon, MON_DATA_IS_EGG, 0));

        if (!(CheckPartyHasHadPokerus(party, 1u << rndSlot)))
        {
            u32 daysLeft = GetRandomPokerusDays();
            SpreadPokerusToSpecificMon(mon, strain, daysLeft);
        }
    }
}

u8 CheckPartyPokerus(struct Pokemon *party, u8 selection)
{
    if (!P_POKERUS_ENABLED)
        return FALSE;

    u8 retVal;
    int partyIndex = 0;
    unsigned curBit = 1;
    retVal = 0;

    if (selection)
    {
        do
        {
            if ((selection & 1) && GetMonData(&party[partyIndex], MON_DATA_POKERUS_DAYS_LEFT))
                retVal |= curBit;
            partyIndex++;
            curBit <<= 1;
            selection >>= 1;
        }
        while (selection);
    }
    else if (GetMonData(&party[0], MON_DATA_POKERUS_DAYS_LEFT, 0))
    {
        retVal = 1;
    }

    return retVal;
}

u8 CheckPartyHasHadPokerus(struct Pokemon *party, u8 selection)
{
    if (!P_POKERUS_ENABLED)
        return FALSE;

    u8 retVal;
    int partyIndex = 0;
    unsigned curBit = 1;
    retVal = 0;

    if (selection)
    {
        do
        {
            if ((selection & 1) && GetMonData(&party[partyIndex], MON_DATA_POKERUS_STRAIN))
                retVal |= curBit;
            partyIndex++;
            curBit <<= 1;
            selection >>= 1;
        }
        while (selection);
    }
    else if (GetMonData(&party[0], MON_DATA_POKERUS_STRAIN))
    {
        retVal = 1;
    }

    return retVal;
}

void UpdatePartyPokerusTime(u16 days)
{
    if (!P_POKERUS_ENABLED)
        return;

    int i;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, 0))
        {
        #if (P_POKERUS_STRAIN_DISTRIBUTION != GEN_3_REDUX)
            u32 strain = GetMonData(&gPlayerParty[i], MON_DATA_POKERUS_STRAIN);
            u32 daysLeft = GetMonData(&gPlayerParty[i], MON_DATA_POKERUS_DAYS_LEFT);
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
                    SetMonData(&gPlayerParty[i], MON_DATA_POKERUS, &strain);
                }
            }
        #else
            u32 strain = GetMonData(&gPlayerParty[i], MON_DATA_POKERUS_STRAIN);
            u32 daysLeft = GetMonData(&gPlayerParty[i], MON_DATA_POKERUS_DAYS_LEFT);
            if (strain == PKRS_UNINFECTED || strain == PKRS_CURED)
                continue;

            if (daysLeft)
            {
                if (daysLeft < days || days > GetPokerusDaysFromStrain(strain))
                    daysLeft = 0;
                else
                    daysLeft -= days;

                if (daysLeft == 0 && strain != PKRS_UNINFECTED)
                {
                    strain = PKRS_CURED;
                    SetMonData(&gPlayerParty[i], MON_DATA_POKERUS, &strain);
                }
            }
        #endif //P_POKERUS_STRAIN_DISTRIBUTION

            SetMonData(&gPlayerParty[i], MON_DATA_POKERUS, &daysLeft);
        }
    }
}


void PartySpreadPokerus(struct Pokemon *party)
{
    if (!P_POKERUS_ENABLED)
        return;

    if ((Random() % 3) == 0)
    {
        int i;
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (GetMonData(&party[i], MON_DATA_SPECIES, 0))
            {
                u32 strain = GetMonData(&party[i], MON_DATA_POKERUS_STRAIN);
                u32 daysLeft = GetMonData(&party[i], MON_DATA_POKERUS_DAYS_LEFT);
                if (daysLeft)
                {
                    bool32 spreadUp = TRUE, spreadDown = TRUE;
                    if (P_POKERUS_SPREAD_ADJACENECY < GEN_3)
                    {
                        if (i == (CalculatePlayerPartyCount() - 1)
                            || (Random() % 2))
                            spreadUp = FALSE;
                        else
                            spreadDown = FALSE;
                    }
                    if (spreadDown && i != 0 && !GetMonData(&party[i - 1], MON_DATA_POKERUS_STRAIN))
                        SpreadPokerusToSpecificMon(&party[i - 1], strain, daysLeft);
                    if (spreadUp && i != (PARTY_SIZE - 1) && !GetMonData(&party[i + 1], MON_DATA_POKERUS_STRAIN))
                    {
                        SpreadPokerusToSpecificMon(&party[i + 1], strain, daysLeft);
                        i++;
                    }
                }
            }
        }
    }
}

void InfectMonWithPokerus(u32 slot, u32 days)
{
    struct Pokemon* mon;
    u32 strain = GetPokerusStrain();
    u32 partyCount = CalculatePlayerPartyCount();

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
        } while (!GetMonData(mon, MON_DATA_SPECIES, 0) || GetMonData(mon, MON_DATA_IS_EGG, 0));
    }
    else
    {
        mon = &gPlayerParty[slot];
    }

    if (GetMonData(mon, MON_DATA_SPECIES, 0) || !GetMonData(mon, MON_DATA_IS_EGG, 0))
        SpreadPokerusToSpecificMon(mon, strain, days);
}
