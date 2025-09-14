#ifndef GUARD_CONSTANTS_POKERUS_H
#define GUARD_CONSTANTS_POKERUS_H

// Pokérus settings
#define MIN_POKERUS_DAYS           1    // Vanilla is 1
#define MAX_POKERUS_DAYS           10   // Vanilla is 4
#define RANDOM_POKERUS_DAYS        (MAX_POKERUS_DAYS + 1)
#define POKERUS_INFECTION_CHANCE   3    // Vanilla is 3

// Pokérus bitmasks
#define POKERUS_DAYS_MASK          0x0F
#define POKERUS_STRAIN_MASK        0xF0

#endif // GUARD_CONSTANTS_POKERUS_H
