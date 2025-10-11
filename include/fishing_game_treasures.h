#ifndef GUARD_FISHING_GAME_TREASURES_H
#define GUARD_FISHING_GAME_TREASURES_H

#include "fishing_game.h"
#include "item.h"
#include "constants/items.h"

#define TREASURE_ITEM_ARRAY_SIZE 30

static const u32 sTreasureArrays[][TREASURE_ITEM_ARRAY_SIZE] =
{
    { // Morning
        // Common
        ITEM_LEEK,
        ITEM_LEEK,
        ITEM_LIGHT_BALL,
        ITEM_LIGHT_CLAY,
        ITEM_METAL_POWDER,
        ITEM_QUICK_POWDER,
        ITEM_THICK_CLUB,
        ITEM_POKE_DOLL,
        ITEM_LINKING_CORD,
        ITEM_PRISM_SCALE,

        // Uncommon
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_SOFT_SAND,
        ITEM_SHARP_BEAK,
        ITEM_NEVER_MELT_ICE,
        ITEM_SILVER_POWDER,
        ITEM_PEAT_BLOCK,
        ITEM_MAGNET,

        // Rare
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_HEART_SCALE,
        ITEM_METAL_ALLOY,
        ITEM_GALARICA_CUFF,
        ITEM_GALARICA_TWIG,
        ITEM_EVERSTONE,
        ITEM_EVIOLITE,
    },
    { // Day
        // Common
        ITEM_POKE_BALL,
        ITEM_POKE_BALL,
        ITEM_GREAT_BALL,
        ITEM_NUGGET,
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_LINKING_CORD,
        ITEM_PRISM_SCALE,

        // Uncommon
        ITEM_BLACK_BELT,
        ITEM_BLACK_GLASSES,
        ITEM_BLACK_SLUDGE,
        ITEM_SPELL_TAG,
        ITEM_SOFT_SAND,
        ITEM_SHARP_BEAK,
        ITEM_NEVER_MELT_ICE,
        ITEM_SILVER_POWDER,
        ITEM_PEAT_BLOCK,
        ITEM_MAGNET,

        // Rare
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_HEART_SCALE,
        ITEM_METAL_ALLOY,
        ITEM_GALARICA_CUFF,
        ITEM_GALARICA_TWIG,
        ITEM_GALARICA_WREATH,
        ITEM_BLACK_AUGURITE,
    },
    { // Evening
        // Common
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_ICY_ROCK,
        ITEM_SACHET,
        ITEM_FAIRY_FEATHER,
        ITEM_LUCKY_PUNCH,
        ITEM_WHIPPED_DREAM,
        ITEM_RAZOR_FANG,

        // Uncommon
        ITEM_TART_APPLE,
        ITEM_SWEET_APPLE,
        ITEM_SYRUPY_APPLE,
        ITEM_DRAGON_SCALE,
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_NUGGET,
        ITEM_STARDUST,
        ITEM_AUSPICIOUS_ARMOR,
        ITEM_MALICIOUS_ARMOR,

        // Rare
        ITEM_YELLOW_SHARD,
        ITEM_BLUE_SHARD,
        ITEM_GREEN_SHARD,
        ITEM_RED_SHARD,
        ITEM_UPGRADE,
        ITEM_POWER_LENS,
        ITEM_POWER_BRACER,
        ITEM_PRISM_SCALE,
        ITEM_SCROLL_OF_DARKNESS,
        ITEM_SCROLL_OF_WATERS,
    },
    { // Night
        // Common
        ITEM_MIRACLE_SEED,
        ITEM_CHARCOAL,
        ITEM_HARD_STONE,
        ITEM_YELLOW_SCARF,
        ITEM_ICY_ROCK,
        ITEM_SACHET,
        ITEM_FAIRY_FEATHER,
        ITEM_LUCKY_PUNCH,
        ITEM_RAZOR_CLAW,
        ITEM_RAZOR_FANG,

        // Uncommon
        ITEM_REAPER_CLOTH,
        ITEM_KINGS_ROCK,
        ITEM_DRAGON_FANG,
        ITEM_DRAGON_SCALE,
        ITEM_METAL_COAT,
        ITEM_POISON_BARB,
        ITEM_SWIFT_FEATHER,
        ITEM_TWISTED_SPOON,
        ITEM_SHELL_BELL,
        ITEM_OVAL_STONE,

        // Rare
        ITEM_PROTECTOR,
        ITEM_ELECTIRIZER,
        ITEM_MAGMARIZER,
        ITEM_DUBIOUS_DISC,
        ITEM_UPGRADE,
        ITEM_POWER_LENS,
        ITEM_POWER_BRACER,
        ITEM_PRISM_SCALE,
        ITEM_DEEP_SEA_TOOTH,
        ITEM_DEEP_SEA_SCALE,
    }
};

#endif // GUARD_FISHING_GAME_TREASURES_H
