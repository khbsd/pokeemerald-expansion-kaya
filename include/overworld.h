#ifndef GUARD_OVERWORLD_H
#define GUARD_OVERWORLD_H

#define LINK_KEY_CODE_NULL 0x00
#define LINK_KEY_CODE_EMPTY 0x11
#define LINK_KEY_CODE_DPAD_DOWN 0x12
#define LINK_KEY_CODE_DPAD_UP 0x13
#define LINK_KEY_CODE_DPAD_LEFT 0x14
#define LINK_KEY_CODE_DPAD_RIGHT 0x15
#define LINK_KEY_CODE_READY 0x16
#define LINK_KEY_CODE_EXIT_ROOM 0x17
#define LINK_KEY_CODE_START_BUTTON 0x18
#define LINK_KEY_CODE_A_BUTTON 0x19
#define LINK_KEY_CODE_IDLE 0x1A

// These two are a hack to stop user input until link stuff can be
// resolved.
#define LINK_KEY_CODE_HANDLE_RECV_QUEUE 0x1B
#define LINK_KEY_CODE_HANDLE_SEND_QUEUE 0x1C
#define LINK_KEY_CODE_EXIT_SEAT 0x1D
#define LINK_KEY_CODE_UNK_8 0x1E

#define MOVEMENT_MODE_FREE 0
#define MOVEMENT_MODE_FROZEN 1
#define MOVEMENT_MODE_SCRIPTED 2

#define SKIP_OBJECT_EVENT_LOAD  1

struct InitialPlayerAvatarState
{
    u8 transitionFlags;
    u8 direction;
};

struct LinkPlayerObjectEvent
{
    u8 active;
    u8 linkPlayerId;
    u8 objEventId;
    u8 movementMode;
};

extern struct WarpData gLastUsedWarp;
extern struct LinkPlayerObjectEvent gLinkPlayerObjectEvents[4];

extern u32 *gOverworldTilemapBuffer_Bg2;
extern u32 *gOverworldTilemapBuffer_Bg1;
extern u32 *gOverworldTilemapBuffer_Bg3;
extern u32 gHeldKeyCodeToSend;
extern void (*gFieldCallback)(void);
extern bool32 (*gFieldCallback2)(void);
extern u8 gLocalLinkPlayerId;
extern u8 gFieldLinkPlayerCount;
extern bool32 gExitStairsMovementDisabled;
extern bool32 gSkipShowMonAnim;

extern const struct UCoords32 gDirectionToVectors[];

void DoWhiteOut(void);
void Overworld_ResetStateAfterFly(void);
void Overworld_ResetStateAfterTeleport(void);
void Overworld_ResetStateAfterDigEscRope(void);
void ResetGameStats(void);
void IncrementGameStat(u8 index);
u32 GetGameStat(u8 index);
void SetGameStat(u8 index, u32 value);
void ApplyNewEncryptionKeyToGameStats(u32 newKey);
void LoadObjEventTemplatesFromHeader(void);
void LoadSaveblockObjEventScripts(void);
void SetObjEventTemplateCoords(u8 localId, s16 x, s16 y);
void SetObjEventTemplateMovementType(u8 localId, u8 movementType);
const struct MapLayout *GetMapLayout(u32 mapLayoutId);
void ApplyCurrentWarp(void);
struct MapHeader const *const Overworld_GetMapHeaderByGroupAndId(u32 mapGroup, u32 mapNum);
struct MapHeader const *const GetDestinationWarpMapHeader(void);
void WarpIntoMap(void);
void SetWarpDestination(s32 mapGroup, s32 mapNum, s32 warpId, s32 x, s32 y);
void SetWarpDestinationToMapWarp(s32 mapGroup, s32 mapNum, s32 warpId);
void SetDynamicWarp(s32 unused, s32 mapGroup, s32 mapNum, s32 warpId);
void SetDynamicWarpWithCoords(s32 unused, s32 mapGroup, s32 mapNum, s32 warpId, s32 x, s32 y);
void SetWarpDestinationToDynamicWarp(u8 unused);
void SetWarpDestinationToHealLocation(u8 healLocationId);
void SetWarpDestinationToLastHealLocation(void);
void SetLastHealLocationWarp(u8 healLocationId);
void UpdateEscapeWarp(s16 x, s16 y);
void SetEscapeWarp(s32 mapGroup, s32 mapNum, s32 warpId, s32 x, s32 y);
void SetWarpDestinationToEscapeWarp(void);
void SetFixedDiveWarp(s32 mapGroup, s32 mapNum, s32 warpId, s32 x, s32 y);
void SetFixedHoleWarp(s32 mapGroup, s32 mapNum, s32 warpId, s32 x, s32 y);
void SetWarpDestinationToFixedHoleWarp(s16 x, s16 y);
void SetContinueGameWarpToHealLocation(u8 healLocationId);
void SetContinueGameWarpToDynamicWarp(int unused);
const struct MapConnection *GetMapConnection(u8 dir);
bool32 SetDiveWarpEmerge(u32 x, u32 y);
bool32 SetDiveWarpDive(u32 x, u32 y);
void LoadMapFromCameraTransition(u8 mapGroup, u8 mapNum);
void ResetInitialPlayerAvatarState(void);
void StoreInitialPlayerAvatarState(void);
bool32 Overworld_IsBikingAllowed(void);
void SetDefaultFlashLevel(void);
void SetFlashLevel(s32 flashLevel);
u8 GetFlashLevel(void);
void SetCurrentMapLayout(u32 mapLayoutId);
void SetObjectEventLoadFlag(u8 var);
u32 GetLocationMusic(struct WarpData *warp);
u32 GetCurrLocationDefaultMusic(void);
u32 GetWarpDestinationMusic(void);
void Overworld_ResetMapMusic(void);
void Overworld_PlaySpecialMapMusic(void);
void Overworld_SetSavedMusic(u32 songNum);
void Overworld_ClearSavedMusic(void);
void Overworld_ChangeMusicToDefault(void);
void Overworld_ChangeMusicTo(u32 newMusic);
u8 GetMapMusicFadeoutSpeed(void);
void TryFadeOutOldMapMusic(void);
bool32 BGMusicStopped(void);
void Overworld_FadeOutMapMusic(void);
void UpdateAmbientCry(s16 *state, u32 *delayCounter);
u8 GetMapTypeByGroupAndId(s32 mapGroup, s32 mapNum);
u8 GetMapTypeByWarpData(struct WarpData *warp);
u8 GetCurrentMapType(void);
u8 GetLastUsedWarpMapType(void);
bool32 IsMapTypeOutdoors(u8 mapType);
bool32 Overworld_MapTypeAllowsTeleportAndFly(u8 mapType);
bool32 IsMapTypeIndoors(u8 mapType);
u8 GetSavedWarpRegionMapSectionId(void);
u8 GetCurrentRegionMapSectionId(void);
u8 GetCurrentMapBattleScene(void);
void CleanupOverworldWindowsAndTilemaps(void);
bool32 IsOverworldLinkActive(void);
void CB1_Overworld(void);
void CB2_OverworldBasic(void);
void CB2_Overworld(void);
void SetMainCallback1(void (*cb)(void));
void SetUnusedCallback(void *func);
void CB2_NewGame(void);
void CB2_WhiteOut(void);
void CB2_LoadMap(void);
void CB2_ReturnToFieldContestHall(void);
void CB2_ReturnToFieldCableClub(void);
void CB2_ReturnToField(void);
void CB2_ReturnToFieldFromMultiplayer(void);
void CB2_ReturnToFieldWithOpenMenu(void);
void CB2_ReturnToFieldContinueScript(void);
void CB2_ReturnToFieldContinueScriptPlayMapMusic(void);
void CB2_ReturnToFieldFadeFromBlack(void);
void CB2_ContinueSavedGame(void);
void ResetAllMultiplayerState(void);
u32 GetCableClubPartnersReady(void);
u32 SetInCableClubSeat(void);
u32 SetLinkWaitingForScript(void);
u32 QueueExitLinkRoomKey(void);
u32 SetStartedCableClubActivity(void);
bool32 Overworld_IsRecvQueueAtMax(void);
bool32 Overworld_RecvKeysFromLinkIsRunning(void);
bool32 Overworld_SendKeysToLinkIsRunning(void);
bool32 IsSendingKeysOverCable(void);
void ClearLinkPlayerObjectEvents(void);

// Item Description Headers
enum ItemObtainFlags
{
    FLAG_GET_ITEM_OBTAINED,
    FLAG_SET_ITEM_OBTAINED,
};
bool32 GetSetItemObtained(u32 item, enum ItemObtainFlags caseId);

#endif // GUARD_OVERWORLD_H
