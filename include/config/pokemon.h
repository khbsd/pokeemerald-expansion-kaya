#ifndef GUARD_CONFIG_POKEMON_H
#define GUARD_CONFIG_POKEMON_H

// Species data settings
#define P_UPDATED_TYPES                  GEN_LATEST  // Since Gen 6, several Pokémon were changed to be partially or fully Fairy type.
#define P_UPDATED_STATS                  GEN_LATEST  // Since Gen 6, Pokémon stats are updated with each passing generation.
#define P_UPDATED_ABILITIES              GEN_LATEST  // Since Gen 6, certain Pokémon have their abilities changed.
#define P_UPDATED_EGG_GROUPS             GEN_LATEST  // Since Gen 8, certain Pokémon have gained new egg groups.
#define P_UPDATED_FRIENDSHIP             GEN_LATEST  // Since Gen 8, the base friendship of certain Pokémon was changed.
#define P_UPDATED_EVS                    GEN_LATEST  // Some Pokémon have received EV updates after their introduction.
#define P_UPDATED_EXP_YIELDS             GEN_LATEST  // Since Gen 5, some Pokémon have received base Experience changes.

// Learnsets
#define P_LVL_UP_LEARNSETS               GEN_LATEST  // Choose which set of Level Up Learnsets to use.
                                                     // For generations that hadn't introduced a species yet, we use their first appearence (eg. Chikorita's Gen2 data if the config is set to GEN_1).
                                                     // For generations that don't include a previously introduced species, we use their last apperance (eg. Snivy's Gen7 data if the config is set to GEN_8).
                                                     // GEN_1/2/3/4/5/6/7: Yellow, Crystal, RSE, HGSS, B2W2, ORAS, USUM learnsets respectively.
                                                     // GEN_8: Use the following priority: BDSP for Gen1-4 Pokémon, then LA for species introduced in that game, then SwSh for species present in those games. Otherwise, use GEN_7.
                                                     // GEN_9: SV For species present in those games. Otherwise use GEN_8.
#define P_EVOLUTION_LEVEL_1_LEARN        GEN_LATEST  // In Gen 8+, Pokémon evolving while at level 1 do not get the chance to learn their level 1 moves, while before they did.

// Evolution settings
#define P_FRIENDSHIP_EVO_THRESHOLD       GEN_LATEST  // Since Gen 8, Pokémon that evolve by friendship evolve at or above 160 friendship instead of 220.
#define P_MEGA_STONES_AS_EVO_STONES      FALSE

// Breeding settings
#define P_NIDORAN_M_DITTO_BREED          GEN_LATEST                // Since Gen 5, when Nidoran♂ breeds with Ditto it can produce Nidoran♀ offspring. Before, it would only yield male offspring. This change also applies to Volbeat.
#define P_INCENSE_BREEDING               GEN_LATEST                // Since Gen 9, cross-generation Baby Pokémon don't require Incense being held by the parents to be obtained via breeding.
#define P_EGG_HATCH_LEVEL                GEN_LATEST                // Since Gen 4, Pokémon will hatch from eggs at level 1 instead of 5.
#define P_BALL_INHERITING                GEN_LATEST                // Since Gen 6, Eggs from the Daycare will inherit the Poké Ball from their mother. From Gen 7 onwards, the father can pass it down as well, as long as it's of the same species as the mother.
#define P_TM_INHERITANCE                 GEN_LATEST                // Since Gen 6, the father no longer passes down TMs to the baby.
#define P_MOTHER_EGG_MOVE_INHERITANCE    GEN_LATEST                // Since Gen 6, the mother can also pass down Egg Moves.
#define P_NATURE_INHERITANCE             GEN_LATEST                // In Gen 3, Everstone grants Ditto and mothers a 50% chance to pass on Nature. Since Gen 4, anyone can pass on nature. Since Gen 5, the chance is 100%.
#define P_ABILITY_INHERITANCE            GEN_LATEST                // In B2W2, a female Pokémon has an 80% chance of passing down their ability if bred with a male. Since Gen 6, the chance is 80% for normal ability and 60% for Hidden Ability, and anyone can pass down their abilities if bred with Ditto. NOTE: BW's effect: 60% chance to pass down HA and random for normal ability has been omitted.
#define P_EGG_MOVE_TRANSFER              GEN_LATEST                // Starting in Gen 8, if two Pokémon of the same species are together in the Daycare, one knows an Egg Move, and the other has an empty slot, the other Pokémon will receive the Egg Move in the empty slot. In Gen 9, if a Pokémon holds a Mirror Herb, it will receive Egg Moves from the other regardless of species.
#define P_SCATTERBUG_LINE_FORM_BREED     SPECIES_SCATTERBUG_FANCY  // Choose the Scatterbug form all Vivillon/Spewpa/Scatterbug will breed into, basically aligning with the "location" of the player's game.
#define P_EGGS_TO_PC                     TRUE                      // If TRUE, automatically sends eggs to the player's PC
#define P_BADGE_BOOST_EGG_STEPS          TRUE                      // If TRUE, allows badges to shorten egg hatching time
#define P_BADGE_BOOST_EGG_STEP_AMOUNT    3                         // The amount the number of owned badges should be multiplied by to get the chance to reduce egg steps by.
#define P_BADGE_BOOST_MON_COMPAT         4
#define P_EGG_BADGE_CHANCE_AMOUNT        2                         // What percentage per badge an egg has of generating every minute.
#define P_EGG_CHANCE_PER_MINUTE          TRUE                      // If TRUE, there is a small chance every minute to generate an egg, independent of your step count.

// Species-specific settings
#define P_SHEDINJA_BALL                  GEN_LATEST  // Since Gen 4, Shedinja requires a Poké Ball for its evolution. In Gen 3, Shedinja inherits Nincada's Ball.
#define P_KADABRA_EVERSTONE              GEN_LATEST  // Since Gen 4, Kadabra can evolve even when holding an Everstone.
#define P_SHUCKLE_BERRY_JUICE            GEN_LATEST  // In Gen 2, Shuckle had a 1/16 chance of converting Berry that it's holding into Berry Juice. Enabling this will allow Shuckle to do this with an Oran Berry, which is the spiritual succesor of the Berry item.

// Species graphic settings
#define P_GENDER_DIFFERENCES             TRUE        // If TRUE, Pokémon will have graphical-only differences when they're female. Female *forms* such as Meowstic are not affected by this.
#define P_CUSTOM_GENDER_DIFF_ICONS       TRUE        // If TRUE, will give more Pokémon custom icons for their female differences, i.e. Hippopotas and Hippowdon
#define P_ARCEUS_UNIQUE_FORM_ICONS       GEN_LATEST  // Since Gen 9, Arceus additionally changes its icon to reflect its current form.
#define P_FOOTPRINTS                     TRUE        // If TRUE, Pokémon will have footprints (as was the case up to Gen 5 and in BDSP). Disabling this saves some ROM space.
#define P_TWO_FRAME_FRONT_SPRITES        TRUE        // In Pokémon Emerald, Pokémon front sprites always consist of two frames. This config can revert it to only use the first frame, as is the case in the other Gen 3 games.
#define P_GBA_STYLE_SPECIES_GFX          FALSE       // By default, Pokémon sprites use Gen 4/5's style. This config can revert them back to GBA-style. NOTE: B_ENEMY_MON_SHADOW_STYLE is disabled when using these sprites for now.
#define P_GBA_STYLE_SPECIES_ICONS        FALSE       // By default, Pokémon have their updated icons. This config can revert them back to GBA-style.
#define P_GBA_STYLE_SPECIES_FOOTPRINTS   FALSE       // By default, Pokémon have their updated footprints. This config can revert them back to GBA-style.

// Other settings
#define P_CRIES_ENABLED                  TRUE        // If TRUE, Pokémon will have cries. Disabling this saves around a LOT of ROM space (over 25%!), but instead we recommend disabling individual unused Pokémon families in include/config/species_enabled.h.
#define P_LEGENDARY_PERFECT_IVS          6           // Since Gen 6, Legendaries, Mythicals and Ultra Beasts found in the wild or given through gifts have at least 3 perfect IVs.
#define P_WILD_PERFECT_IVS               1           // Number of perfect IVs each wild mon has.
#define P_SCALE_PERFECT_IVS              TRUE        // If TRUE, the number of perfect IVs each wild mon has will scale based on how far you are in the game.
#define P_EV_CAP                         GEN_LATEST  // Since Gen 6, the max EVs per stat is 252 instead of 255.
#define P_SHOW_TERA_TYPE                 GEN_8       // Since Gen 9, the Tera Type is shown on the summary screen.
#define P_TM_LITERACY                    GEN_LATEST  // Since Gen 6, TM illiterate Pokémon can learn TMs that teach moves that are in their level-up learnsets.
#define P_CAN_FORGET_HIDDEN_MOVE         TRUE        // If TRUE, Pokémon can forget any move, even if it is a Hidden Move.
#define P_ASK_MOVE_CONFIRMATION          FALSE       // If FALSE, when a player decides not to learn a Move, the game does not ask the player for confirmation.
#define P_EGG_CYCLE_LENGTH               GEN_LATEST  // Since Gen 8, egg cycles take half as many steps as before. Previous Gens have some varied step counts around 255.
#define P_ONLY_OBTAINABLE_SHINIES        FALSE       // If TRUE, Pokémon encountered in the Battle Pyramid or while catching is disabled won't be shiny.
#define P_NO_SHINIES_WITHOUT_POKEBALLS   FALSE       // If TRUE, Pokémon encountered when the player is out of Poké Balls won't be shiny
#define P_SHOW_DYNAMIC_TYPES             FALSE       // If TRUE, all moves with dynamic type changes will be reflected as their current type in battle/summary screens instead of just select ones like in vanilla.
#define P_EGG_INCREASED_SHINY_ROLLS      TRUE        // If TRUE, eggs will have slightly increased odds of being shiny.
#define P_STARTER_MAX_IVS                TRUE        // If TRUE, your starter will have IVs of 31 in each slot.
#define P_STARTER_SHINY                  FALSE       // If TRUE, your starter will be shiny.
#define P_BADGE_BOOST_SHINY_ODDS         TRUE        // If TRUE, each badge you get boosts your shiny odds.
#define P_E4_BOOST_SHINY_ODDS            TRUE        // If TRUE, each Elite 4 member plus the Champion you get boosts your shiny odds.
#define P_STEVEN_BOOST_SHINY_ODDS        TRUE        // If TRUE, defeating Steven in Meteor Falls also boosts your shiny odds.
#define P_ADD_SHINY_ODDS_TO_ROLLS        TRUE        // If TRUE, adds the adjusted shiny odds to the amount of rolls for shininess
#define P_BADGE_BOOST_SHINY_AMOUNT       1           // The amount that SHINY_ODDS is increased by.
#define P_BADGE_BOOST_POKERUS_CHANCE     80          // How much each badge boosts your chance to get Pokérus

// Learnset helper toggles
#define P_LEARNSET_HELPER_TEACHABLE      TRUE   // If FALSE, make sure to remove teachable_learnset.h from your .gitignore file. If TRUE, teachable_learnsets.h will be populated by tools/learnset_helpers/make_teachables.py using the included JSON files based on available TMs and tutors.
#define P_TUTOR_MOVES_ARRAY              TRUE   // If TRUE, generates a gTutorMoves array automatically using make_teachables.py. (generally not needed, but the HGSS Pokedex has an optional use for it)

// Flag settings
// To use the following features in scripting, replace the 0s with the flag ID you're assigning it to.
// Eg: Replace with FLAG_UNUSED_0x264 so you can use that flag to toggle the feature.
#define P_FLAG_FORCE_SHINY               FLAG_FORCE_SHINY               // If this flag is set, all wild and gift Pokémon will forced into being Shiny.
#define P_FLAG_FORCE_NO_SHINY            FLAG_FORCE_NO_SHINY            // If this flag is set, all wild and gift Pokémon will be forced into NOT being Shiny.
#define P_FLAG_FORCE_POKERUS             FLAG_FORCE_POKERUS             // If this flag is set, all wild and gift Pokémon will be forced into having Pokérus.
#define P_FLAG_INFECT_RANDOM_MON_POKERUS FLAG_INFECT_RANDOM_MON_POKERUS // If this flag is set, the special InfectMonWithPokerus will infect a random mon in your party and ignore the var in var0.

// Go here if you want to disable specific families of Pokémon.
#include "config/species_enabled.h"

#endif // GUARD_CONFIG_POKEMON_H
