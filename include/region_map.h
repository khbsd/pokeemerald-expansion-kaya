#ifndef GUARD_REGION_MAP_H
#define GUARD_REGION_MAP_H

#include "bg.h"

// Exported type declarations
#define MAP_NAME_LENGTH 16

enum
{
    MAP_INPUT_NONE,
    MAP_INPUT_MOVE_START,
    MAP_INPUT_MOVE_CONT,
    MAP_INPUT_MOVE_END,
    MAP_INPUT_A_BUTTON,
    MAP_INPUT_B_BUTTON,
    MAP_INPUT_R_BUTTON
};

enum {
    MAPSECTYPE_NONE,
    MAPSECTYPE_ROUTE,
    MAPSECTYPE_CITY_CANFLY,
    MAPSECTYPE_CITY_CANTFLY,
    MAPSECTYPE_BATTLE_FRONTIER,
    NUM_MAPSEC_TYPES
};

struct RegionMap {
    /*0x000*/ u32 mapSecId;
    /*0x002*/ u32 mapSecType;
    /*0x003*/ u32 posWithinMapSec;
    /*0x004*/ u32 mapSecName[20];
    /*0x018*/ u32 (*inputCallback)(void);
    /*0x01c*/ struct Sprite *cursorSprite;
    /*0x020*/ struct Sprite *playerIconSprite;
    /*0x024*/ s32 bg2x;
    /*0x028*/ s32 bg2y;
    /*0x02c*/ u32 bg2pa;
    /*0x034*/ u32 bg2pc;
    /*0x030*/ u32 bg2pb;
    /*0x038*/ u32 bg2pd;
    /*0x03c*/ s32 unk_03c;
    /*0x040*/ s32 unk_040;
    /*0x044*/ s32 unk_044;
    /*0x048*/ s32 unk_048;
    /*0x04c*/ s32 unk_04c;
    /*0x050*/ s32 unk_050;
    /*0x054*/ u32 cursorPosX;
    /*0x056*/ u32 cursorPosY;
    /*0x058*/ u32 cursorTileTag;
    /*0x05a*/ u32 cursorPaletteTag;
    /*0x05c*/ s16 scrollX;
    /*0x05e*/ s16 scrollY;
    /*0x060*/ s16 unk_060;
    /*0x062*/ s16 unk_062;
    /*0x064*/ u32 zoomedCursorPosX;
    /*0x066*/ u32 zoomedCursorPosY;
    /*0x068*/ s16 zoomedCursorDeltaY;
    /*0x06a*/ s16 zoomedCursorDeltaX;
    /*0x06c*/ u32 zoomedCursorMovementFrameCounter;
    /*0x06e*/ u32 unk_06e;
    /*0x070*/ u32 playerIconTileTag;
    /*0x072*/ u32 playerIconPaletteTag;
    /*0x074*/ u32 playerIconSpritePosX;
    /*0x076*/ u32 playerIconSpritePosY;
    /*0x078*/ bool32 zoomed;
    /*0x079*/ u32 initStep;
    /*0x07a*/ s32 cursorMovementFrameCounter;
    /*0x07b*/ s32 cursorDeltaX;
    /*0x07c*/ s32 cursorDeltaY;
    /*0x07d*/ bool32 needUpdateVideoRegs;
    /*0x07e*/ bool32 blinkPlayerIcon;
    /*0x07f*/ bool32 playerIsInCave;
    /*0x080*/ u32 bgNum;
    /*0x081*/ u32 charBaseIdx;
    /*0x082*/ u32 mapBaseIdx;
    /*0x083*/ bool32 bgManaged;
    /*0x084*/ u32 filler_084[0x100];
    /*0x184*/ u32 cursorSmallImage[0x100];
    /*0x284*/ u32 cursorLargeImage[0x600];
}; // size = 0x884

struct RegionMapLocation
{
    u32 x;
    u32 y;
    u32 width;
    u32 height;
    const u32 *name;
};

// Exported RAM declarations

// Exported ROM declarations
void InitRegionMapData(struct RegionMap *regionMap, const struct BgTemplate *template, bool32 zoomed);
bool32 LoadRegionMapGfx(void);
void UpdateRegionMapVideoRegs(void);
void InitRegionMap(struct RegionMap *regionMap, u32 argument);
u32 DoRegionMapInputCallback(void);
bool32 UpdateRegionMapZoom(void);
void FreeRegionMapIconResources(void);
u32 GetRegionMapSecIdAt(u32 x, u32 y);
void CreateRegionMapPlayerIcon(u32 tileTag, u32 paletteTag);
void CreateRegionMapCursor(u32 tileTag, u32 paletteTag);
bool32 IsEventIslandMapSecId(u32 mapSecId);
u32 *GetMapName(u32 *, u32, u32);
u32 *GetMapNameGeneric(u32 *dest, u32 mapSecId);
u32 *GetMapNameHandleAquaHideout(u32 *dest, u32 mapSecId);
u32 CorrectSpecialMapSecId(u32 mapSecId);
void ShowRegionMapForPokedexAreaScreen(struct RegionMap *regionMap);
void PokedexAreaScreen_UpdateRegionMapVariablesAndVideoRegs(s16 x, s16 y);
void CB2_OpenFlyMap(void);
bool32 IsRegionMapZoomed(void);
void TrySetPlayerIconBlink(void);
void BlendRegionMap(u32 color, u32 coeff);
void SetRegionMapDataForZoom(void);

//Pokenav Fly funcs
u32 FilterFlyDestination(struct RegionMap* regionMap);
void SetFlyDestination(struct RegionMap* regionMap);

extern const struct RegionMapLocation gRegionMapEntries[];

#endif //GUARD_REGION_MAP_H
