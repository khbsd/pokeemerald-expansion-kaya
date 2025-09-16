#ifndef GUARD_CONFIG_POKERUS_H
#define GUARD_CONFIG_POKERUS_H

//Pokerus settings
//For pokerus, we refer to infection as a pokemon catching Pokerus from an enemy pokemon (trainer or wild) and we refer to spreading as pokemon catching pokerus from another infected pokemon in the party
#define P_POKERUS_ENABLED                TRUE        // If FALSE, Pokerus will have no effect, won't be shown and won't be aquired in any way but save data won't be affected
#define P_POKERUS_CURED_VIRUS_SHEDDING   TRUE        // If TRUE, cured pokemon have a small chance to infect adjacent pokemon in your party
#define P_POKERUS_SHED_BADGE_BOOST       2           // What percent each badge should count for when calculating percent chance to shed pokerus from a cured pokemon
#define P_POKERUS_CASCADING_SPREAD       TRUE        // If true, pokemon infected by a party member above them will have a small chance to be infected
#define P_POKERUS_STRAIN_DISTRIBUTION    GEN_3_REDUX // Pokerus has 16 different strains and their probability distribution change depending on generation
#define P_POKERUS_SPREAD_ADJACENECY      GEN_LATEST // In Gen 2, Pokerus spread to one adjacent pokemon but it spreads to both adjacent pokemon in gen 3+
#define P_POKERUS_SPREAD_DAYS_LEFT       GEN_3_REDUX // In Gen 2, a freshly spreaded pokemon will get its full infection duration based on strain. In gen 3+, the pokerus duration will copy the duration from the pokemon it was spreaded from
#define P_POKERUS_INFECT_AGAIN           TRUE       // If TRUE, your party can get infected even when it is already infected with Pokerus (doesn't affect spreading, only TRUE in gen 2)
#define P_POKERUS_SPREAD_STEPS           TRUE       // If TRUE, taking a step has a small chance to spread pokerus
#define P_POKERUS_SPREAD_DAY_UPDATE      TRUE       // If TRUE, each day has a small chance to spread pokerus
#define P_POKERUS_INFECTION_FLAG         0          // If Pokerus can only get infected if this flag is set or undefined (0). This emulates a gen 2 mechanic where Pokemon can only get infected by Pokerus after visiting Goldernrod. This does not affect spreading

#endif // GUARD_CONFIG_POKERUS_H
