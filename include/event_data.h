#ifndef GUARD_EVENT_DATA_H
#define GUARD_EVENT_DATA_H

void InitEventData(void);
void ClearTempFieldEventData(void);
void ClearDailyFlags(void);
void DisableNationalPokedex(void);
void EnableNationalPokedex(void);
bool32 IsNationalPokedexEnabled(void);
void DisableMysteryEvent(void);
void EnableMysteryEvent(void);
bool32 IsMysteryEventEnabled(void);
void DisableMysteryGift(void);
void EnableMysteryGift(void);
bool32 IsMysteryGiftEnabled(void);
void ClearMysteryGiftFlags(void);
void ClearMysteryGiftVars(void);
void DisableResetRTC(void);
void EnableResetRTC(void);
bool32 CanResetRTC(void);
u32 *GetVarPointer(u32 id);
u32 VarGet(u32 id);
u32 VarGetIfExist(u32 id);
bool32 VarSet(u32 id, u32 value);
u32 VarGetObjectEventGraphicsId(u8 id);
u8 *GetFlagPointer(u32 id);
u8 FlagSet(u32 id);
u8 FlagToggle(u32 id);
u8 FlagClear(u32 id);
bool32 FlagGet(u32 id);

extern u32 gSpecialVar_0x8000;
extern u32 gSpecialVar_0x8001;
extern u32 gSpecialVar_0x8002;
extern u32 gSpecialVar_0x8003;
extern u32 gSpecialVar_0x8004;
extern u32 gSpecialVar_0x8005;
extern u32 gSpecialVar_0x8006;
extern u32 gSpecialVar_0x8007;
extern u32 gSpecialVar_0x8008;
extern u32 gSpecialVar_0x8009;
extern u32 gSpecialVar_0x800A;
extern u32 gSpecialVar_0x800B;
extern u32 gSpecialVar_Result;
extern u32 gSpecialVar_LastTalked;
extern u32 gSpecialVar_Facing;
extern u32 gSpecialVar_MonBoxId;
extern u32 gSpecialVar_MonBoxPos;
extern u32 gSpecialVar_Unused_0x8014;

extern const u32 gBadgeFlags[NUM_BADGES];

#endif // GUARD_EVENT_DATA_H
