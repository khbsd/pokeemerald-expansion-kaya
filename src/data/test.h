#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_0 20
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_1 ENCOUNTER_CHANCE_LAND_MONS_SLOT_0 + 20
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_2 ENCOUNTER_CHANCE_LAND_MONS_SLOT_1 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_3 ENCOUNTER_CHANCE_LAND_MONS_SLOT_2 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_4 ENCOUNTER_CHANCE_LAND_MONS_SLOT_3 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_5 ENCOUNTER_CHANCE_LAND_MONS_SLOT_4 + 10
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_6 ENCOUNTER_CHANCE_LAND_MONS_SLOT_5 + 5
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_7 ENCOUNTER_CHANCE_LAND_MONS_SLOT_6 + 5
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_8 ENCOUNTER_CHANCE_LAND_MONS_SLOT_7 + 4
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_9 ENCOUNTER_CHANCE_LAND_MONS_SLOT_8 + 4
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_10 ENCOUNTER_CHANCE_LAND_MONS_SLOT_9 + 1
#define ENCOUNTER_CHANCE_LAND_MONS_SLOT_11 ENCOUNTER_CHANCE_LAND_MONS_SLOT_10 + 1
#define ENCOUNTER_CHANCE_LAND_MONS_TOTAL (ENCOUNTER_CHANCE_LAND_MONS_SLOT_11)
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 60
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 + 30
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 + 5
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_3 ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 + 4
#define ENCOUNTER_CHANCE_WATER_MONS_SLOT_4 ENCOUNTER_CHANCE_WATER_MONS_SLOT_3 + 1
#define ENCOUNTER_CHANCE_WATER_MONS_TOTAL (ENCOUNTER_CHANCE_WATER_MONS_SLOT_4)
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_0 60
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_1 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_0 + 30
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_2 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_1 + 5
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_3 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_2 + 4
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_4 ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_3 + 1
#define ENCOUNTER_CHANCE_ROCK_SMASH_MONS_TOTAL (ENCOUNTER_CHANCE_ROCK_SMASH_MONS_SLOT_4)
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0 70
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_1 ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0 + 30
#define ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_1)
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 60
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 + 20
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4 ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 + 20
#define ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4)
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 40
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 + 40
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 + 15
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 + 4
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9 ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 + 1
#define ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_TOTAL (ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9)


const struct WildPokemon gRoute101_LandMons_Day[] =
{
    { 2, 2, SPECIES_WURMPLE },
    { 2, 2, SPECIES_POOCHYENA },
    { 2, 2, SPECIES_WURMPLE },
    { 3, 3, SPECIES_WURMPLE },
    { 3, 3, SPECIES_POOCHYENA },
    { 3, 3, SPECIES_POOCHYENA },
    { 3, 3, SPECIES_WURMPLE },
    { 3, 3, SPECIES_POOCHYENA },
    { 2, 2, SPECIES_ZIGZAGOON },
    { 2, 2, SPECIES_ZIGZAGOON },
    { 3, 3, SPECIES_ZIGZAGOON },
    { 3, 3, SPECIES_ZIGZAGOON },
};
const struct WildPokemonInfo gRoute101_LandMonsInfo_Day = { 20, gRoute101_LandMons_Day };

const struct WildPokemon gRoute102_LandMons_Day[] =
{
    { 3, 3, SPECIES_POOCHYENA },
    { 3, 3, SPECIES_WURMPLE },
    { 4, 4, SPECIES_POOCHYENA },
    { 4, 4, SPECIES_WURMPLE },
    { 3, 3, SPECIES_LOTAD },
    { 4, 4, SPECIES_LOTAD },
    { 3, 3, SPECIES_ZIGZAGOON },
    { 3, 3, SPECIES_ZIGZAGOON },
    { 4, 4, SPECIES_ZIGZAGOON },
    { 4, 4, SPECIES_RALTS },
    { 4, 4, SPECIES_ZIGZAGOON },
    { 3, 3, SPECIES_SEEDOT },
};
const struct WildPokemonInfo gRoute102_LandMonsInfo_Day = { 20, gRoute102_LandMons_Day };

const struct WildPokemon gRoute102_WaterMons_Day[] =
{
    { 20, 30, SPECIES_MARILL },
    { 10, 20, SPECIES_MARILL },
    { 30, 35, SPECIES_MARILL },
    { 5, 10, SPECIES_MARILL },
    { 20, 30, SPECIES_GOLDEEN },
};
const struct WildPokemonInfo gRoute102_WaterMonsInfo_Day = { 4, gRoute102_WaterMons_Day };

const struct WildPokemon gRoute102_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_CORPHISH },
    { 25, 30, SPECIES_CORPHISH },
    { 30, 35, SPECIES_CORPHISH },
    { 20, 25, SPECIES_CORPHISH },
    { 35, 40, SPECIES_CORPHISH },
    { 40, 45, SPECIES_CORPHISH },
};
const struct WildPokemonInfo gRoute102_FishingMonsInfo_Day = { 30, gRoute102_FishingMons_Day };

const struct WildPokemon gRoute103_LandMons_Day[] =
{
    { 2, 2, SPECIES_POOCHYENA },
    { 3, 3, SPECIES_POOCHYENA },
    { 3, 3, SPECIES_POOCHYENA },
    { 4, 4, SPECIES_POOCHYENA },
    { 2, 2, SPECIES_WINGULL },
    { 3, 3, SPECIES_ZIGZAGOON },
    { 3, 3, SPECIES_ZIGZAGOON },
    { 4, 4, SPECIES_ZIGZAGOON },
    { 3, 3, SPECIES_WINGULL },
    { 3, 3, SPECIES_WINGULL },
    { 2, 2, SPECIES_WINGULL },
    { 4, 4, SPECIES_WINGULL },
};
const struct WildPokemonInfo gRoute103_LandMonsInfo_Day = { 20, gRoute103_LandMons_Day };

const struct WildPokemon gRoute103_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute103_WaterMonsInfo_Day = { 4, gRoute103_WaterMons_Day };

const struct WildPokemon gRoute103_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute103_FishingMonsInfo_Day = { 30, gRoute103_FishingMons_Day };

const struct WildPokemon gRoute104_LandMons_Day[] =
{
    { 4, 4, SPECIES_POOCHYENA },
    { 4, 4, SPECIES_WURMPLE },
    { 5, 5, SPECIES_POOCHYENA },
    { 5, 5, SPECIES_MARILL },
    { 4, 4, SPECIES_MARILL },
    { 5, 5, SPECIES_POOCHYENA },
    { 4, 4, SPECIES_TAILLOW },
    { 5, 5, SPECIES_TAILLOW },
    { 4, 4, SPECIES_WINGULL },
    { 4, 4, SPECIES_WINGULL },
    { 3, 3, SPECIES_WINGULL },
    { 5, 5, SPECIES_WINGULL },
};
const struct WildPokemonInfo gRoute104_LandMonsInfo_Day = { 20, gRoute104_LandMons_Day };

const struct WildPokemon gRoute104_WaterMons_Day[] =
{
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute104_WaterMonsInfo_Day = { 4, gRoute104_WaterMons_Day };

const struct WildPokemon gRoute104_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_MAGIKARP },
    { 25, 30, SPECIES_MAGIKARP },
    { 30, 35, SPECIES_MAGIKARP },
    { 20, 25, SPECIES_MAGIKARP },
    { 35, 40, SPECIES_MAGIKARP },
    { 40, 45, SPECIES_MAGIKARP },
};
const struct WildPokemonInfo gRoute104_FishingMonsInfo_Day = { 30, gRoute104_FishingMons_Day };

const struct WildPokemon gRoute105_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute105_WaterMonsInfo_Day = { 4, gRoute105_WaterMons_Day };

const struct WildPokemon gRoute105_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute105_FishingMonsInfo_Day = { 30, gRoute105_FishingMons_Day };

const struct WildPokemon gRoute110_LandMons_Day[] =
{
    { 12, 12, SPECIES_POOCHYENA },
    { 12, 12, SPECIES_ELECTRIKE },
    { 12, 12, SPECIES_GULPIN },
    { 13, 13, SPECIES_ELECTRIKE },
    { 13, 13, SPECIES_MINUN },
    { 13, 13, SPECIES_ODDISH },
    { 13, 13, SPECIES_MINUN },
    { 13, 13, SPECIES_GULPIN },
    { 12, 12, SPECIES_WINGULL },
    { 12, 12, SPECIES_WINGULL },
    { 12, 12, SPECIES_PLUSLE },
    { 13, 13, SPECIES_PLUSLE },
};
const struct WildPokemonInfo gRoute110_LandMonsInfo_Day = { 20, gRoute110_LandMons_Day };

const struct WildPokemon gRoute110_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute110_WaterMonsInfo_Day = { 4, gRoute110_WaterMons_Day };

const struct WildPokemon gRoute110_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute110_FishingMonsInfo_Day = { 30, gRoute110_FishingMons_Day };

const struct WildPokemon gRoute111_LandMons_Day[] =
{
    { 20, 20, SPECIES_SANDSHREW },
    { 20, 20, SPECIES_TRAPINCH },
    { 21, 21, SPECIES_SANDSHREW },
    { 21, 21, SPECIES_TRAPINCH },
    { 19, 19, SPECIES_BALTOY },
    { 21, 21, SPECIES_BALTOY },
    { 19, 19, SPECIES_SANDSHREW },
    { 19, 19, SPECIES_TRAPINCH },
    { 20, 20, SPECIES_BALTOY },
    { 20, 20, SPECIES_CACNEA },
    { 22, 22, SPECIES_CACNEA },
    { 22, 22, SPECIES_CACNEA },
};
const struct WildPokemonInfo gRoute111_LandMonsInfo_Day = { 10, gRoute111_LandMons_Day };

const struct WildPokemon gRoute111_WaterMons_Day[] =
{
    { 20, 30, SPECIES_MARILL },
    { 10, 20, SPECIES_MARILL },
    { 30, 35, SPECIES_MARILL },
    { 5, 10, SPECIES_MARILL },
    { 20, 30, SPECIES_GOLDEEN },
};
const struct WildPokemonInfo gRoute111_WaterMonsInfo_Day = { 4, gRoute111_WaterMons_Day };

const struct WildPokemon gRoute111_RockSmashMons_Day[] =
{
    { 10, 15, SPECIES_GEODUDE },
    { 5, 10, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
};
const struct WildPokemonInfo gRoute111_RockSmashMonsInfo_Day = { 20, gRoute111_RockSmashMons_Day };

const struct WildPokemon gRoute111_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_BARBOACH },
    { 25, 30, SPECIES_BARBOACH },
    { 30, 35, SPECIES_BARBOACH },
    { 20, 25, SPECIES_BARBOACH },
    { 35, 40, SPECIES_BARBOACH },
    { 40, 45, SPECIES_BARBOACH },
};
const struct WildPokemonInfo gRoute111_FishingMonsInfo_Day = { 30, gRoute111_FishingMons_Day };

const struct WildPokemon gRoute112_LandMons_Day[] =
{
    { 15, 15, SPECIES_NUMEL },
    { 15, 15, SPECIES_NUMEL },
    { 15, 15, SPECIES_MARILL },
    { 14, 14, SPECIES_NUMEL },
    { 14, 14, SPECIES_NUMEL },
    { 14, 14, SPECIES_MARILL },
    { 16, 16, SPECIES_NUMEL },
    { 16, 16, SPECIES_MARILL },
    { 16, 16, SPECIES_NUMEL },
    { 16, 16, SPECIES_NUMEL },
    { 16, 16, SPECIES_NUMEL },
    { 16, 16, SPECIES_NUMEL },
};
const struct WildPokemonInfo gRoute112_LandMonsInfo_Day = { 20, gRoute112_LandMons_Day };

const struct WildPokemon gRoute113_LandMons_Day[] =
{
    { 15, 15, SPECIES_SPINDA },
    { 15, 15, SPECIES_SPINDA },
    { 15, 15, SPECIES_SLUGMA },
    { 14, 14, SPECIES_SPINDA },
    { 14, 14, SPECIES_SPINDA },
    { 14, 14, SPECIES_SLUGMA },
    { 16, 16, SPECIES_SPINDA },
    { 16, 16, SPECIES_SLUGMA },
    { 16, 16, SPECIES_SPINDA },
    { 16, 16, SPECIES_SKARMORY },
    { 16, 16, SPECIES_SPINDA },
    { 16, 16, SPECIES_SKARMORY },
};
const struct WildPokemonInfo gRoute113_LandMonsInfo_Day = { 20, gRoute113_LandMons_Day };

const struct WildPokemon gRoute114_LandMons_Day[] =
{
    { 16, 16, SPECIES_SWABLU },
    { 16, 16, SPECIES_LOTAD },
    { 17, 17, SPECIES_SWABLU },
    { 15, 15, SPECIES_SWABLU },
    { 15, 15, SPECIES_LOTAD },
    { 16, 16, SPECIES_LOMBRE },
    { 16, 16, SPECIES_LOMBRE },
    { 18, 18, SPECIES_LOMBRE },
    { 17, 17, SPECIES_SEVIPER },
    { 15, 15, SPECIES_SEVIPER },
    { 17, 17, SPECIES_SEVIPER },
    { 15, 15, SPECIES_NUZLEAF },
};
const struct WildPokemonInfo gRoute114_LandMonsInfo_Day = { 20, gRoute114_LandMons_Day };

const struct WildPokemon gRoute114_WaterMons_Day[] =
{
    { 20, 30, SPECIES_MARILL },
    { 10, 20, SPECIES_MARILL },
    { 30, 35, SPECIES_MARILL },
    { 5, 10, SPECIES_MARILL },
    { 20, 30, SPECIES_GOLDEEN },
};
const struct WildPokemonInfo gRoute114_WaterMonsInfo_Day = { 4, gRoute114_WaterMons_Day };

const struct WildPokemon gRoute114_RockSmashMons_Day[] =
{
    { 10, 15, SPECIES_GEODUDE },
    { 5, 10, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
};
const struct WildPokemonInfo gRoute114_RockSmashMonsInfo_Day = { 20, gRoute114_RockSmashMons_Day };

const struct WildPokemon gRoute114_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_BARBOACH },
    { 25, 30, SPECIES_BARBOACH },
    { 30, 35, SPECIES_BARBOACH },
    { 20, 25, SPECIES_BARBOACH },
    { 35, 40, SPECIES_BARBOACH },
    { 40, 45, SPECIES_BARBOACH },
};
const struct WildPokemonInfo gRoute114_FishingMonsInfo_Day = { 30, gRoute114_FishingMons_Day };

const struct WildPokemon gRoute116_LandMons_Day[] =
{
    { 6, 6, SPECIES_POOCHYENA },
    { 6, 6, SPECIES_WHISMUR },
    { 6, 6, SPECIES_NINCADA },
    { 7, 7, SPECIES_ABRA },
    { 7, 7, SPECIES_NINCADA },
    { 6, 6, SPECIES_TAILLOW },
    { 7, 7, SPECIES_TAILLOW },
    { 8, 8, SPECIES_TAILLOW },
    { 7, 7, SPECIES_POOCHYENA },
    { 8, 8, SPECIES_POOCHYENA },
    { 7, 7, SPECIES_SKITTY },
    { 8, 8, SPECIES_SKITTY },
};
const struct WildPokemonInfo gRoute116_LandMonsInfo_Day = { 20, gRoute116_LandMons_Day };

const struct WildPokemon gRoute117_LandMons_Day[] =
{
    { 13, 13, SPECIES_POOCHYENA },
    { 13, 13, SPECIES_ODDISH },
    { 14, 14, SPECIES_POOCHYENA },
    { 14, 14, SPECIES_ODDISH },
    { 13, 13, SPECIES_MARILL },
    { 13, 13, SPECIES_ODDISH },
    { 13, 13, SPECIES_ILLUMISE },
    { 13, 13, SPECIES_ILLUMISE },
    { 14, 14, SPECIES_ILLUMISE },
    { 14, 14, SPECIES_ILLUMISE },
    { 13, 13, SPECIES_VOLBEAT },
    { 13, 13, SPECIES_SEEDOT },
};
const struct WildPokemonInfo gRoute117_LandMonsInfo_Day = { 20, gRoute117_LandMons_Day };

const struct WildPokemon gRoute117_WaterMons_Day[] =
{
    { 20, 30, SPECIES_MARILL },
    { 10, 20, SPECIES_MARILL },
    { 30, 35, SPECIES_MARILL },
    { 5, 10, SPECIES_MARILL },
    { 20, 30, SPECIES_GOLDEEN },
};
const struct WildPokemonInfo gRoute117_WaterMonsInfo_Day = { 4, gRoute117_WaterMons_Day };

const struct WildPokemon gRoute117_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_CORPHISH },
    { 25, 30, SPECIES_CORPHISH },
    { 30, 35, SPECIES_CORPHISH },
    { 20, 25, SPECIES_CORPHISH },
    { 35, 40, SPECIES_CORPHISH },
    { 40, 45, SPECIES_CORPHISH },
};
const struct WildPokemonInfo gRoute117_FishingMonsInfo_Day = { 30, gRoute117_FishingMons_Day };

const struct WildPokemon gRoute118_LandMons_Day[] =
{
    { 24, 24, SPECIES_ZIGZAGOON },
    { 24, 24, SPECIES_ELECTRIKE },
    { 26, 26, SPECIES_ZIGZAGOON },
    { 26, 26, SPECIES_ELECTRIKE },
    { 26, 26, SPECIES_LINOONE },
    { 26, 26, SPECIES_MANECTRIC },
    { 25, 25, SPECIES_WINGULL },
    { 25, 25, SPECIES_WINGULL },
    { 26, 26, SPECIES_WINGULL },
    { 26, 26, SPECIES_WINGULL },
    { 27, 27, SPECIES_WINGULL },
    { 25, 25, SPECIES_KECLEON },
};
const struct WildPokemonInfo gRoute118_LandMonsInfo_Day = { 20, gRoute118_LandMons_Day };

const struct WildPokemon gRoute118_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute118_WaterMonsInfo_Day = { 4, gRoute118_WaterMons_Day };

const struct WildPokemon gRoute118_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_CARVANHA },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_CARVANHA },
    { 20, 25, SPECIES_CARVANHA },
    { 35, 40, SPECIES_CARVANHA },
    { 40, 45, SPECIES_CARVANHA },
};
const struct WildPokemonInfo gRoute118_FishingMonsInfo_Day = { 30, gRoute118_FishingMons_Day };

const struct WildPokemon gRoute124_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute124_WaterMonsInfo_Day = { 4, gRoute124_WaterMons_Day };

const struct WildPokemon gRoute124_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute124_FishingMonsInfo_Day = { 30, gRoute124_FishingMons_Day };

const struct WildPokemon gPetalburgWoods_LandMons_Day[] =
{
    { 5, 5, SPECIES_POOCHYENA },
    { 5, 5, SPECIES_WURMPLE },
    { 5, 5, SPECIES_SHROOMISH },
    { 6, 6, SPECIES_POOCHYENA },
    { 5, 5, SPECIES_SILCOON },
    { 5, 5, SPECIES_CASCOON },
    { 6, 6, SPECIES_WURMPLE },
    { 6, 6, SPECIES_SHROOMISH },
    { 5, 5, SPECIES_TAILLOW },
    { 5, 5, SPECIES_SLAKOTH },
    { 6, 6, SPECIES_TAILLOW },
    { 6, 6, SPECIES_SLAKOTH },
};
const struct WildPokemonInfo gPetalburgWoods_LandMonsInfo_Day = { 20, gPetalburgWoods_LandMons_Day };

const struct WildPokemon gRusturfTunnel_LandMons_Day[] =
{
    { 6, 6, SPECIES_WHISMUR },
    { 7, 7, SPECIES_WHISMUR },
    { 6, 6, SPECIES_WHISMUR },
    { 6, 6, SPECIES_WHISMUR },
    { 7, 7, SPECIES_WHISMUR },
    { 7, 7, SPECIES_WHISMUR },
    { 5, 5, SPECIES_WHISMUR },
    { 8, 8, SPECIES_WHISMUR },
    { 5, 5, SPECIES_WHISMUR },
    { 8, 8, SPECIES_WHISMUR },
    { 5, 5, SPECIES_WHISMUR },
    { 8, 8, SPECIES_WHISMUR },
};
const struct WildPokemonInfo gRusturfTunnel_LandMonsInfo_Day = { 10, gRusturfTunnel_LandMons_Day };

const struct WildPokemon gGraniteCave_1F_LandMons_Day[] =
{
    { 7, 7, SPECIES_ZUBAT },
    { 8, 8, SPECIES_MAKUHITA },
    { 7, 7, SPECIES_MAKUHITA },
    { 8, 8, SPECIES_ZUBAT },
    { 9, 9, SPECIES_MAKUHITA },
    { 8, 8, SPECIES_ABRA },
    { 10, 10, SPECIES_MAKUHITA },
    { 6, 6, SPECIES_MAKUHITA },
    { 7, 7, SPECIES_GEODUDE },
    { 8, 8, SPECIES_GEODUDE },
    { 6, 6, SPECIES_GEODUDE },
    { 9, 9, SPECIES_GEODUDE },
};
const struct WildPokemonInfo gGraniteCave_1F_LandMonsInfo_Day = { 10, gGraniteCave_1F_LandMons_Day };

const struct WildPokemon gGraniteCave_B1F_LandMons_Day[] =
{
    { 9, 9, SPECIES_ZUBAT },
    { 10, 10, SPECIES_ARON },
    { 9, 9, SPECIES_ARON },
    { 11, 11, SPECIES_ARON },
    { 10, 10, SPECIES_ZUBAT },
    { 9, 9, SPECIES_ABRA },
    { 10, 10, SPECIES_MAKUHITA },
    { 11, 11, SPECIES_MAKUHITA },
    { 10, 10, SPECIES_SABLEYE },
    { 10, 10, SPECIES_SABLEYE },
    { 9, 9, SPECIES_SABLEYE },
    { 11, 11, SPECIES_SABLEYE },
};
const struct WildPokemonInfo gGraniteCave_B1F_LandMonsInfo_Day = { 10, gGraniteCave_B1F_LandMons_Day };

const struct WildPokemon gMtPyre_1F_LandMons_Day[] =
{
    { 27, 27, SPECIES_SHUPPET },
    { 28, 28, SPECIES_SHUPPET },
    { 26, 26, SPECIES_SHUPPET },
    { 25, 25, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
    { 23, 23, SPECIES_SHUPPET },
    { 22, 22, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
};
const struct WildPokemonInfo gMtPyre_1F_LandMonsInfo_Day = { 10, gMtPyre_1F_LandMons_Day };

const struct WildPokemon gVictoryRoad_1F_LandMons_Day[] =
{
    { 40, 40, SPECIES_GOLBAT },
    { 40, 40, SPECIES_HARIYAMA },
    { 40, 40, SPECIES_LAIRON },
    { 40, 40, SPECIES_LOUDRED },
    { 36, 36, SPECIES_ZUBAT },
    { 36, 36, SPECIES_MAKUHITA },
    { 38, 38, SPECIES_GOLBAT },
    { 38, 38, SPECIES_HARIYAMA },
    { 36, 36, SPECIES_ARON },
    { 36, 36, SPECIES_WHISMUR },
    { 36, 36, SPECIES_ARON },
    { 36, 36, SPECIES_WHISMUR },
};
const struct WildPokemonInfo gVictoryRoad_1F_LandMonsInfo_Day = { 10, gVictoryRoad_1F_LandMons_Day };

const struct WildPokemon gSafariZone_South_LandMons_Day[] =
{
    { 25, 25, SPECIES_ODDISH },
    { 27, 27, SPECIES_ODDISH },
    { 25, 25, SPECIES_GIRAFARIG },
    { 27, 27, SPECIES_GIRAFARIG },
    { 25, 25, SPECIES_NATU },
    { 25, 25, SPECIES_DODUO },
    { 25, 25, SPECIES_GLOOM },
    { 27, 27, SPECIES_WOBBUFFET },
    { 25, 25, SPECIES_PIKACHU },
    { 27, 27, SPECIES_WOBBUFFET },
    { 27, 27, SPECIES_PIKACHU },
    { 29, 29, SPECIES_WOBBUFFET },
};
const struct WildPokemonInfo gSafariZone_South_LandMonsInfo_Day = { 25, gSafariZone_South_LandMons_Day };

const struct WildPokemon gUnderwater_Route126_WaterMons_Day[] =
{
    { 20, 30, SPECIES_CLAMPERL },
    { 20, 30, SPECIES_CHINCHOU },
    { 30, 35, SPECIES_CLAMPERL },
    { 30, 35, SPECIES_RELICANTH },
    { 30, 35, SPECIES_RELICANTH },
};
const struct WildPokemonInfo gUnderwater_Route126_WaterMonsInfo_Day = { 4, gUnderwater_Route126_WaterMons_Day };

const struct WildPokemon gAbandonedShip_Rooms_B1F_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 35, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACRUEL },
};
const struct WildPokemonInfo gAbandonedShip_Rooms_B1F_WaterMonsInfo_Day = { 4, gAbandonedShip_Rooms_B1F_WaterMons_Day };

const struct WildPokemon gAbandonedShip_Rooms_B1F_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_TENTACOOL },
    { 25, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACRUEL },
    { 25, 30, SPECIES_TENTACRUEL },
    { 20, 25, SPECIES_TENTACRUEL },
};
const struct WildPokemonInfo gAbandonedShip_Rooms_B1F_FishingMonsInfo_Day = { 20, gAbandonedShip_Rooms_B1F_FishingMons_Day };

const struct WildPokemon gGraniteCave_B2F_LandMons_Day[] =
{
    { 10, 10, SPECIES_ZUBAT },
    { 11, 11, SPECIES_ARON },
    { 10, 10, SPECIES_ARON },
    { 11, 11, SPECIES_ZUBAT },
    { 12, 12, SPECIES_ARON },
    { 10, 10, SPECIES_ABRA },
    { 10, 10, SPECIES_SABLEYE },
    { 11, 11, SPECIES_SABLEYE },
    { 12, 12, SPECIES_SABLEYE },
    { 10, 10, SPECIES_SABLEYE },
    { 12, 12, SPECIES_SABLEYE },
    { 10, 10, SPECIES_SABLEYE },
};
const struct WildPokemonInfo gGraniteCave_B2F_LandMonsInfo_Day = { 10, gGraniteCave_B2F_LandMons_Day };

const struct WildPokemon gGraniteCave_B2F_RockSmashMons_Day[] =
{
    { 10, 15, SPECIES_GEODUDE },
    { 10, 20, SPECIES_NOSEPASS },
    { 5, 10, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
};
const struct WildPokemonInfo gGraniteCave_B2F_RockSmashMonsInfo_Day = { 20, gGraniteCave_B2F_RockSmashMons_Day };

const struct WildPokemon gFieryPath_LandMons_Day[] =
{
    { 15, 15, SPECIES_NUMEL },
    { 15, 15, SPECIES_KOFFING },
    { 16, 16, SPECIES_NUMEL },
    { 15, 15, SPECIES_MACHOP },
    { 15, 15, SPECIES_TORKOAL },
    { 15, 15, SPECIES_SLUGMA },
    { 16, 16, SPECIES_KOFFING },
    { 16, 16, SPECIES_MACHOP },
    { 14, 14, SPECIES_TORKOAL },
    { 16, 16, SPECIES_TORKOAL },
    { 14, 14, SPECIES_GRIMER },
    { 14, 14, SPECIES_GRIMER },
};
const struct WildPokemonInfo gFieryPath_LandMonsInfo_Day = { 10, gFieryPath_LandMons_Day };

const struct WildPokemon gMeteorFalls_B1F_2R_LandMons_Day[] =
{
    { 33, 33, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 30, 30, SPECIES_BAGON },
    { 35, 35, SPECIES_SOLROCK },
    { 35, 35, SPECIES_BAGON },
    { 37, 37, SPECIES_SOLROCK },
    { 25, 25, SPECIES_BAGON },
    { 39, 39, SPECIES_SOLROCK },
    { 38, 38, SPECIES_GOLBAT },
    { 40, 40, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GOLBAT },
    { 40, 40, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gMeteorFalls_B1F_2R_LandMonsInfo_Day = { 10, gMeteorFalls_B1F_2R_LandMons_Day };

const struct WildPokemon gMeteorFalls_B1F_2R_WaterMons_Day[] =
{
    { 30, 35, SPECIES_GOLBAT },
    { 30, 35, SPECIES_GOLBAT },
    { 25, 35, SPECIES_SOLROCK },
    { 15, 25, SPECIES_SOLROCK },
    { 5, 15, SPECIES_SOLROCK },
};
const struct WildPokemonInfo gMeteorFalls_B1F_2R_WaterMonsInfo_Day = { 4, gMeteorFalls_B1F_2R_WaterMons_Day };

const struct WildPokemon gMeteorFalls_B1F_2R_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_BARBOACH },
    { 25, 30, SPECIES_BARBOACH },
    { 30, 35, SPECIES_BARBOACH },
    { 30, 35, SPECIES_WHISCASH },
    { 35, 40, SPECIES_WHISCASH },
    { 40, 45, SPECIES_WHISCASH },
};
const struct WildPokemonInfo gMeteorFalls_B1F_2R_FishingMonsInfo_Day = { 30, gMeteorFalls_B1F_2R_FishingMons_Day };

const struct WildPokemon gJaggedPass_LandMons_Day[] =
{
    { 21, 21, SPECIES_NUMEL },
    { 21, 21, SPECIES_NUMEL },
    { 21, 21, SPECIES_MACHOP },
    { 20, 20, SPECIES_NUMEL },
    { 20, 20, SPECIES_SPOINK },
    { 20, 20, SPECIES_MACHOP },
    { 21, 21, SPECIES_SPOINK },
    { 22, 22, SPECIES_MACHOP },
    { 22, 22, SPECIES_NUMEL },
    { 22, 22, SPECIES_SPOINK },
    { 22, 22, SPECIES_NUMEL },
    { 22, 22, SPECIES_SPOINK },
};
const struct WildPokemonInfo gJaggedPass_LandMonsInfo_Day = { 20, gJaggedPass_LandMons_Day };

const struct WildPokemon gRoute106_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute106_WaterMonsInfo_Day = { 4, gRoute106_WaterMons_Day };

const struct WildPokemon gRoute106_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute106_FishingMonsInfo_Day = { 30, gRoute106_FishingMons_Day };

const struct WildPokemon gRoute107_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute107_WaterMonsInfo_Day = { 4, gRoute107_WaterMons_Day };

const struct WildPokemon gRoute107_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute107_FishingMonsInfo_Day = { 30, gRoute107_FishingMons_Day };

const struct WildPokemon gRoute108_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute108_WaterMonsInfo_Day = { 4, gRoute108_WaterMons_Day };

const struct WildPokemon gRoute108_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute108_FishingMonsInfo_Day = { 30, gRoute108_FishingMons_Day };

const struct WildPokemon gRoute109_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute109_WaterMonsInfo_Day = { 4, gRoute109_WaterMons_Day };

const struct WildPokemon gRoute109_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute109_FishingMonsInfo_Day = { 30, gRoute109_FishingMons_Day };

const struct WildPokemon gRoute115_LandMons_Day[] =
{
    { 23, 23, SPECIES_SWABLU },
    { 23, 23, SPECIES_TAILLOW },
    { 25, 25, SPECIES_SWABLU },
    { 24, 24, SPECIES_TAILLOW },
    { 25, 25, SPECIES_TAILLOW },
    { 25, 25, SPECIES_SWELLOW },
    { 24, 24, SPECIES_JIGGLYPUFF },
    { 25, 25, SPECIES_JIGGLYPUFF },
    { 24, 24, SPECIES_WINGULL },
    { 24, 24, SPECIES_WINGULL },
    { 26, 26, SPECIES_WINGULL },
    { 25, 25, SPECIES_WINGULL },
};
const struct WildPokemonInfo gRoute115_LandMonsInfo_Day = { 20, gRoute115_LandMons_Day };

const struct WildPokemon gRoute115_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute115_WaterMonsInfo_Day = { 4, gRoute115_WaterMons_Day };

const struct WildPokemon gRoute115_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute115_FishingMonsInfo_Day = { 30, gRoute115_FishingMons_Day };

const struct WildPokemon gNewMauville_Inside_LandMons_Day[] =
{
    { 24, 24, SPECIES_VOLTORB },
    { 24, 24, SPECIES_MAGNEMITE },
    { 25, 25, SPECIES_VOLTORB },
    { 25, 25, SPECIES_MAGNEMITE },
    { 23, 23, SPECIES_VOLTORB },
    { 23, 23, SPECIES_MAGNEMITE },
    { 26, 26, SPECIES_VOLTORB },
    { 26, 26, SPECIES_MAGNEMITE },
    { 22, 22, SPECIES_VOLTORB },
    { 22, 22, SPECIES_MAGNEMITE },
    { 26, 26, SPECIES_ELECTRODE },
    { 26, 26, SPECIES_MAGNETON },
};
const struct WildPokemonInfo gNewMauville_Inside_LandMonsInfo_Day = { 10, gNewMauville_Inside_LandMons_Day };

const struct WildPokemon gRoute119_LandMons_Day[] =
{
    { 25, 25, SPECIES_ZIGZAGOON },
    { 25, 25, SPECIES_LINOONE },
    { 27, 27, SPECIES_ZIGZAGOON },
    { 25, 25, SPECIES_ODDISH },
    { 27, 27, SPECIES_LINOONE },
    { 26, 26, SPECIES_ODDISH },
    { 27, 27, SPECIES_ODDISH },
    { 24, 24, SPECIES_ODDISH },
    { 25, 25, SPECIES_TROPIUS },
    { 26, 26, SPECIES_TROPIUS },
    { 27, 27, SPECIES_TROPIUS },
    { 25, 25, SPECIES_KECLEON },
};
const struct WildPokemonInfo gRoute119_LandMonsInfo_Day = { 15, gRoute119_LandMons_Day };

const struct WildPokemon gRoute119_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute119_WaterMonsInfo_Day = { 4, gRoute119_WaterMons_Day };

const struct WildPokemon gRoute119_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_CARVANHA },
    { 25, 30, SPECIES_CARVANHA },
    { 30, 35, SPECIES_CARVANHA },
    { 20, 25, SPECIES_CARVANHA },
    { 35, 40, SPECIES_CARVANHA },
    { 40, 45, SPECIES_CARVANHA },
};
const struct WildPokemonInfo gRoute119_FishingMonsInfo_Day = { 30, gRoute119_FishingMons_Day };

const struct WildPokemon gRoute120_LandMons_Day[] =
{
    { 25, 25, SPECIES_POOCHYENA },
    { 25, 25, SPECIES_MIGHTYENA },
    { 27, 27, SPECIES_MIGHTYENA },
    { 25, 25, SPECIES_ODDISH },
    { 25, 25, SPECIES_MARILL },
    { 26, 26, SPECIES_ODDISH },
    { 27, 27, SPECIES_ODDISH },
    { 27, 27, SPECIES_MARILL },
    { 25, 25, SPECIES_ABSOL },
    { 27, 27, SPECIES_ABSOL },
    { 25, 25, SPECIES_KECLEON },
    { 25, 25, SPECIES_SEEDOT },
};
const struct WildPokemonInfo gRoute120_LandMonsInfo_Day = { 20, gRoute120_LandMons_Day };

const struct WildPokemon gRoute120_WaterMons_Day[] =
{
    { 20, 30, SPECIES_MARILL },
    { 10, 20, SPECIES_MARILL },
    { 30, 35, SPECIES_MARILL },
    { 5, 10, SPECIES_MARILL },
    { 20, 30, SPECIES_GOLDEEN },
};
const struct WildPokemonInfo gRoute120_WaterMonsInfo_Day = { 4, gRoute120_WaterMons_Day };

const struct WildPokemon gRoute120_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_BARBOACH },
    { 25, 30, SPECIES_BARBOACH },
    { 30, 35, SPECIES_BARBOACH },
    { 20, 25, SPECIES_BARBOACH },
    { 35, 40, SPECIES_BARBOACH },
    { 40, 45, SPECIES_BARBOACH },
};
const struct WildPokemonInfo gRoute120_FishingMonsInfo_Day = { 30, gRoute120_FishingMons_Day };

const struct WildPokemon gRoute121_LandMons_Day[] =
{
    { 26, 26, SPECIES_POOCHYENA },
    { 26, 26, SPECIES_SHUPPET },
    { 26, 26, SPECIES_MIGHTYENA },
    { 28, 28, SPECIES_SHUPPET },
    { 28, 28, SPECIES_MIGHTYENA },
    { 26, 26, SPECIES_ODDISH },
    { 28, 28, SPECIES_ODDISH },
    { 28, 28, SPECIES_GLOOM },
    { 26, 26, SPECIES_WINGULL },
    { 27, 27, SPECIES_WINGULL },
    { 28, 28, SPECIES_WINGULL },
    { 25, 25, SPECIES_KECLEON },
};
const struct WildPokemonInfo gRoute121_LandMonsInfo_Day = { 20, gRoute121_LandMons_Day };

const struct WildPokemon gRoute121_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute121_WaterMonsInfo_Day = { 4, gRoute121_WaterMons_Day };

const struct WildPokemon gRoute121_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute121_FishingMonsInfo_Day = { 30, gRoute121_FishingMons_Day };

const struct WildPokemon gRoute122_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute122_WaterMonsInfo_Day = { 4, gRoute122_WaterMons_Day };

const struct WildPokemon gRoute122_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute122_FishingMonsInfo_Day = { 30, gRoute122_FishingMons_Day };

const struct WildPokemon gRoute123_LandMons_Day[] =
{
    { 26, 26, SPECIES_POOCHYENA },
    { 26, 26, SPECIES_SHUPPET },
    { 26, 26, SPECIES_MIGHTYENA },
    { 28, 28, SPECIES_SHUPPET },
    { 28, 28, SPECIES_MIGHTYENA },
    { 26, 26, SPECIES_ODDISH },
    { 28, 28, SPECIES_ODDISH },
    { 28, 28, SPECIES_GLOOM },
    { 26, 26, SPECIES_WINGULL },
    { 27, 27, SPECIES_WINGULL },
    { 28, 28, SPECIES_WINGULL },
    { 25, 25, SPECIES_KECLEON },
};
const struct WildPokemonInfo gRoute123_LandMonsInfo_Day = { 20, gRoute123_LandMons_Day };

const struct WildPokemon gRoute123_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute123_WaterMonsInfo_Day = { 4, gRoute123_WaterMons_Day };

const struct WildPokemon gRoute123_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute123_FishingMonsInfo_Day = { 30, gRoute123_FishingMons_Day };

const struct WildPokemon gMtPyre_2F_LandMons_Day[] =
{
    { 27, 27, SPECIES_SHUPPET },
    { 28, 28, SPECIES_SHUPPET },
    { 26, 26, SPECIES_SHUPPET },
    { 25, 25, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
    { 23, 23, SPECIES_SHUPPET },
    { 22, 22, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
};
const struct WildPokemonInfo gMtPyre_2F_LandMonsInfo_Day = { 10, gMtPyre_2F_LandMons_Day };

const struct WildPokemon gMtPyre_3F_LandMons_Day[] =
{
    { 27, 27, SPECIES_SHUPPET },
    { 28, 28, SPECIES_SHUPPET },
    { 26, 26, SPECIES_SHUPPET },
    { 25, 25, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
    { 23, 23, SPECIES_SHUPPET },
    { 22, 22, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
};
const struct WildPokemonInfo gMtPyre_3F_LandMonsInfo_Day = { 10, gMtPyre_3F_LandMons_Day };

const struct WildPokemon gMtPyre_4F_LandMons_Day[] =
{
    { 27, 27, SPECIES_SHUPPET },
    { 28, 28, SPECIES_SHUPPET },
    { 26, 26, SPECIES_SHUPPET },
    { 25, 25, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
    { 23, 23, SPECIES_SHUPPET },
    { 22, 22, SPECIES_SHUPPET },
    { 27, 27, SPECIES_DUSKULL },
    { 27, 27, SPECIES_DUSKULL },
    { 25, 25, SPECIES_DUSKULL },
    { 29, 29, SPECIES_DUSKULL },
};
const struct WildPokemonInfo gMtPyre_4F_LandMonsInfo_Day = { 10, gMtPyre_4F_LandMons_Day };

const struct WildPokemon gMtPyre_5F_LandMons_Day[] =
{
    { 27, 27, SPECIES_SHUPPET },
    { 28, 28, SPECIES_SHUPPET },
    { 26, 26, SPECIES_SHUPPET },
    { 25, 25, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
    { 23, 23, SPECIES_SHUPPET },
    { 22, 22, SPECIES_SHUPPET },
    { 27, 27, SPECIES_DUSKULL },
    { 27, 27, SPECIES_DUSKULL },
    { 25, 25, SPECIES_DUSKULL },
    { 29, 29, SPECIES_DUSKULL },
};
const struct WildPokemonInfo gMtPyre_5F_LandMonsInfo_Day = { 10, gMtPyre_5F_LandMons_Day };

const struct WildPokemon gMtPyre_6F_LandMons_Day[] =
{
    { 27, 27, SPECIES_SHUPPET },
    { 28, 28, SPECIES_SHUPPET },
    { 26, 26, SPECIES_SHUPPET },
    { 25, 25, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
    { 23, 23, SPECIES_SHUPPET },
    { 22, 22, SPECIES_SHUPPET },
    { 27, 27, SPECIES_DUSKULL },
    { 27, 27, SPECIES_DUSKULL },
    { 25, 25, SPECIES_DUSKULL },
    { 29, 29, SPECIES_DUSKULL },
};
const struct WildPokemonInfo gMtPyre_6F_LandMonsInfo_Day = { 10, gMtPyre_6F_LandMons_Day };

const struct WildPokemon gMtPyre_Exterior_LandMons_Day[] =
{
    { 27, 27, SPECIES_SHUPPET },
    { 27, 27, SPECIES_SHUPPET },
    { 28, 28, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 29, 29, SPECIES_VULPIX },
    { 27, 27, SPECIES_VULPIX },
    { 29, 29, SPECIES_VULPIX },
    { 25, 25, SPECIES_VULPIX },
    { 27, 27, SPECIES_WINGULL },
    { 27, 27, SPECIES_WINGULL },
    { 26, 26, SPECIES_WINGULL },
    { 28, 28, SPECIES_WINGULL },
};
const struct WildPokemonInfo gMtPyre_Exterior_LandMonsInfo_Day = { 10, gMtPyre_Exterior_LandMons_Day };

const struct WildPokemon gMtPyre_Summit_LandMons_Day[] =
{
    { 28, 28, SPECIES_SHUPPET },
    { 29, 29, SPECIES_SHUPPET },
    { 27, 27, SPECIES_SHUPPET },
    { 26, 26, SPECIES_SHUPPET },
    { 30, 30, SPECIES_SHUPPET },
    { 25, 25, SPECIES_SHUPPET },
    { 24, 24, SPECIES_SHUPPET },
    { 28, 28, SPECIES_DUSKULL },
    { 26, 26, SPECIES_DUSKULL },
    { 30, 30, SPECIES_DUSKULL },
    { 28, 28, SPECIES_CHIMECHO },
    { 28, 28, SPECIES_CHIMECHO },
};
const struct WildPokemonInfo gMtPyre_Summit_LandMonsInfo_Day = { 10, gMtPyre_Summit_LandMons_Day };

const struct WildPokemon gGraniteCave_StevensRoom_LandMons_Day[] =
{
    { 7, 7, SPECIES_ZUBAT },
    { 8, 8, SPECIES_MAKUHITA },
    { 7, 7, SPECIES_MAKUHITA },
    { 8, 8, SPECIES_ZUBAT },
    { 9, 9, SPECIES_MAKUHITA },
    { 8, 8, SPECIES_ABRA },
    { 10, 10, SPECIES_MAKUHITA },
    { 6, 6, SPECIES_MAKUHITA },
    { 7, 7, SPECIES_ARON },
    { 8, 8, SPECIES_ARON },
    { 7, 7, SPECIES_ARON },
    { 8, 8, SPECIES_ARON },
};
const struct WildPokemonInfo gGraniteCave_StevensRoom_LandMonsInfo_Day = { 10, gGraniteCave_StevensRoom_LandMons_Day };

const struct WildPokemon gRoute125_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute125_WaterMonsInfo_Day = { 4, gRoute125_WaterMons_Day };

const struct WildPokemon gRoute125_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute125_FishingMonsInfo_Day = { 30, gRoute125_FishingMons_Day };

const struct WildPokemon gRoute126_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute126_WaterMonsInfo_Day = { 4, gRoute126_WaterMons_Day };

const struct WildPokemon gRoute126_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute126_FishingMonsInfo_Day = { 30, gRoute126_FishingMons_Day };

const struct WildPokemon gRoute127_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute127_WaterMonsInfo_Day = { 4, gRoute127_WaterMons_Day };

const struct WildPokemon gRoute127_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute127_FishingMonsInfo_Day = { 30, gRoute127_FishingMons_Day };

const struct WildPokemon gRoute128_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute128_WaterMonsInfo_Day = { 4, gRoute128_WaterMons_Day };

const struct WildPokemon gRoute128_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_LUVDISC },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_LUVDISC },
    { 30, 35, SPECIES_WAILMER },
    { 30, 35, SPECIES_CORSOLA },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute128_FishingMonsInfo_Day = { 30, gRoute128_FishingMons_Day };

const struct WildPokemon gRoute129_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_WAILORD },
};
const struct WildPokemonInfo gRoute129_WaterMonsInfo_Day = { 4, gRoute129_WaterMons_Day };

const struct WildPokemon gRoute129_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute129_FishingMonsInfo_Day = { 30, gRoute129_FishingMons_Day };

const struct WildPokemon gRoute130_LandMons_Day[] =
{
    { 30, 30, SPECIES_WYNAUT },
    { 35, 35, SPECIES_WYNAUT },
    { 25, 25, SPECIES_WYNAUT },
    { 40, 40, SPECIES_WYNAUT },
    { 20, 20, SPECIES_WYNAUT },
    { 45, 45, SPECIES_WYNAUT },
    { 15, 15, SPECIES_WYNAUT },
    { 50, 50, SPECIES_WYNAUT },
    { 10, 10, SPECIES_WYNAUT },
    { 5, 5, SPECIES_WYNAUT },
    { 10, 10, SPECIES_WYNAUT },
    { 5, 5, SPECIES_WYNAUT },
};
const struct WildPokemonInfo gRoute130_LandMonsInfo_Day = { 20, gRoute130_LandMons_Day };

const struct WildPokemon gRoute130_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute130_WaterMonsInfo_Day = { 4, gRoute130_WaterMons_Day };

const struct WildPokemon gRoute130_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute130_FishingMonsInfo_Day = { 30, gRoute130_FishingMons_Day };

const struct WildPokemon gRoute131_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute131_WaterMonsInfo_Day = { 4, gRoute131_WaterMons_Day };

const struct WildPokemon gRoute131_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute131_FishingMonsInfo_Day = { 30, gRoute131_FishingMons_Day };

const struct WildPokemon gRoute132_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute132_WaterMonsInfo_Day = { 4, gRoute132_WaterMons_Day };

const struct WildPokemon gRoute132_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_HORSEA },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute132_FishingMonsInfo_Day = { 30, gRoute132_FishingMons_Day };

const struct WildPokemon gRoute133_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute133_WaterMonsInfo_Day = { 4, gRoute133_WaterMons_Day };

const struct WildPokemon gRoute133_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_HORSEA },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute133_FishingMonsInfo_Day = { 30, gRoute133_FishingMons_Day };

const struct WildPokemon gRoute134_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gRoute134_WaterMonsInfo_Day = { 4, gRoute134_WaterMons_Day };

const struct WildPokemon gRoute134_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_HORSEA },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gRoute134_FishingMonsInfo_Day = { 30, gRoute134_FishingMons_Day };

const struct WildPokemon gAbandonedShip_HiddenFloorCorridors_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 35, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACRUEL },
};
const struct WildPokemonInfo gAbandonedShip_HiddenFloorCorridors_WaterMonsInfo_Day = { 4, gAbandonedShip_HiddenFloorCorridors_WaterMons_Day };

const struct WildPokemon gAbandonedShip_HiddenFloorCorridors_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_TENTACOOL },
    { 25, 30, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACOOL },
    { 30, 35, SPECIES_TENTACRUEL },
    { 25, 30, SPECIES_TENTACRUEL },
    { 20, 25, SPECIES_TENTACRUEL },
};
const struct WildPokemonInfo gAbandonedShip_HiddenFloorCorridors_FishingMonsInfo_Day = { 20, gAbandonedShip_HiddenFloorCorridors_FishingMons_Day };

const struct WildPokemon gSeafloorCavern_Room1_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 33, 33, SPECIES_ZUBAT },
    { 28, 28, SPECIES_ZUBAT },
    { 29, 29, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 35, 35, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gSeafloorCavern_Room1_LandMonsInfo_Day = { 4, gSeafloorCavern_Room1_LandMons_Day };

const struct WildPokemon gSeafloorCavern_Room2_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 33, 33, SPECIES_ZUBAT },
    { 28, 28, SPECIES_ZUBAT },
    { 29, 29, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 35, 35, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gSeafloorCavern_Room2_LandMonsInfo_Day = { 4, gSeafloorCavern_Room2_LandMons_Day };

const struct WildPokemon gSeafloorCavern_Room3_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 33, 33, SPECIES_ZUBAT },
    { 28, 28, SPECIES_ZUBAT },
    { 29, 29, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 35, 35, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gSeafloorCavern_Room3_LandMonsInfo_Day = { 4, gSeafloorCavern_Room3_LandMons_Day };

const struct WildPokemon gSeafloorCavern_Room4_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 33, 33, SPECIES_ZUBAT },
    { 28, 28, SPECIES_ZUBAT },
    { 29, 29, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 35, 35, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gSeafloorCavern_Room4_LandMonsInfo_Day = { 4, gSeafloorCavern_Room4_LandMons_Day };

const struct WildPokemon gSeafloorCavern_Room5_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 33, 33, SPECIES_ZUBAT },
    { 28, 28, SPECIES_ZUBAT },
    { 29, 29, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 35, 35, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gSeafloorCavern_Room5_LandMonsInfo_Day = { 4, gSeafloorCavern_Room5_LandMons_Day };

const struct WildPokemon gSeafloorCavern_Room6_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 33, 33, SPECIES_ZUBAT },
    { 28, 28, SPECIES_ZUBAT },
    { 29, 29, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 35, 35, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gSeafloorCavern_Room6_LandMonsInfo_Day = { 4, gSeafloorCavern_Room6_LandMons_Day };

const struct WildPokemon gSeafloorCavern_Room6_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 35, SPECIES_ZUBAT },
    { 30, 35, SPECIES_ZUBAT },
    { 30, 35, SPECIES_GOLBAT },
    { 30, 35, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gSeafloorCavern_Room6_WaterMonsInfo_Day = { 4, gSeafloorCavern_Room6_WaterMons_Day };

const struct WildPokemon gSeafloorCavern_Room6_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gSeafloorCavern_Room6_FishingMonsInfo_Day = { 10, gSeafloorCavern_Room6_FishingMons_Day };

const struct WildPokemon gSeafloorCavern_Room7_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 33, 33, SPECIES_ZUBAT },
    { 28, 28, SPECIES_ZUBAT },
    { 29, 29, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 35, 35, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gSeafloorCavern_Room7_LandMonsInfo_Day = { 4, gSeafloorCavern_Room7_LandMons_Day };

const struct WildPokemon gSeafloorCavern_Room7_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 35, SPECIES_ZUBAT },
    { 30, 35, SPECIES_ZUBAT },
    { 30, 35, SPECIES_GOLBAT },
    { 30, 35, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gSeafloorCavern_Room7_WaterMonsInfo_Day = { 4, gSeafloorCavern_Room7_WaterMons_Day };

const struct WildPokemon gSeafloorCavern_Room7_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gSeafloorCavern_Room7_FishingMonsInfo_Day = { 10, gSeafloorCavern_Room7_FishingMons_Day };

const struct WildPokemon gSeafloorCavern_Room8_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 33, 33, SPECIES_ZUBAT },
    { 28, 28, SPECIES_ZUBAT },
    { 29, 29, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 35, 35, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gSeafloorCavern_Room8_LandMonsInfo_Day = { 4, gSeafloorCavern_Room8_LandMons_Day };

const struct WildPokemon gSeafloorCavern_Entrance_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 35, SPECIES_ZUBAT },
    { 30, 35, SPECIES_ZUBAT },
    { 30, 35, SPECIES_GOLBAT },
    { 30, 35, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gSeafloorCavern_Entrance_WaterMonsInfo_Day = { 4, gSeafloorCavern_Entrance_WaterMons_Day };

const struct WildPokemon gSeafloorCavern_Entrance_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gSeafloorCavern_Entrance_FishingMonsInfo_Day = { 10, gSeafloorCavern_Entrance_FishingMons_Day };

const struct WildPokemon gCaveOfOrigin_Entrance_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 33, 33, SPECIES_ZUBAT },
    { 28, 28, SPECIES_ZUBAT },
    { 29, 29, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 35, 35, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gCaveOfOrigin_Entrance_LandMonsInfo_Day = { 4, gCaveOfOrigin_Entrance_LandMons_Day };

const struct WildPokemon gCaveOfOrigin_1F_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SABLEYE },
    { 32, 32, SPECIES_SABLEYE },
    { 34, 34, SPECIES_SABLEYE },
    { 33, 33, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gCaveOfOrigin_1F_LandMonsInfo_Day = { 4, gCaveOfOrigin_1F_LandMons_Day };

const struct WildPokemon gCaveOfOrigin_UnusedRubySapphireMap1_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SABLEYE },
    { 32, 32, SPECIES_SABLEYE },
    { 34, 34, SPECIES_SABLEYE },
    { 33, 33, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gCaveOfOrigin_UnusedRubySapphireMap1_LandMonsInfo_Day = { 4, gCaveOfOrigin_UnusedRubySapphireMap1_LandMons_Day };

const struct WildPokemon gCaveOfOrigin_UnusedRubySapphireMap2_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SABLEYE },
    { 32, 32, SPECIES_SABLEYE },
    { 34, 34, SPECIES_SABLEYE },
    { 33, 33, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gCaveOfOrigin_UnusedRubySapphireMap2_LandMonsInfo_Day = { 4, gCaveOfOrigin_UnusedRubySapphireMap2_LandMons_Day };

const struct WildPokemon gCaveOfOrigin_UnusedRubySapphireMap3_LandMons_Day[] =
{
    { 30, 30, SPECIES_ZUBAT },
    { 31, 31, SPECIES_ZUBAT },
    { 32, 32, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SABLEYE },
    { 32, 32, SPECIES_SABLEYE },
    { 34, 34, SPECIES_SABLEYE },
    { 33, 33, SPECIES_ZUBAT },
    { 34, 34, SPECIES_ZUBAT },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 36, 36, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gCaveOfOrigin_UnusedRubySapphireMap3_LandMonsInfo_Day = { 4, gCaveOfOrigin_UnusedRubySapphireMap3_LandMons_Day };

const struct WildPokemon gNewMauville_Entrance_LandMons_Day[] =
{
    { 24, 24, SPECIES_VOLTORB },
    { 24, 24, SPECIES_MAGNEMITE },
    { 25, 25, SPECIES_VOLTORB },
    { 25, 25, SPECIES_MAGNEMITE },
    { 23, 23, SPECIES_VOLTORB },
    { 23, 23, SPECIES_MAGNEMITE },
    { 26, 26, SPECIES_VOLTORB },
    { 26, 26, SPECIES_MAGNEMITE },
    { 22, 22, SPECIES_VOLTORB },
    { 22, 22, SPECIES_MAGNEMITE },
    { 22, 22, SPECIES_VOLTORB },
    { 22, 22, SPECIES_MAGNEMITE },
};
const struct WildPokemonInfo gNewMauville_Entrance_LandMonsInfo_Day = { 10, gNewMauville_Entrance_LandMons_Day };

const struct WildPokemon gSafariZone_Southwest_LandMons_Day[] =
{
    { 25, 25, SPECIES_ODDISH },
    { 27, 27, SPECIES_ODDISH },
    { 25, 25, SPECIES_GIRAFARIG },
    { 27, 27, SPECIES_GIRAFARIG },
    { 25, 25, SPECIES_NATU },
    { 27, 27, SPECIES_DODUO },
    { 25, 25, SPECIES_GLOOM },
    { 27, 27, SPECIES_WOBBUFFET },
    { 25, 25, SPECIES_PIKACHU },
    { 27, 27, SPECIES_WOBBUFFET },
    { 27, 27, SPECIES_PIKACHU },
    { 29, 29, SPECIES_WOBBUFFET },
};
const struct WildPokemonInfo gSafariZone_Southwest_LandMonsInfo_Day = { 25, gSafariZone_Southwest_LandMons_Day };

const struct WildPokemon gSafariZone_Southwest_WaterMons_Day[] =
{
    { 20, 30, SPECIES_PSYDUCK },
    { 20, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
};
const struct WildPokemonInfo gSafariZone_Southwest_WaterMonsInfo_Day = { 9, gSafariZone_Southwest_WaterMons_Day };

const struct WildPokemon gSafariZone_Southwest_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 25, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_GOLDEEN },
    { 25, 30, SPECIES_GOLDEEN },
    { 30, 35, SPECIES_GOLDEEN },
    { 30, 35, SPECIES_SEAKING },
    { 35, 40, SPECIES_SEAKING },
    { 25, 30, SPECIES_SEAKING },
};
const struct WildPokemonInfo gSafariZone_Southwest_FishingMonsInfo_Day = { 35, gSafariZone_Southwest_FishingMons_Day };

const struct WildPokemon gSafariZone_North_LandMons_Day[] =
{
    { 27, 27, SPECIES_PHANPY },
    { 27, 27, SPECIES_ODDISH },
    { 29, 29, SPECIES_PHANPY },
    { 29, 29, SPECIES_ODDISH },
    { 27, 27, SPECIES_NATU },
    { 29, 29, SPECIES_GLOOM },
    { 31, 31, SPECIES_GLOOM },
    { 29, 29, SPECIES_NATU },
    { 29, 29, SPECIES_XATU },
    { 27, 27, SPECIES_HERACROSS },
    { 31, 31, SPECIES_XATU },
    { 29, 29, SPECIES_HERACROSS },
};
const struct WildPokemonInfo gSafariZone_North_LandMonsInfo_Day = { 25, gSafariZone_North_LandMons_Day };

const struct WildPokemon gSafariZone_North_RockSmashMons_Day[] =
{
    { 10, 15, SPECIES_GEODUDE },
    { 5, 10, SPECIES_GEODUDE },
    { 15, 20, SPECIES_GEODUDE },
    { 20, 25, SPECIES_GEODUDE },
    { 25, 30, SPECIES_GEODUDE },
};
const struct WildPokemonInfo gSafariZone_North_RockSmashMonsInfo_Day = { 25, gSafariZone_North_RockSmashMons_Day };

const struct WildPokemon gSafariZone_Northwest_LandMons_Day[] =
{
    { 27, 27, SPECIES_RHYHORN },
    { 27, 27, SPECIES_ODDISH },
    { 29, 29, SPECIES_RHYHORN },
    { 29, 29, SPECIES_ODDISH },
    { 27, 27, SPECIES_DODUO },
    { 29, 29, SPECIES_GLOOM },
    { 31, 31, SPECIES_GLOOM },
    { 29, 29, SPECIES_DODUO },
    { 29, 29, SPECIES_DODRIO },
    { 27, 27, SPECIES_PINSIR },
    { 31, 31, SPECIES_DODRIO },
    { 29, 29, SPECIES_PINSIR },
};
const struct WildPokemonInfo gSafariZone_Northwest_LandMonsInfo_Day = { 25, gSafariZone_Northwest_LandMons_Day };

const struct WildPokemon gSafariZone_Northwest_WaterMons_Day[] =
{
    { 20, 30, SPECIES_PSYDUCK },
    { 20, 30, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_PSYDUCK },
    { 30, 35, SPECIES_GOLDUCK },
    { 25, 40, SPECIES_GOLDUCK },
};
const struct WildPokemonInfo gSafariZone_Northwest_WaterMonsInfo_Day = { 9, gSafariZone_Northwest_WaterMons_Day };

const struct WildPokemon gSafariZone_Northwest_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 25, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_GOLDEEN },
    { 25, 30, SPECIES_GOLDEEN },
    { 30, 35, SPECIES_GOLDEEN },
    { 30, 35, SPECIES_SEAKING },
    { 35, 40, SPECIES_SEAKING },
    { 25, 30, SPECIES_SEAKING },
};
const struct WildPokemonInfo gSafariZone_Northwest_FishingMonsInfo_Day = { 35, gSafariZone_Northwest_FishingMons_Day };

const struct WildPokemon gVictoryRoad_B1F_LandMons_Day[] =
{
    { 40, 40, SPECIES_GOLBAT },
    { 40, 40, SPECIES_HARIYAMA },
    { 40, 40, SPECIES_LAIRON },
    { 40, 40, SPECIES_LAIRON },
    { 38, 38, SPECIES_GOLBAT },
    { 38, 38, SPECIES_HARIYAMA },
    { 42, 42, SPECIES_GOLBAT },
    { 42, 42, SPECIES_HARIYAMA },
    { 42, 42, SPECIES_LAIRON },
    { 38, 38, SPECIES_MAWILE },
    { 42, 42, SPECIES_LAIRON },
    { 38, 38, SPECIES_MAWILE },
};
const struct WildPokemonInfo gVictoryRoad_B1F_LandMonsInfo_Day = { 10, gVictoryRoad_B1F_LandMons_Day };

const struct WildPokemon gVictoryRoad_B1F_RockSmashMons_Day[] =
{
    { 30, 40, SPECIES_GRAVELER },
    { 30, 40, SPECIES_GEODUDE },
    { 35, 40, SPECIES_GRAVELER },
    { 35, 40, SPECIES_GRAVELER },
    { 35, 40, SPECIES_GRAVELER },
};
const struct WildPokemonInfo gVictoryRoad_B1F_RockSmashMonsInfo_Day = { 20, gVictoryRoad_B1F_RockSmashMons_Day };

const struct WildPokemon gVictoryRoad_B2F_LandMons_Day[] =
{
    { 40, 40, SPECIES_GOLBAT },
    { 40, 40, SPECIES_SABLEYE },
    { 40, 40, SPECIES_LAIRON },
    { 40, 40, SPECIES_LAIRON },
    { 42, 42, SPECIES_GOLBAT },
    { 42, 42, SPECIES_SABLEYE },
    { 44, 44, SPECIES_GOLBAT },
    { 44, 44, SPECIES_SABLEYE },
    { 42, 42, SPECIES_LAIRON },
    { 42, 42, SPECIES_MAWILE },
    { 44, 44, SPECIES_LAIRON },
    { 44, 44, SPECIES_MAWILE },
};
const struct WildPokemonInfo gVictoryRoad_B2F_LandMonsInfo_Day = { 10, gVictoryRoad_B2F_LandMons_Day };

const struct WildPokemon gVictoryRoad_B2F_WaterMons_Day[] =
{
    { 30, 35, SPECIES_GOLBAT },
    { 25, 30, SPECIES_GOLBAT },
    { 35, 40, SPECIES_GOLBAT },
    { 35, 40, SPECIES_GOLBAT },
    { 35, 40, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gVictoryRoad_B2F_WaterMonsInfo_Day = { 4, gVictoryRoad_B2F_WaterMons_Day };

const struct WildPokemon gVictoryRoad_B2F_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_BARBOACH },
    { 25, 30, SPECIES_BARBOACH },
    { 30, 35, SPECIES_BARBOACH },
    { 30, 35, SPECIES_WHISCASH },
    { 35, 40, SPECIES_WHISCASH },
    { 40, 45, SPECIES_WHISCASH },
};
const struct WildPokemonInfo gVictoryRoad_B2F_FishingMonsInfo_Day = { 30, gVictoryRoad_B2F_FishingMons_Day };

const struct WildPokemon gMeteorFalls_1F_1R_LandMons_Day[] =
{
    { 16, 16, SPECIES_ZUBAT },
    { 17, 17, SPECIES_ZUBAT },
    { 18, 18, SPECIES_ZUBAT },
    { 15, 15, SPECIES_ZUBAT },
    { 14, 14, SPECIES_ZUBAT },
    { 16, 16, SPECIES_SOLROCK },
    { 18, 18, SPECIES_SOLROCK },
    { 14, 14, SPECIES_SOLROCK },
    { 19, 19, SPECIES_ZUBAT },
    { 20, 20, SPECIES_ZUBAT },
    { 19, 19, SPECIES_ZUBAT },
    { 20, 20, SPECIES_ZUBAT },
};
const struct WildPokemonInfo gMeteorFalls_1F_1R_LandMonsInfo_Day = { 10, gMeteorFalls_1F_1R_LandMons_Day };

const struct WildPokemon gMeteorFalls_1F_1R_WaterMons_Day[] =
{
    { 5, 35, SPECIES_ZUBAT },
    { 30, 35, SPECIES_ZUBAT },
    { 25, 35, SPECIES_SOLROCK },
    { 15, 25, SPECIES_SOLROCK },
    { 5, 15, SPECIES_SOLROCK },
};
const struct WildPokemonInfo gMeteorFalls_1F_1R_WaterMonsInfo_Day = { 4, gMeteorFalls_1F_1R_WaterMons_Day };

const struct WildPokemon gMeteorFalls_1F_1R_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_BARBOACH },
    { 25, 30, SPECIES_BARBOACH },
    { 30, 35, SPECIES_BARBOACH },
    { 20, 25, SPECIES_BARBOACH },
    { 35, 40, SPECIES_BARBOACH },
    { 40, 45, SPECIES_BARBOACH },
};
const struct WildPokemonInfo gMeteorFalls_1F_1R_FishingMonsInfo_Day = { 30, gMeteorFalls_1F_1R_FishingMons_Day };

const struct WildPokemon gMeteorFalls_1F_2R_LandMons_Day[] =
{
    { 33, 33, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 35, 35, SPECIES_SOLROCK },
    { 33, 33, SPECIES_SOLROCK },
    { 37, 37, SPECIES_SOLROCK },
    { 35, 35, SPECIES_GOLBAT },
    { 39, 39, SPECIES_SOLROCK },
    { 38, 38, SPECIES_GOLBAT },
    { 40, 40, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GOLBAT },
    { 40, 40, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gMeteorFalls_1F_2R_LandMonsInfo_Day = { 10, gMeteorFalls_1F_2R_LandMons_Day };

const struct WildPokemon gMeteorFalls_1F_2R_WaterMons_Day[] =
{
    { 30, 35, SPECIES_GOLBAT },
    { 30, 35, SPECIES_GOLBAT },
    { 25, 35, SPECIES_SOLROCK },
    { 15, 25, SPECIES_SOLROCK },
    { 5, 15, SPECIES_SOLROCK },
};
const struct WildPokemonInfo gMeteorFalls_1F_2R_WaterMonsInfo_Day = { 4, gMeteorFalls_1F_2R_WaterMons_Day };

const struct WildPokemon gMeteorFalls_1F_2R_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_BARBOACH },
    { 25, 30, SPECIES_BARBOACH },
    { 30, 35, SPECIES_BARBOACH },
    { 30, 35, SPECIES_WHISCASH },
    { 35, 40, SPECIES_WHISCASH },
    { 40, 45, SPECIES_WHISCASH },
};
const struct WildPokemonInfo gMeteorFalls_1F_2R_FishingMonsInfo_Day = { 30, gMeteorFalls_1F_2R_FishingMons_Day };

const struct WildPokemon gMeteorFalls_B1F_1R_LandMons_Day[] =
{
    { 33, 33, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 35, 35, SPECIES_SOLROCK },
    { 33, 33, SPECIES_SOLROCK },
    { 37, 37, SPECIES_SOLROCK },
    { 35, 35, SPECIES_GOLBAT },
    { 39, 39, SPECIES_SOLROCK },
    { 38, 38, SPECIES_GOLBAT },
    { 40, 40, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GOLBAT },
    { 40, 40, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gMeteorFalls_B1F_1R_LandMonsInfo_Day = { 10, gMeteorFalls_B1F_1R_LandMons_Day };

const struct WildPokemon gMeteorFalls_B1F_1R_WaterMons_Day[] =
{
    { 30, 35, SPECIES_GOLBAT },
    { 30, 35, SPECIES_GOLBAT },
    { 25, 35, SPECIES_SOLROCK },
    { 15, 25, SPECIES_SOLROCK },
    { 5, 15, SPECIES_SOLROCK },
};
const struct WildPokemonInfo gMeteorFalls_B1F_1R_WaterMonsInfo_Day = { 4, gMeteorFalls_B1F_1R_WaterMons_Day };

const struct WildPokemon gMeteorFalls_B1F_1R_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_BARBOACH },
    { 25, 30, SPECIES_BARBOACH },
    { 30, 35, SPECIES_BARBOACH },
    { 30, 35, SPECIES_WHISCASH },
    { 35, 40, SPECIES_WHISCASH },
    { 40, 45, SPECIES_WHISCASH },
};
const struct WildPokemonInfo gMeteorFalls_B1F_1R_FishingMonsInfo_Day = { 30, gMeteorFalls_B1F_1R_FishingMons_Day };

const struct WildPokemon gShoalCave_LowTideStairsRoom_LandMons_Day[] =
{
    { 26, 26, SPECIES_ZUBAT },
    { 26, 26, SPECIES_SPHEAL },
    { 28, 28, SPECIES_ZUBAT },
    { 28, 28, SPECIES_SPHEAL },
    { 30, 30, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SPHEAL },
    { 32, 32, SPECIES_ZUBAT },
    { 32, 32, SPECIES_SPHEAL },
    { 32, 32, SPECIES_GOLBAT },
    { 32, 32, SPECIES_SPHEAL },
    { 32, 32, SPECIES_GOLBAT },
    { 32, 32, SPECIES_SPHEAL },
};
const struct WildPokemonInfo gShoalCave_LowTideStairsRoom_LandMonsInfo_Day = { 10, gShoalCave_LowTideStairsRoom_LandMons_Day };

const struct WildPokemon gShoalCave_LowTideLowerRoom_LandMons_Day[] =
{
    { 26, 26, SPECIES_ZUBAT },
    { 26, 26, SPECIES_SPHEAL },
    { 28, 28, SPECIES_ZUBAT },
    { 28, 28, SPECIES_SPHEAL },
    { 30, 30, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SPHEAL },
    { 32, 32, SPECIES_ZUBAT },
    { 32, 32, SPECIES_SPHEAL },
    { 32, 32, SPECIES_GOLBAT },
    { 32, 32, SPECIES_SPHEAL },
    { 32, 32, SPECIES_GOLBAT },
    { 32, 32, SPECIES_SPHEAL },
};
const struct WildPokemonInfo gShoalCave_LowTideLowerRoom_LandMonsInfo_Day = { 10, gShoalCave_LowTideLowerRoom_LandMons_Day };

const struct WildPokemon gShoalCave_LowTideInnerRoom_LandMons_Day[] =
{
    { 26, 26, SPECIES_ZUBAT },
    { 26, 26, SPECIES_SPHEAL },
    { 28, 28, SPECIES_ZUBAT },
    { 28, 28, SPECIES_SPHEAL },
    { 30, 30, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SPHEAL },
    { 32, 32, SPECIES_ZUBAT },
    { 32, 32, SPECIES_SPHEAL },
    { 32, 32, SPECIES_GOLBAT },
    { 32, 32, SPECIES_SPHEAL },
    { 32, 32, SPECIES_GOLBAT },
    { 32, 32, SPECIES_SPHEAL },
};
const struct WildPokemonInfo gShoalCave_LowTideInnerRoom_LandMonsInfo_Day = { 10, gShoalCave_LowTideInnerRoom_LandMons_Day };

const struct WildPokemon gShoalCave_LowTideInnerRoom_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 35, SPECIES_ZUBAT },
    { 25, 30, SPECIES_SPHEAL },
    { 25, 30, SPECIES_SPHEAL },
    { 25, 35, SPECIES_SPHEAL },
};
const struct WildPokemonInfo gShoalCave_LowTideInnerRoom_WaterMonsInfo_Day = { 4, gShoalCave_LowTideInnerRoom_WaterMons_Day };

const struct WildPokemon gShoalCave_LowTideInnerRoom_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gShoalCave_LowTideInnerRoom_FishingMonsInfo_Day = { 10, gShoalCave_LowTideInnerRoom_FishingMons_Day };

const struct WildPokemon gShoalCave_LowTideEntranceRoom_LandMons_Day[] =
{
    { 26, 26, SPECIES_ZUBAT },
    { 26, 26, SPECIES_SPHEAL },
    { 28, 28, SPECIES_ZUBAT },
    { 28, 28, SPECIES_SPHEAL },
    { 30, 30, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SPHEAL },
    { 32, 32, SPECIES_ZUBAT },
    { 32, 32, SPECIES_SPHEAL },
    { 32, 32, SPECIES_GOLBAT },
    { 32, 32, SPECIES_SPHEAL },
    { 32, 32, SPECIES_GOLBAT },
    { 32, 32, SPECIES_SPHEAL },
};
const struct WildPokemonInfo gShoalCave_LowTideEntranceRoom_LandMonsInfo_Day = { 10, gShoalCave_LowTideEntranceRoom_LandMons_Day };

const struct WildPokemon gShoalCave_LowTideEntranceRoom_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 5, 35, SPECIES_ZUBAT },
    { 25, 30, SPECIES_SPHEAL },
    { 25, 30, SPECIES_SPHEAL },
    { 25, 35, SPECIES_SPHEAL },
};
const struct WildPokemonInfo gShoalCave_LowTideEntranceRoom_WaterMonsInfo_Day = { 4, gShoalCave_LowTideEntranceRoom_WaterMons_Day };

const struct WildPokemon gShoalCave_LowTideEntranceRoom_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gShoalCave_LowTideEntranceRoom_FishingMonsInfo_Day = { 10, gShoalCave_LowTideEntranceRoom_FishingMons_Day };

const struct WildPokemon gLilycoveCity_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gLilycoveCity_WaterMonsInfo_Day = { 4, gLilycoveCity_WaterMons_Day };

const struct WildPokemon gLilycoveCity_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_STARYU },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gLilycoveCity_FishingMonsInfo_Day = { 10, gLilycoveCity_FishingMons_Day };

const struct WildPokemon gDewfordTown_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gDewfordTown_WaterMonsInfo_Day = { 4, gDewfordTown_WaterMons_Day };

const struct WildPokemon gDewfordTown_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gDewfordTown_FishingMonsInfo_Day = { 10, gDewfordTown_FishingMons_Day };

const struct WildPokemon gSlateportCity_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gSlateportCity_WaterMonsInfo_Day = { 4, gSlateportCity_WaterMons_Day };

const struct WildPokemon gSlateportCity_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_WAILMER },
    { 20, 25, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gSlateportCity_FishingMonsInfo_Day = { 10, gSlateportCity_FishingMons_Day };

const struct WildPokemon gMossdeepCity_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gMossdeepCity_WaterMonsInfo_Day = { 4, gMossdeepCity_WaterMons_Day };

const struct WildPokemon gMossdeepCity_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gMossdeepCity_FishingMonsInfo_Day = { 10, gMossdeepCity_FishingMons_Day };

const struct WildPokemon gPacifidlogTown_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gPacifidlogTown_WaterMonsInfo_Day = { 4, gPacifidlogTown_WaterMons_Day };

const struct WildPokemon gPacifidlogTown_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_SHARPEDO },
    { 30, 35, SPECIES_WAILMER },
    { 25, 30, SPECIES_WAILMER },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gPacifidlogTown_FishingMonsInfo_Day = { 10, gPacifidlogTown_FishingMons_Day };

const struct WildPokemon gEverGrandeCity_WaterMons_Day[] =
{
    { 5, 35, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_WINGULL },
    { 15, 25, SPECIES_WINGULL },
    { 25, 30, SPECIES_PELIPPER },
    { 25, 30, SPECIES_PELIPPER },
};
const struct WildPokemonInfo gEverGrandeCity_WaterMonsInfo_Day = { 4, gEverGrandeCity_WaterMons_Day };

const struct WildPokemon gEverGrandeCity_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_LUVDISC },
    { 10, 30, SPECIES_WAILMER },
    { 30, 35, SPECIES_LUVDISC },
    { 30, 35, SPECIES_WAILMER },
    { 30, 35, SPECIES_CORSOLA },
    { 35, 40, SPECIES_WAILMER },
    { 40, 45, SPECIES_WAILMER },
};
const struct WildPokemonInfo gEverGrandeCity_FishingMonsInfo_Day = { 10, gEverGrandeCity_FishingMons_Day };

const struct WildPokemon gPetalburgCity_WaterMons_Day[] =
{
    { 20, 30, SPECIES_MARILL },
    { 10, 20, SPECIES_MARILL },
    { 30, 35, SPECIES_MARILL },
    { 5, 10, SPECIES_MARILL },
    { 5, 10, SPECIES_MARILL },
};
const struct WildPokemonInfo gPetalburgCity_WaterMonsInfo_Day = { 1, gPetalburgCity_WaterMons_Day };

const struct WildPokemon gPetalburgCity_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_GOLDEEN },
    { 10, 30, SPECIES_CORPHISH },
    { 25, 30, SPECIES_CORPHISH },
    { 30, 35, SPECIES_CORPHISH },
    { 20, 25, SPECIES_CORPHISH },
    { 35, 40, SPECIES_CORPHISH },
    { 40, 45, SPECIES_CORPHISH },
};
const struct WildPokemonInfo gPetalburgCity_FishingMonsInfo_Day = { 10, gPetalburgCity_FishingMons_Day };

const struct WildPokemon gUnderwater_Route124_WaterMons_Day[] =
{
    { 20, 30, SPECIES_CLAMPERL },
    { 20, 30, SPECIES_CHINCHOU },
    { 30, 35, SPECIES_CLAMPERL },
    { 30, 35, SPECIES_RELICANTH },
    { 30, 35, SPECIES_RELICANTH },
};
const struct WildPokemonInfo gUnderwater_Route124_WaterMonsInfo_Day = { 4, gUnderwater_Route124_WaterMons_Day };

const struct WildPokemon gShoalCave_LowTideIceRoom_LandMons_Day[] =
{
    { 26, 26, SPECIES_ZUBAT },
    { 26, 26, SPECIES_SPHEAL },
    { 28, 28, SPECIES_ZUBAT },
    { 28, 28, SPECIES_SPHEAL },
    { 30, 30, SPECIES_ZUBAT },
    { 30, 30, SPECIES_SPHEAL },
    { 26, 26, SPECIES_SNORUNT },
    { 32, 32, SPECIES_SPHEAL },
    { 30, 30, SPECIES_GOLBAT },
    { 28, 28, SPECIES_SNORUNT },
    { 32, 32, SPECIES_GOLBAT },
    { 30, 30, SPECIES_SNORUNT },
};
const struct WildPokemonInfo gShoalCave_LowTideIceRoom_LandMonsInfo_Day = { 10, gShoalCave_LowTideIceRoom_LandMons_Day };

const struct WildPokemon gSkyPillar_1F_LandMons_Day[] =
{
    { 33, 33, SPECIES_SABLEYE },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 34, 34, SPECIES_SABLEYE },
    { 36, 36, SPECIES_CLAYDOL },
    { 37, 37, SPECIES_BANETTE },
    { 38, 38, SPECIES_BANETTE },
    { 36, 36, SPECIES_CLAYDOL },
    { 37, 37, SPECIES_CLAYDOL },
    { 38, 38, SPECIES_CLAYDOL },
    { 37, 37, SPECIES_CLAYDOL },
    { 38, 38, SPECIES_CLAYDOL },
};
const struct WildPokemonInfo gSkyPillar_1F_LandMonsInfo_Day = { 10, gSkyPillar_1F_LandMons_Day };

const struct WildPokemon gSootopolisCity_WaterMons_Day[] =
{
    { 5, 35, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_MAGIKARP },
    { 15, 25, SPECIES_MAGIKARP },
    { 25, 30, SPECIES_MAGIKARP },
    { 25, 30, SPECIES_MAGIKARP },
};
const struct WildPokemonInfo gSootopolisCity_WaterMonsInfo_Day = { 1, gSootopolisCity_WaterMons_Day };

const struct WildPokemon gSootopolisCity_FishingMons_Day[] =
{
    { 5, 10, SPECIES_MAGIKARP },
    { 5, 10, SPECIES_TENTACOOL },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_MAGIKARP },
    { 10, 30, SPECIES_MAGIKARP },
    { 30, 35, SPECIES_MAGIKARP },
    { 30, 35, SPECIES_MAGIKARP },
    { 35, 40, SPECIES_GYARADOS },
    { 35, 45, SPECIES_GYARADOS },
    { 5, 45, SPECIES_GYARADOS },
};
const struct WildPokemonInfo gSootopolisCity_FishingMonsInfo_Day = { 10, gSootopolisCity_FishingMons_Day };

const struct WildPokemon gSkyPillar_3F_LandMons_Day[] =
{
    { 33, 33, SPECIES_SABLEYE },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 34, 34, SPECIES_SABLEYE },
    { 36, 36, SPECIES_CLAYDOL },
    { 37, 37, SPECIES_BANETTE },
    { 38, 38, SPECIES_BANETTE },
    { 36, 36, SPECIES_CLAYDOL },
    { 37, 37, SPECIES_CLAYDOL },
    { 38, 38, SPECIES_CLAYDOL },
    { 37, 37, SPECIES_CLAYDOL },
    { 38, 38, SPECIES_CLAYDOL },
};
const struct WildPokemonInfo gSkyPillar_3F_LandMonsInfo_Day = { 10, gSkyPillar_3F_LandMons_Day };

const struct WildPokemon gSkyPillar_5F_LandMons_Day[] =
{
    { 33, 33, SPECIES_SABLEYE },
    { 34, 34, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 34, 34, SPECIES_SABLEYE },
    { 36, 36, SPECIES_CLAYDOL },
    { 37, 37, SPECIES_BANETTE },
    { 38, 38, SPECIES_BANETTE },
    { 36, 36, SPECIES_CLAYDOL },
    { 37, 37, SPECIES_CLAYDOL },
    { 38, 38, SPECIES_ALTARIA },
    { 39, 39, SPECIES_ALTARIA },
    { 39, 39, SPECIES_ALTARIA },
};
const struct WildPokemonInfo gSkyPillar_5F_LandMonsInfo_Day = { 10, gSkyPillar_5F_LandMons_Day };

const struct WildPokemon gSafariZone_Southeast_LandMons_Day[] =
{
    { 33, 33, SPECIES_SUNKERN },
    { 34, 34, SPECIES_MAREEP },
    { 35, 35, SPECIES_SUNKERN },
    { 36, 36, SPECIES_MAREEP },
    { 34, 34, SPECIES_AIPOM },
    { 33, 33, SPECIES_SPINARAK },
    { 35, 35, SPECIES_HOOTHOOT },
    { 34, 34, SPECIES_SNUBBULL },
    { 36, 36, SPECIES_STANTLER },
    { 37, 37, SPECIES_GLIGAR },
    { 39, 39, SPECIES_STANTLER },
    { 40, 40, SPECIES_GLIGAR },
};
const struct WildPokemonInfo gSafariZone_Southeast_LandMonsInfo_Day = { 25, gSafariZone_Southeast_LandMons_Day };

const struct WildPokemon gSafariZone_Southeast_WaterMons_Day[] =
{
    { 25, 30, SPECIES_WOOPER },
    { 25, 30, SPECIES_MARILL },
    { 25, 30, SPECIES_MARILL },
    { 30, 35, SPECIES_MARILL },
    { 35, 40, SPECIES_QUAGSIRE },
};
const struct WildPokemonInfo gSafariZone_Southeast_WaterMonsInfo_Day = { 9, gSafariZone_Southeast_WaterMons_Day };

const struct WildPokemon gSafariZone_Southeast_FishingMons_Day[] =
{
    { 25, 30, SPECIES_MAGIKARP },
    { 25, 30, SPECIES_GOLDEEN },
    { 25, 30, SPECIES_MAGIKARP },
    { 25, 30, SPECIES_GOLDEEN },
    { 30, 35, SPECIES_REMORAID },
    { 25, 30, SPECIES_GOLDEEN },
    { 25, 30, SPECIES_REMORAID },
    { 30, 35, SPECIES_REMORAID },
    { 30, 35, SPECIES_REMORAID },
    { 35, 40, SPECIES_OCTILLERY },
};
const struct WildPokemonInfo gSafariZone_Southeast_FishingMonsInfo_Day = { 35, gSafariZone_Southeast_FishingMons_Day };

const struct WildPokemon gSafariZone_Northeast_LandMons_Day[] =
{
    { 33, 33, SPECIES_AIPOM },
    { 34, 34, SPECIES_TEDDIURSA },
    { 35, 35, SPECIES_AIPOM },
    { 36, 36, SPECIES_TEDDIURSA },
    { 34, 34, SPECIES_SUNKERN },
    { 33, 33, SPECIES_LEDYBA },
    { 35, 35, SPECIES_HOOTHOOT },
    { 34, 34, SPECIES_PINECO },
    { 36, 36, SPECIES_HOUNDOUR },
    { 37, 37, SPECIES_MILTANK },
    { 39, 39, SPECIES_HOUNDOUR },
    { 40, 40, SPECIES_MILTANK },
};
const struct WildPokemonInfo gSafariZone_Northeast_LandMonsInfo_Day = { 25, gSafariZone_Northeast_LandMons_Day };

const struct WildPokemon gSafariZone_Northeast_RockSmashMons_Day[] =
{
    { 25, 30, SPECIES_SHUCKLE },
    { 20, 25, SPECIES_SHUCKLE },
    { 30, 35, SPECIES_SHUCKLE },
    { 30, 35, SPECIES_SHUCKLE },
    { 35, 40, SPECIES_SHUCKLE },
};
const struct WildPokemonInfo gSafariZone_Northeast_RockSmashMonsInfo_Day = { 25, gSafariZone_Northeast_RockSmashMons_Day };

const struct WildPokemon gMagmaHideout_1F_LandMons_Day[] =
{
    { 27, 27, SPECIES_GEODUDE },
    { 28, 28, SPECIES_TORKOAL },
    { 28, 28, SPECIES_GEODUDE },
    { 30, 30, SPECIES_TORKOAL },
    { 29, 29, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GRAVELER },
    { 30, 30, SPECIES_GRAVELER },
    { 31, 31, SPECIES_GRAVELER },
    { 32, 32, SPECIES_GRAVELER },
    { 33, 33, SPECIES_GRAVELER },
};
const struct WildPokemonInfo gMagmaHideout_1F_LandMonsInfo_Day = { 10, gMagmaHideout_1F_LandMons_Day };

const struct WildPokemon gMagmaHideout_2F_1R_LandMons_Day[] =
{
    { 27, 27, SPECIES_GEODUDE },
    { 28, 28, SPECIES_TORKOAL },
    { 28, 28, SPECIES_GEODUDE },
    { 30, 30, SPECIES_TORKOAL },
    { 29, 29, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GRAVELER },
    { 30, 30, SPECIES_GRAVELER },
    { 31, 31, SPECIES_GRAVELER },
    { 32, 32, SPECIES_GRAVELER },
    { 33, 33, SPECIES_GRAVELER },
};
const struct WildPokemonInfo gMagmaHideout_2F_1R_LandMonsInfo_Day = { 10, gMagmaHideout_2F_1R_LandMons_Day };

const struct WildPokemon gMagmaHideout_2F_2R_LandMons_Day[] =
{
    { 27, 27, SPECIES_GEODUDE },
    { 28, 28, SPECIES_TORKOAL },
    { 28, 28, SPECIES_GEODUDE },
    { 30, 30, SPECIES_TORKOAL },
    { 29, 29, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GRAVELER },
    { 30, 30, SPECIES_GRAVELER },
    { 31, 31, SPECIES_GRAVELER },
    { 32, 32, SPECIES_GRAVELER },
    { 33, 33, SPECIES_GRAVELER },
};
const struct WildPokemonInfo gMagmaHideout_2F_2R_LandMonsInfo_Day = { 10, gMagmaHideout_2F_2R_LandMons_Day };

const struct WildPokemon gMagmaHideout_3F_1R_LandMons_Day[] =
{
    { 27, 27, SPECIES_GEODUDE },
    { 28, 28, SPECIES_TORKOAL },
    { 28, 28, SPECIES_GEODUDE },
    { 30, 30, SPECIES_TORKOAL },
    { 29, 29, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GRAVELER },
    { 30, 30, SPECIES_GRAVELER },
    { 31, 31, SPECIES_GRAVELER },
    { 32, 32, SPECIES_GRAVELER },
    { 33, 33, SPECIES_GRAVELER },
};
const struct WildPokemonInfo gMagmaHideout_3F_1R_LandMonsInfo_Day = { 10, gMagmaHideout_3F_1R_LandMons_Day };

const struct WildPokemon gMagmaHideout_3F_2R_LandMons_Day[] =
{
    { 27, 27, SPECIES_GEODUDE },
    { 28, 28, SPECIES_TORKOAL },
    { 28, 28, SPECIES_GEODUDE },
    { 30, 30, SPECIES_TORKOAL },
    { 29, 29, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GRAVELER },
    { 30, 30, SPECIES_GRAVELER },
    { 31, 31, SPECIES_GRAVELER },
    { 32, 32, SPECIES_GRAVELER },
    { 33, 33, SPECIES_GRAVELER },
};
const struct WildPokemonInfo gMagmaHideout_3F_2R_LandMonsInfo_Day = { 10, gMagmaHideout_3F_2R_LandMons_Day };

const struct WildPokemon gMagmaHideout_4F_LandMons_Day[] =
{
    { 27, 27, SPECIES_GEODUDE },
    { 28, 28, SPECIES_TORKOAL },
    { 28, 28, SPECIES_GEODUDE },
    { 30, 30, SPECIES_TORKOAL },
    { 29, 29, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GRAVELER },
    { 30, 30, SPECIES_GRAVELER },
    { 31, 31, SPECIES_GRAVELER },
    { 32, 32, SPECIES_GRAVELER },
    { 33, 33, SPECIES_GRAVELER },
};
const struct WildPokemonInfo gMagmaHideout_4F_LandMonsInfo_Day = { 10, gMagmaHideout_4F_LandMons_Day };

const struct WildPokemon gMagmaHideout_3F_3R_LandMons_Day[] =
{
    { 27, 27, SPECIES_GEODUDE },
    { 28, 28, SPECIES_TORKOAL },
    { 28, 28, SPECIES_GEODUDE },
    { 30, 30, SPECIES_TORKOAL },
    { 29, 29, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GRAVELER },
    { 30, 30, SPECIES_GRAVELER },
    { 31, 31, SPECIES_GRAVELER },
    { 32, 32, SPECIES_GRAVELER },
    { 33, 33, SPECIES_GRAVELER },
};
const struct WildPokemonInfo gMagmaHideout_3F_3R_LandMonsInfo_Day = { 10, gMagmaHideout_3F_3R_LandMons_Day };

const struct WildPokemon gMagmaHideout_2F_3R_LandMons_Day[] =
{
    { 27, 27, SPECIES_GEODUDE },
    { 28, 28, SPECIES_TORKOAL },
    { 28, 28, SPECIES_GEODUDE },
    { 30, 30, SPECIES_TORKOAL },
    { 29, 29, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GEODUDE },
    { 30, 30, SPECIES_GRAVELER },
    { 30, 30, SPECIES_GRAVELER },
    { 31, 31, SPECIES_GRAVELER },
    { 32, 32, SPECIES_GRAVELER },
    { 33, 33, SPECIES_GRAVELER },
};
const struct WildPokemonInfo gMagmaHideout_2F_3R_LandMonsInfo_Day = { 10, gMagmaHideout_2F_3R_LandMons_Day };

const struct WildPokemon gMirageTower_1F_LandMons_Day[] =
{
    { 21, 21, SPECIES_SANDSHREW },
    { 21, 21, SPECIES_TRAPINCH },
    { 20, 20, SPECIES_SANDSHREW },
    { 20, 20, SPECIES_TRAPINCH },
    { 20, 20, SPECIES_SANDSHREW },
    { 20, 20, SPECIES_TRAPINCH },
    { 22, 22, SPECIES_SANDSHREW },
    { 22, 22, SPECIES_TRAPINCH },
    { 23, 23, SPECIES_SANDSHREW },
    { 23, 23, SPECIES_TRAPINCH },
    { 24, 24, SPECIES_SANDSHREW },
    { 24, 24, SPECIES_TRAPINCH },
};
const struct WildPokemonInfo gMirageTower_1F_LandMonsInfo_Day = { 10, gMirageTower_1F_LandMons_Day };

const struct WildPokemon gMirageTower_2F_LandMons_Day[] =
{
    { 21, 21, SPECIES_SANDSHREW },
    { 21, 21, SPECIES_TRAPINCH },
    { 20, 20, SPECIES_SANDSHREW },
    { 20, 20, SPECIES_TRAPINCH },
    { 20, 20, SPECIES_SANDSHREW },
    { 20, 20, SPECIES_TRAPINCH },
    { 22, 22, SPECIES_SANDSHREW },
    { 22, 22, SPECIES_TRAPINCH },
    { 23, 23, SPECIES_SANDSHREW },
    { 23, 23, SPECIES_TRAPINCH },
    { 24, 24, SPECIES_SANDSHREW },
    { 24, 24, SPECIES_TRAPINCH },
};
const struct WildPokemonInfo gMirageTower_2F_LandMonsInfo_Day = { 10, gMirageTower_2F_LandMons_Day };

const struct WildPokemon gMirageTower_3F_LandMons_Day[] =
{
    { 21, 21, SPECIES_SANDSHREW },
    { 21, 21, SPECIES_TRAPINCH },
    { 20, 20, SPECIES_SANDSHREW },
    { 20, 20, SPECIES_TRAPINCH },
    { 20, 20, SPECIES_SANDSHREW },
    { 20, 20, SPECIES_TRAPINCH },
    { 22, 22, SPECIES_SANDSHREW },
    { 22, 22, SPECIES_TRAPINCH },
    { 23, 23, SPECIES_SANDSHREW },
    { 23, 23, SPECIES_TRAPINCH },
    { 24, 24, SPECIES_SANDSHREW },
    { 24, 24, SPECIES_TRAPINCH },
};
const struct WildPokemonInfo gMirageTower_3F_LandMonsInfo_Day = { 10, gMirageTower_3F_LandMons_Day };

const struct WildPokemon gMirageTower_4F_LandMons_Day[] =
{
    { 21, 21, SPECIES_SANDSHREW },
    { 21, 21, SPECIES_TRAPINCH },
    { 20, 20, SPECIES_SANDSHREW },
    { 20, 20, SPECIES_TRAPINCH },
    { 20, 20, SPECIES_SANDSHREW },
    { 20, 20, SPECIES_TRAPINCH },
    { 22, 22, SPECIES_SANDSHREW },
    { 22, 22, SPECIES_TRAPINCH },
    { 23, 23, SPECIES_SANDSHREW },
    { 23, 23, SPECIES_TRAPINCH },
    { 24, 24, SPECIES_SANDSHREW },
    { 24, 24, SPECIES_TRAPINCH },
};
const struct WildPokemonInfo gMirageTower_4F_LandMonsInfo_Day = { 10, gMirageTower_4F_LandMons_Day };

const struct WildPokemon gDesertUnderpass_LandMons_Day[] =
{
    { 38, 38, SPECIES_DITTO },
    { 35, 35, SPECIES_WHISMUR },
    { 40, 40, SPECIES_DITTO },
    { 40, 40, SPECIES_LOUDRED },
    { 41, 41, SPECIES_DITTO },
    { 36, 36, SPECIES_WHISMUR },
    { 38, 38, SPECIES_LOUDRED },
    { 42, 42, SPECIES_DITTO },
    { 38, 38, SPECIES_WHISMUR },
    { 43, 43, SPECIES_DITTO },
    { 44, 44, SPECIES_LOUDRED },
    { 45, 45, SPECIES_DITTO },
};
const struct WildPokemonInfo gDesertUnderpass_LandMonsInfo_Day = { 10, gDesertUnderpass_LandMons_Day };

const struct WildPokemon gArtisanCave_B1F_LandMons_Day[] =
{
    { 40, 40, SPECIES_SMEARGLE },
    { 41, 41, SPECIES_SMEARGLE },
    { 42, 42, SPECIES_SMEARGLE },
    { 43, 43, SPECIES_SMEARGLE },
    { 44, 44, SPECIES_SMEARGLE },
    { 45, 45, SPECIES_SMEARGLE },
    { 46, 46, SPECIES_SMEARGLE },
    { 47, 47, SPECIES_SMEARGLE },
    { 48, 48, SPECIES_SMEARGLE },
    { 49, 49, SPECIES_SMEARGLE },
    { 50, 50, SPECIES_SMEARGLE },
    { 50, 50, SPECIES_SMEARGLE },
};
const struct WildPokemonInfo gArtisanCave_B1F_LandMonsInfo_Day = { 10, gArtisanCave_B1F_LandMons_Day };

const struct WildPokemon gArtisanCave_1F_LandMons_Day[] =
{
    { 40, 40, SPECIES_SMEARGLE },
    { 41, 41, SPECIES_SMEARGLE },
    { 42, 42, SPECIES_SMEARGLE },
    { 43, 43, SPECIES_SMEARGLE },
    { 44, 44, SPECIES_SMEARGLE },
    { 45, 45, SPECIES_SMEARGLE },
    { 46, 46, SPECIES_SMEARGLE },
    { 47, 47, SPECIES_SMEARGLE },
    { 48, 48, SPECIES_SMEARGLE },
    { 49, 49, SPECIES_SMEARGLE },
    { 50, 50, SPECIES_SMEARGLE },
    { 50, 50, SPECIES_SMEARGLE },
};
const struct WildPokemonInfo gArtisanCave_1F_LandMonsInfo_Day = { 10, gArtisanCave_1F_LandMons_Day };

const struct WildPokemon gAlteringCave1_LandMons_Day[] =
{
    { 10, 10, SPECIES_ZUBAT },
    { 12, 12, SPECIES_ZUBAT },
    { 8, 8, SPECIES_ZUBAT },
    { 14, 14, SPECIES_ZUBAT },
    { 10, 10, SPECIES_ZUBAT },
    { 12, 12, SPECIES_ZUBAT },
    { 16, 16, SPECIES_ZUBAT },
    { 6, 6, SPECIES_ZUBAT },
    { 8, 8, SPECIES_ZUBAT },
    { 14, 14, SPECIES_ZUBAT },
    { 8, 8, SPECIES_ZUBAT },
    { 14, 14, SPECIES_ZUBAT },
};
const struct WildPokemonInfo gAlteringCave1_LandMonsInfo_Day = { 7, gAlteringCave1_LandMons_Day };

const struct WildPokemon gAlteringCave2_LandMons_Day[] =
{
    { 7, 7, SPECIES_MAREEP },
    { 9, 9, SPECIES_MAREEP },
    { 5, 5, SPECIES_MAREEP },
    { 11, 11, SPECIES_MAREEP },
    { 7, 7, SPECIES_MAREEP },
    { 9, 9, SPECIES_MAREEP },
    { 13, 13, SPECIES_MAREEP },
    { 3, 3, SPECIES_MAREEP },
    { 5, 5, SPECIES_MAREEP },
    { 11, 11, SPECIES_MAREEP },
    { 5, 5, SPECIES_MAREEP },
    { 11, 11, SPECIES_MAREEP },
};
const struct WildPokemonInfo gAlteringCave2_LandMonsInfo_Day = { 7, gAlteringCave2_LandMons_Day };

const struct WildPokemon gAlteringCave3_LandMons_Day[] =
{
    { 23, 23, SPECIES_PINECO },
    { 25, 25, SPECIES_PINECO },
    { 22, 22, SPECIES_PINECO },
    { 27, 27, SPECIES_PINECO },
    { 23, 23, SPECIES_PINECO },
    { 25, 25, SPECIES_PINECO },
    { 29, 29, SPECIES_PINECO },
    { 19, 19, SPECIES_PINECO },
    { 21, 21, SPECIES_PINECO },
    { 27, 27, SPECIES_PINECO },
    { 21, 21, SPECIES_PINECO },
    { 27, 27, SPECIES_PINECO },
};
const struct WildPokemonInfo gAlteringCave3_LandMonsInfo_Day = { 7, gAlteringCave3_LandMons_Day };

const struct WildPokemon gAlteringCave4_LandMons_Day[] =
{
    { 16, 16, SPECIES_HOUNDOUR },
    { 18, 18, SPECIES_HOUNDOUR },
    { 14, 14, SPECIES_HOUNDOUR },
    { 20, 20, SPECIES_HOUNDOUR },
    { 16, 16, SPECIES_HOUNDOUR },
    { 18, 18, SPECIES_HOUNDOUR },
    { 22, 22, SPECIES_HOUNDOUR },
    { 12, 12, SPECIES_HOUNDOUR },
    { 14, 14, SPECIES_HOUNDOUR },
    { 20, 20, SPECIES_HOUNDOUR },
    { 14, 14, SPECIES_HOUNDOUR },
    { 20, 20, SPECIES_HOUNDOUR },
};
const struct WildPokemonInfo gAlteringCave4_LandMonsInfo_Day = { 7, gAlteringCave4_LandMons_Day };

const struct WildPokemon gAlteringCave5_LandMons_Day[] =
{
    { 10, 10, SPECIES_TEDDIURSA },
    { 12, 12, SPECIES_TEDDIURSA },
    { 8, 8, SPECIES_TEDDIURSA },
    { 14, 14, SPECIES_TEDDIURSA },
    { 10, 10, SPECIES_TEDDIURSA },
    { 12, 12, SPECIES_TEDDIURSA },
    { 16, 16, SPECIES_TEDDIURSA },
    { 6, 6, SPECIES_TEDDIURSA },
    { 8, 8, SPECIES_TEDDIURSA },
    { 14, 14, SPECIES_TEDDIURSA },
    { 8, 8, SPECIES_TEDDIURSA },
    { 14, 14, SPECIES_TEDDIURSA },
};
const struct WildPokemonInfo gAlteringCave5_LandMonsInfo_Day = { 7, gAlteringCave5_LandMons_Day };

const struct WildPokemon gAlteringCave6_LandMons_Day[] =
{
    { 22, 22, SPECIES_AIPOM },
    { 24, 24, SPECIES_AIPOM },
    { 20, 20, SPECIES_AIPOM },
    { 26, 26, SPECIES_AIPOM },
    { 22, 22, SPECIES_AIPOM },
    { 24, 24, SPECIES_AIPOM },
    { 28, 28, SPECIES_AIPOM },
    { 18, 18, SPECIES_AIPOM },
    { 20, 20, SPECIES_AIPOM },
    { 26, 26, SPECIES_AIPOM },
    { 20, 20, SPECIES_AIPOM },
    { 26, 26, SPECIES_AIPOM },
};
const struct WildPokemonInfo gAlteringCave6_LandMonsInfo_Day = { 7, gAlteringCave6_LandMons_Day };

const struct WildPokemon gAlteringCave7_LandMons_Day[] =
{
    { 22, 22, SPECIES_SHUCKLE },
    { 24, 24, SPECIES_SHUCKLE },
    { 20, 20, SPECIES_SHUCKLE },
    { 26, 26, SPECIES_SHUCKLE },
    { 22, 22, SPECIES_SHUCKLE },
    { 24, 24, SPECIES_SHUCKLE },
    { 28, 28, SPECIES_SHUCKLE },
    { 18, 18, SPECIES_SHUCKLE },
    { 20, 20, SPECIES_SHUCKLE },
    { 26, 26, SPECIES_SHUCKLE },
    { 20, 20, SPECIES_SHUCKLE },
    { 26, 26, SPECIES_SHUCKLE },
};
const struct WildPokemonInfo gAlteringCave7_LandMonsInfo_Day = { 7, gAlteringCave7_LandMons_Day };

const struct WildPokemon gAlteringCave8_LandMons_Day[] =
{
    { 22, 22, SPECIES_STANTLER },
    { 24, 24, SPECIES_STANTLER },
    { 20, 20, SPECIES_STANTLER },
    { 26, 26, SPECIES_STANTLER },
    { 22, 22, SPECIES_STANTLER },
    { 24, 24, SPECIES_STANTLER },
    { 28, 28, SPECIES_STANTLER },
    { 18, 18, SPECIES_STANTLER },
    { 20, 20, SPECIES_STANTLER },
    { 26, 26, SPECIES_STANTLER },
    { 20, 20, SPECIES_STANTLER },
    { 26, 26, SPECIES_STANTLER },
};
const struct WildPokemonInfo gAlteringCave8_LandMonsInfo_Day = { 7, gAlteringCave8_LandMons_Day };

const struct WildPokemon gAlteringCave9_LandMons_Day[] =
{
    { 22, 22, SPECIES_SMEARGLE },
    { 24, 24, SPECIES_SMEARGLE },
    { 20, 20, SPECIES_SMEARGLE },
    { 26, 26, SPECIES_SMEARGLE },
    { 22, 22, SPECIES_SMEARGLE },
    { 24, 24, SPECIES_SMEARGLE },
    { 28, 28, SPECIES_SMEARGLE },
    { 18, 18, SPECIES_SMEARGLE },
    { 20, 20, SPECIES_SMEARGLE },
    { 26, 26, SPECIES_SMEARGLE },
    { 20, 20, SPECIES_SMEARGLE },
    { 26, 26, SPECIES_SMEARGLE },
};
const struct WildPokemonInfo gAlteringCave9_LandMonsInfo_Day = { 7, gAlteringCave9_LandMons_Day };

const struct WildPokemon gMeteorFalls_StevensCave_LandMons_Day[] =
{
    { 33, 33, SPECIES_GOLBAT },
    { 35, 35, SPECIES_GOLBAT },
    { 33, 33, SPECIES_GOLBAT },
    { 35, 35, SPECIES_SOLROCK },
    { 33, 33, SPECIES_SOLROCK },
    { 37, 37, SPECIES_SOLROCK },
    { 35, 35, SPECIES_GOLBAT },
    { 39, 39, SPECIES_SOLROCK },
    { 38, 38, SPECIES_GOLBAT },
    { 40, 40, SPECIES_GOLBAT },
    { 38, 38, SPECIES_GOLBAT },
    { 40, 40, SPECIES_GOLBAT },
};
const struct WildPokemonInfo gMeteorFalls_StevensCave_LandMonsInfo_Day = { 10, gMeteorFalls_StevensCave_LandMons_Day };

const struct WildPokemon gBattlePyramid_1_LandMons_Day[] =
{
    { 5, 5, SPECIES_BULBASAUR },
    { 5, 5, SPECIES_BULBASAUR },
    { 5, 5, SPECIES_BULBASAUR },
    { 5, 5, SPECIES_BULBASAUR },
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_CHARMANDER },
};
const struct WildPokemonInfo gBattlePyramid_1_LandMonsInfo_Day = { 4, gBattlePyramid_1_LandMons_Day };

const struct WildPokemon gBattlePyramid_2_LandMons_Day[] =
{
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_IVYSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMANDER },
};
const struct WildPokemonInfo gBattlePyramid_2_LandMonsInfo_Day = { 4, gBattlePyramid_2_LandMons_Day };

const struct WildPokemon gBattlePyramid_3_LandMons_Day[] =
{
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_VENUSAUR },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARIZARD },
};
const struct WildPokemonInfo gBattlePyramid_3_LandMonsInfo_Day = { 4, gBattlePyramid_3_LandMons_Day };

const struct WildPokemon gBattlePyramid_4_LandMons_Day[] =
{
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMANDER },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_SQUIRTLE },
};
const struct WildPokemonInfo gBattlePyramid_4_LandMonsInfo_Day = { 4, gBattlePyramid_4_LandMons_Day };

const struct WildPokemon gBattlePyramid_5_LandMons_Day[] =
{
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_WARTORTLE },
};
const struct WildPokemonInfo gBattlePyramid_5_LandMonsInfo_Day = { 4, gBattlePyramid_5_LandMons_Day };

const struct WildPokemon gBattlePyramid_6_LandMons_Day[] =
{
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
};
const struct WildPokemonInfo gBattlePyramid_6_LandMonsInfo_Day = { 4, gBattlePyramid_6_LandMons_Day };

const struct WildPokemon gBattlePyramid_7_LandMons_Day[] =
{
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_WARTORTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_SQUIRTLE },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARIZARD },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
    { 5, 5, SPECIES_CHARMELEON },
};
const struct WildPokemonInfo gBattlePyramid_7_LandMonsInfo_Day = { 8, gBattlePyramid_7_LandMons_Day };

const struct WildPokemon gBattlePike_1_LandMons_Day[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_DUSCLOPS },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};
const struct WildPokemonInfo gBattlePike_1_LandMonsInfo_Day = { 10, gBattlePike_1_LandMons_Day };

const struct WildPokemon gBattlePike_2_LandMons_Day[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_ELECTRODE },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};
const struct WildPokemonInfo gBattlePike_2_LandMonsInfo_Day = { 10, gBattlePike_2_LandMons_Day };

const struct WildPokemon gBattlePike_3_LandMons_Day[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_BRELOOM },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};
const struct WildPokemonInfo gBattlePike_3_LandMonsInfo_Day = { 10, gBattlePike_3_LandMons_Day };

const struct WildPokemon gBattlePike_4_LandMons_Day[] =
{
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_WOBBUFFET },
    { 5, 5, SPECIES_SEVIPER },
    { 5, 5, SPECIES_MILOTIC },
};
const struct WildPokemonInfo gBattlePike_4_LandMonsInfo_Day = { 10, gBattlePike_4_LandMons_Day };


const struct WildPokemonHeader gWildMonHeaders[] =
{
    {
        .mapGroup = MAP_GROUP(ROUTE10),
        .mapNum = MAP_ROUTE101,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute101_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE10),
        .mapNum = MAP_ROUTE102,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute102_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute102_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute102_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE10),
        .mapNum = MAP_ROUTE103,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute103_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute103_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute103_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE10),
        .mapNum = MAP_ROUTE104,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute104_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute104_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute104_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE10),
        .mapNum = MAP_ROUTE105,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute105_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute105_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE11),
        .mapNum = MAP_ROUTE110,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute110_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute110_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute110_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE11),
        .mapNum = MAP_ROUTE111,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute111_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute111_WaterMonsInfo_Day,
                .rockSmashMonsInfo = &gRoute111_RockSmashMonsInfo_Day,
                .fishingMonsInfo = &gRoute111_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE11),
        .mapNum = MAP_ROUTE112,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute112_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE11),
        .mapNum = MAP_ROUTE113,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute113_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE11),
        .mapNum = MAP_ROUTE114,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute114_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute114_WaterMonsInfo_Day,
                .rockSmashMonsInfo = &gRoute114_RockSmashMonsInfo_Day,
                .fishingMonsInfo = &gRoute114_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE11),
        .mapNum = MAP_ROUTE116,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute116_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE11),
        .mapNum = MAP_ROUTE117,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute117_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute117_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute117_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE11),
        .mapNum = MAP_ROUTE118,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute118_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute118_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute118_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE12),
        .mapNum = MAP_ROUTE124,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute124_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute124_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(PETALBURG_WOOD),
        .mapNum = MAP_PETALBURG_WOODS,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gPetalburgWoods_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(RUSTURF_TUNNE),
        .mapNum = MAP_RUSTURF_TUNNEL,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRusturfTunnel_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(GRANITE_CAVE_1),
        .mapNum = MAP_GRANITE_CAVE_1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gGraniteCave_1F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(GRANITE_CAVE_B1),
        .mapNum = MAP_GRANITE_CAVE_B1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gGraniteCave_B1F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_1),
        .mapNum = MAP_MT_PYRE_1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMtPyre_1F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(VICTORY_ROAD_1),
        .mapNum = MAP_VICTORY_ROAD_1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gVictoryRoad_1F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_SOUT),
        .mapNum = MAP_SAFARI_ZONE_SOUTH,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSafariZone_South_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(UNDERWATER_ROUTE12),
        .mapNum = MAP_UNDERWATER_ROUTE126,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gUnderwater_Route126_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ABANDONED_SHIP_ROOMS_B1),
        .mapNum = MAP_ABANDONED_SHIP_ROOMS_B1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gAbandonedShip_Rooms_B1F_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gAbandonedShip_Rooms_B1F_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(GRANITE_CAVE_B2),
        .mapNum = MAP_GRANITE_CAVE_B2F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gGraniteCave_B2F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = &gGraniteCave_B2F_RockSmashMonsInfo_Day,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(FIERY_PAT),
        .mapNum = MAP_FIERY_PATH,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gFieryPath_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(METEOR_FALLS_B1F_2),
        .mapNum = MAP_METEOR_FALLS_B1F_2R,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMeteorFalls_B1F_2R_LandMonsInfo_Day,
                .waterMonsInfo = &gMeteorFalls_B1F_2R_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gMeteorFalls_B1F_2R_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(JAGGED_PAS),
        .mapNum = MAP_JAGGED_PASS,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gJaggedPass_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE10),
        .mapNum = MAP_ROUTE106,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute106_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute106_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE10),
        .mapNum = MAP_ROUTE107,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute107_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute107_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE10),
        .mapNum = MAP_ROUTE108,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute108_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute108_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE10),
        .mapNum = MAP_ROUTE109,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute109_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute109_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE11),
        .mapNum = MAP_ROUTE115,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute115_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute115_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute115_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(NEW_MAUVILLE_INSID),
        .mapNum = MAP_NEW_MAUVILLE_INSIDE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gNewMauville_Inside_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE11),
        .mapNum = MAP_ROUTE119,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute119_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute119_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute119_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE12),
        .mapNum = MAP_ROUTE120,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute120_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute120_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute120_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE12),
        .mapNum = MAP_ROUTE121,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute121_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute121_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute121_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE12),
        .mapNum = MAP_ROUTE122,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute122_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute122_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE12),
        .mapNum = MAP_ROUTE123,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute123_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute123_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute123_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_2),
        .mapNum = MAP_MT_PYRE_2F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMtPyre_2F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_3),
        .mapNum = MAP_MT_PYRE_3F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMtPyre_3F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_4),
        .mapNum = MAP_MT_PYRE_4F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMtPyre_4F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_5),
        .mapNum = MAP_MT_PYRE_5F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMtPyre_5F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_6),
        .mapNum = MAP_MT_PYRE_6F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMtPyre_6F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_EXTERIO),
        .mapNum = MAP_MT_PYRE_EXTERIOR,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMtPyre_Exterior_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MT_PYRE_SUMMI),
        .mapNum = MAP_MT_PYRE_SUMMIT,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMtPyre_Summit_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(GRANITE_CAVE_STEVENS_ROO),
        .mapNum = MAP_GRANITE_CAVE_STEVENS_ROOM,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gGraniteCave_StevensRoom_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE12),
        .mapNum = MAP_ROUTE125,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute125_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute125_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE12),
        .mapNum = MAP_ROUTE126,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute126_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute126_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE12),
        .mapNum = MAP_ROUTE127,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute127_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute127_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE12),
        .mapNum = MAP_ROUTE128,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute128_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute128_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE12),
        .mapNum = MAP_ROUTE129,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute129_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute129_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE13),
        .mapNum = MAP_ROUTE130,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gRoute130_LandMonsInfo_Day,
                .waterMonsInfo = &gRoute130_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute130_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE13),
        .mapNum = MAP_ROUTE131,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute131_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute131_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE13),
        .mapNum = MAP_ROUTE132,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute132_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute132_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE13),
        .mapNum = MAP_ROUTE133,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute133_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute133_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ROUTE13),
        .mapNum = MAP_ROUTE134,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gRoute134_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gRoute134_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDOR),
        .mapNum = MAP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gAbandonedShip_HiddenFloorCorridors_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gAbandonedShip_HiddenFloorCorridors_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM),
        .mapNum = MAP_SEAFLOOR_CAVERN_ROOM1,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSeafloorCavern_Room1_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM),
        .mapNum = MAP_SEAFLOOR_CAVERN_ROOM2,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSeafloorCavern_Room2_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM),
        .mapNum = MAP_SEAFLOOR_CAVERN_ROOM3,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSeafloorCavern_Room3_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM),
        .mapNum = MAP_SEAFLOOR_CAVERN_ROOM4,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSeafloorCavern_Room4_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM),
        .mapNum = MAP_SEAFLOOR_CAVERN_ROOM5,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSeafloorCavern_Room5_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM),
        .mapNum = MAP_SEAFLOOR_CAVERN_ROOM6,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSeafloorCavern_Room6_LandMonsInfo_Day,
                .waterMonsInfo = &gSeafloorCavern_Room6_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gSeafloorCavern_Room6_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM),
        .mapNum = MAP_SEAFLOOR_CAVERN_ROOM7,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSeafloorCavern_Room7_LandMonsInfo_Day,
                .waterMonsInfo = &gSeafloorCavern_Room7_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gSeafloorCavern_Room7_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ROOM),
        .mapNum = MAP_SEAFLOOR_CAVERN_ROOM8,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSeafloorCavern_Room8_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SEAFLOOR_CAVERN_ENTRANC),
        .mapNum = MAP_SEAFLOOR_CAVERN_ENTRANCE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gSeafloorCavern_Entrance_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gSeafloorCavern_Entrance_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(CAVE_OF_ORIGIN_ENTRANC),
        .mapNum = MAP_CAVE_OF_ORIGIN_ENTRANCE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gCaveOfOrigin_Entrance_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(CAVE_OF_ORIGIN_1),
        .mapNum = MAP_CAVE_OF_ORIGIN_1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gCaveOfOrigin_1F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP),
        .mapNum = MAP_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP1,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gCaveOfOrigin_UnusedRubySapphireMap1_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP),
        .mapNum = MAP_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP2,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gCaveOfOrigin_UnusedRubySapphireMap2_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP),
        .mapNum = MAP_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP3,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gCaveOfOrigin_UnusedRubySapphireMap3_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(NEW_MAUVILLE_ENTRANC),
        .mapNum = MAP_NEW_MAUVILLE_ENTRANCE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gNewMauville_Entrance_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_SOUTHWES),
        .mapNum = MAP_SAFARI_ZONE_SOUTHWEST,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSafariZone_Southwest_LandMonsInfo_Day,
                .waterMonsInfo = &gSafariZone_Southwest_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gSafariZone_Southwest_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_NORT),
        .mapNum = MAP_SAFARI_ZONE_NORTH,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSafariZone_North_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = &gSafariZone_North_RockSmashMonsInfo_Day,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_NORTHWES),
        .mapNum = MAP_SAFARI_ZONE_NORTHWEST,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSafariZone_Northwest_LandMonsInfo_Day,
                .waterMonsInfo = &gSafariZone_Northwest_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gSafariZone_Northwest_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(VICTORY_ROAD_B1),
        .mapNum = MAP_VICTORY_ROAD_B1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gVictoryRoad_B1F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = &gVictoryRoad_B1F_RockSmashMonsInfo_Day,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(VICTORY_ROAD_B2),
        .mapNum = MAP_VICTORY_ROAD_B2F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gVictoryRoad_B2F_LandMonsInfo_Day,
                .waterMonsInfo = &gVictoryRoad_B2F_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gVictoryRoad_B2F_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(METEOR_FALLS_1F_1),
        .mapNum = MAP_METEOR_FALLS_1F_1R,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMeteorFalls_1F_1R_LandMonsInfo_Day,
                .waterMonsInfo = &gMeteorFalls_1F_1R_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gMeteorFalls_1F_1R_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(METEOR_FALLS_1F_2),
        .mapNum = MAP_METEOR_FALLS_1F_2R,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMeteorFalls_1F_2R_LandMonsInfo_Day,
                .waterMonsInfo = &gMeteorFalls_1F_2R_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gMeteorFalls_1F_2R_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(METEOR_FALLS_B1F_1),
        .mapNum = MAP_METEOR_FALLS_B1F_1R,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMeteorFalls_B1F_1R_LandMonsInfo_Day,
                .waterMonsInfo = &gMeteorFalls_B1F_1R_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gMeteorFalls_B1F_1R_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SHOAL_CAVE_LOW_TIDE_STAIRS_ROO),
        .mapNum = MAP_SHOAL_CAVE_LOW_TIDE_STAIRS_ROOM,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gShoalCave_LowTideStairsRoom_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SHOAL_CAVE_LOW_TIDE_LOWER_ROO),
        .mapNum = MAP_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gShoalCave_LowTideLowerRoom_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SHOAL_CAVE_LOW_TIDE_INNER_ROO),
        .mapNum = MAP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gShoalCave_LowTideInnerRoom_LandMonsInfo_Day,
                .waterMonsInfo = &gShoalCave_LowTideInnerRoom_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gShoalCave_LowTideInnerRoom_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROO),
        .mapNum = MAP_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gShoalCave_LowTideEntranceRoom_LandMonsInfo_Day,
                .waterMonsInfo = &gShoalCave_LowTideEntranceRoom_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gShoalCave_LowTideEntranceRoom_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(LILYCOVE_CIT),
        .mapNum = MAP_LILYCOVE_CITY,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gLilycoveCity_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gLilycoveCity_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(DEWFORD_TOW),
        .mapNum = MAP_DEWFORD_TOWN,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gDewfordTown_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gDewfordTown_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SLATEPORT_CIT),
        .mapNum = MAP_SLATEPORT_CITY,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gSlateportCity_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gSlateportCity_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MOSSDEEP_CIT),
        .mapNum = MAP_MOSSDEEP_CITY,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gMossdeepCity_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gMossdeepCity_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(PACIFIDLOG_TOW),
        .mapNum = MAP_PACIFIDLOG_TOWN,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gPacifidlogTown_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gPacifidlogTown_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(EVER_GRANDE_CIT),
        .mapNum = MAP_EVER_GRANDE_CITY,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gEverGrandeCity_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gEverGrandeCity_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(PETALBURG_CIT),
        .mapNum = MAP_PETALBURG_CITY,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gPetalburgCity_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gPetalburgCity_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(UNDERWATER_ROUTE12),
        .mapNum = MAP_UNDERWATER_ROUTE124,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gUnderwater_Route124_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SHOAL_CAVE_LOW_TIDE_ICE_ROO),
        .mapNum = MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gShoalCave_LowTideIceRoom_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SKY_PILLAR_1),
        .mapNum = MAP_SKY_PILLAR_1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSkyPillar_1F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SOOTOPOLIS_CIT),
        .mapNum = MAP_SOOTOPOLIS_CITY,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = &gSootopolisCity_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gSootopolisCity_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SKY_PILLAR_3),
        .mapNum = MAP_SKY_PILLAR_3F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSkyPillar_3F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SKY_PILLAR_5),
        .mapNum = MAP_SKY_PILLAR_5F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSkyPillar_5F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_SOUTHEAS),
        .mapNum = MAP_SAFARI_ZONE_SOUTHEAST,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSafariZone_Southeast_LandMonsInfo_Day,
                .waterMonsInfo = &gSafariZone_Southeast_WaterMonsInfo_Day,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = &gSafariZone_Southeast_FishingMonsInfo_Day,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_NORTHEAS),
        .mapNum = MAP_SAFARI_ZONE_NORTHEAST,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gSafariZone_Northeast_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = &gSafariZone_Northeast_RockSmashMonsInfo_Day,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_1),
        .mapNum = MAP_MAGMA_HIDEOUT_1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMagmaHideout_1F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_2F_1),
        .mapNum = MAP_MAGMA_HIDEOUT_2F_1R,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMagmaHideout_2F_1R_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_2F_2),
        .mapNum = MAP_MAGMA_HIDEOUT_2F_2R,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMagmaHideout_2F_2R_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_3F_1),
        .mapNum = MAP_MAGMA_HIDEOUT_3F_1R,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMagmaHideout_3F_1R_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_3F_2),
        .mapNum = MAP_MAGMA_HIDEOUT_3F_2R,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMagmaHideout_3F_2R_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_4),
        .mapNum = MAP_MAGMA_HIDEOUT_4F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMagmaHideout_4F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_3F_3),
        .mapNum = MAP_MAGMA_HIDEOUT_3F_3R,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMagmaHideout_3F_3R_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MAGMA_HIDEOUT_2F_3),
        .mapNum = MAP_MAGMA_HIDEOUT_2F_3R,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMagmaHideout_2F_3R_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MIRAGE_TOWER_1),
        .mapNum = MAP_MIRAGE_TOWER_1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMirageTower_1F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MIRAGE_TOWER_2),
        .mapNum = MAP_MIRAGE_TOWER_2F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMirageTower_2F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MIRAGE_TOWER_3),
        .mapNum = MAP_MIRAGE_TOWER_3F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMirageTower_3F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(MIRAGE_TOWER_4),
        .mapNum = MAP_MIRAGE_TOWER_4F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMirageTower_4F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(DESERT_UNDERPAS),
        .mapNum = MAP_DESERT_UNDERPASS,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gDesertUnderpass_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ARTISAN_CAVE_B1),
        .mapNum = MAP_ARTISAN_CAVE_B1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gArtisanCave_B1F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ARTISAN_CAVE_1),
        .mapNum = MAP_ARTISAN_CAVE_1F,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gArtisanCave_1F_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAV),
        .mapNum = MAP_ALTERING_CAVE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gAlteringCave1_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAV),
        .mapNum = MAP_ALTERING_CAVE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gAlteringCave2_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAV),
        .mapNum = MAP_ALTERING_CAVE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gAlteringCave3_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAV),
        .mapNum = MAP_ALTERING_CAVE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gAlteringCave4_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAV),
        .mapNum = MAP_ALTERING_CAVE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gAlteringCave5_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAV),
        .mapNum = MAP_ALTERING_CAVE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gAlteringCave6_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAV),
        .mapNum = MAP_ALTERING_CAVE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gAlteringCave7_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAV),
        .mapNum = MAP_ALTERING_CAVE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gAlteringCave8_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(ALTERING_CAV),
        .mapNum = MAP_ALTERING_CAVE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gAlteringCave9_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = MAP_GROUP(METEOR_FALLS_STEVENS_CAV),
        .mapNum = MAP_METEOR_FALLS_STEVENS_CAVE,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gMeteorFalls_StevensCave_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
};


const struct WildPokemonHeader gBattlePyramidWildMonHeaders[] =
{
    {
        .mapGroup = gBattlePyramid_1,
        .mapNum = gBattlePyramid_1,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gBattlePyramid_1_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = gBattlePyramid_2,
        .mapNum = gBattlePyramid_2,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gBattlePyramid_2_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = gBattlePyramid_3,
        .mapNum = gBattlePyramid_3,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gBattlePyramid_3_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = gBattlePyramid_4,
        .mapNum = gBattlePyramid_4,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gBattlePyramid_4_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = gBattlePyramid_5,
        .mapNum = gBattlePyramid_5,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gBattlePyramid_5_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = gBattlePyramid_6,
        .mapNum = gBattlePyramid_6,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gBattlePyramid_6_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = gBattlePyramid_7,
        .mapNum = gBattlePyramid_7,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gBattlePyramid_7_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
};


const struct WildPokemonHeader gBattlePikeWildMonHeaders[] =
{
    {
        .mapGroup = gBattlePike_1,
        .mapNum = gBattlePike_1,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gBattlePike_1_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = gBattlePike_2,
        .mapNum = gBattlePike_2,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gBattlePike_2_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = gBattlePike_3,
        .mapNum = gBattlePike_3,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gBattlePike_3_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
    {
        .mapGroup = gBattlePike_4,
        .mapNum = gBattlePike_4,
        .encounterTypes =
        {
            [TIME_MORNING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_DAY] = 
            {
                .landMonsInfo = &gBattlePike_4_LandMonsInfo_Day,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_EVENING] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
            [TIME_NIGHT] = 
            {
                .landMonsInfo = NULL,
                .waterMonsInfo = NULL,
                .rockSmashMonsInfo = NULL,
                .fishingMonsInfo = NULL,
                .hiddenMonsInfo = NULL,
            },
        },
    },
};
