#ifndef GUARD_CONSTANTS_POKERUS_H
#define GUARD_CONSTANTS_POKERUS_H

enum PokerusStrains
{
    PKRS_UNINFECTED = 0,
    PKRS_STRAIN_1   = PKRS_UNINFECTED,
    PKRS_STRAIN_2,
    PKRS_STRAIN_3,
    PKRS_STRAIN_4,
    PKRS_STRAIN_5,
    PKRS_STRAIN_6,
    PKRS_STRAIN_7,
    PKRS_STRAIN_8,
    PKRS_CURED      = 8,
    PKRS_STRAIN_9   = PKRS_CURED,
    PKRS_STRAIN_10,
    PKRS_STRAIN_11,
    PKRS_STRAIN_12,
    PKRS_STRAIN_13,
    PKRS_STRAIN_14,
    PKRS_STRAIN_15,
    PKRS_STRAIN_16,
    PKRS_STRAIN_COUNT,
};

enum PokerusSpreadOverworld
{
    SPREAD_DAY_UPDATE,
    SPREAD_STEPS,
};

// Pokérus settings
#define MIN_POKERUS_DAYS           1    // Vanilla is 1
#define MAX_POKERUS_DAYS           10   // Vanilla is 4
#define RANDOM_POKERUS_DAYS        (MAX_POKERUS_DAYS + 1)
#define POKERUS_INFECTION_CHANCE   3    // Vanilla is 3

// Pokérus bitmasks
#define POKERUS_DAYS_MASK          0x0F
#define POKERUS_STRAIN_MASK        0xF0

#endif // GUARD_CONSTANTS_POKERUS_H
