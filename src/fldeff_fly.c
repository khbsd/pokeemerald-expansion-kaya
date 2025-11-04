#include "global.h"
#include "event_object_lock.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "faraway_island.h"
#include "field_camera.h"
#include "field_effect.h"
#include "field_control_avatar.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_specials.h"
#include "fldeff_misc.h"
#include "fieldmap.h"
#include "fldeff.h"
#include "heal_location.h"
#include "malloc.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "party_menu.h"
#include "region_map.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "trig.h"
#include "constants/abilities.h"
#include "constants/event_objects.h"
#include "constants/field_effects.h"
#include "constants/field_specials.h"
#include "constants/heal_locations.h"
#include "constants/map_types.h"
#include "constants/metatile_labels.h"
#include "constants/region_map_sections.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/weather.h"

u32 FilterFlyDestination(struct RegionMap *regionMap)
{
    switch (regionMap->mapSecId)
    {
    case MAPSEC_SOUTHERN_ISLAND:
        return HEAL_LOCATION_SOUTHERN_ISLAND_EXTERIOR;
    case MAPSEC_BATTLE_FRONTIER:
        return HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST;
    case MAPSEC_LITTLEROOT_TOWN:
        return (gSaveBlock2Ptr->playerGender == BUTCHY ? HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE : HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE);
    case MAPSEC_EVER_GRANDE_CITY:
        return (FlagGet(FLAG_LANDMARK_POKEMON_LEAGUE) && regionMap->posWithinMapSec == 0 ? HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE : HEAL_LOCATION_EVER_GRANDE_CITY);
    default:
        if (sMapHealLocations[regionMap->mapSecId][2] != HEAL_LOCATION_NONE)
            return sMapHealLocations[regionMap->mapSecId][2];
        else
            return WARP_ID_NONE;
    }
}

void SetFlyDestination(struct RegionMap *regionMap)
{
    u8 flyDestination = FilterFlyDestination(regionMap);
    if (flyDestination != WARP_ID_NONE)
        SetWarpDestinationToHealLocation(flyDestination);
    else
        SetWarpDestinationToMapWarp(sMapHealLocations[regionMap->mapSecId][0], sMapHealLocations[regionMap->mapSecId][1], WARP_ID_NONE);
}