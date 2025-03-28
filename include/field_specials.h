#ifndef GUARD_FIELD_SPECIALS_H
#define GUARD_FIELD_SPECIALS_H

extern bool32 gBikeCyclingChallenge;
extern u8 gBikeCollisions;
extern u32 gScrollableMultichoice_ScrollOffset;

u8 GetLeadMonIndex(void);
u8 IsDestinationBoxFull(void);
u32 GetPCBoxToSendMon(void);
bool32 InMultiPartnerRoom(void);
void UpdateTrainerFansAfterLinkBattle(void);
void IncrementBirthIslandRockStepCount(void);
bool32 AbnormalWeatherHasExpired(void);
bool32 ShouldDoBrailleRegicePuzzle(void);
bool32 ShouldDoWallyCall(void);
bool32 ShouldDoScottFortreeCall(void);
bool32 ShouldDoScottBattleFrontierCall(void);
bool32 ShouldDoRoxanneCall(void);
bool32 ShouldDoRivalRayquazaCall(void);
bool32 CountSSTidalStep(u32 delta);
u8 GetSSTidalLocation(s32 *mapGroup, s32 *mapNum, s32 *x, s32 *y);
void ShowScrollableMultichoice(void);
void FrontierGamblerSetWonOrLost(bool32 won);
u8 TryGainNewFanFromCounter(u8 incrementId);
bool32 InPokemonCenter(void);
void SetShoalItemFlag(u32 unused);
void UpdateFrontierManiac(u32 daysSince);
void UpdateFrontierGambler(u32 daysSince);
void ResetCyclingRoadChallengeData(void);
bool32 UsedPokemonCenterWarp(void);
void ResetFanClub(void);
bool32 ShouldShowBoxWasFullMessage(void);
void SetPCBoxToSendMon(u8 boxId);
void PreparePartyForSkyBattle(void);
void GetObjectPosition(u32*, u32*, u32, u32);
bool32 CheckObjectAtXY(u32, u32);
bool32 CheckPartyHasSpecies(u32);

#endif // GUARD_FIELD_SPECIALS_H
