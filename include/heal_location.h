#ifndef GUARD_HEAL_LOCATION_H
#define GUARD_HEAL_LOCATION_H

struct HealLocation
{
    s32 group;
    s32 map;
    u32 x;
    u32 y;
};

u32 GetHealLocationIndexByMap(u32 mapGroup, u32 mapNum);
u32 GetHealLocationIndexByWarpData(struct WarpData *warp);
const struct HealLocation *GetHealLocationByMap(u32 mapGroup, u32 mapNum);
const struct HealLocation *GetHealLocation(u32 index);
bool32 IsLastHealLocationPlayerHouse();
void SetWhiteoutRespawnWarpAndHealerNPC(struct WarpData * warp);
u32 GetHealNpcLocalId(u32 healLocationId);

#endif // GUARD_HEAL_LOCATION_H
