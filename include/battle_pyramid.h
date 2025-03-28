#ifndef GUARD_BATTLE_PYRAMID_H
#define GUARD_BATTLE_PYRAMID_H

void CallBattlePyramidFunction(void);
u32 LocalIdToPyramidTrainerId(u8 localId);
bool32 GetBattlePyramidTrainerFlag(u8 eventId);
void MarkApproachingPyramidTrainersAsBattled(void);
void GenerateBattlePyramidWildMon(void);
u8 GetPyramidRunMultiplier(void);
u8 InBattlePyramid(void);
bool32 InBattlePyramid_(void);
void PausePyramidChallenge(void);
void SoftResetInBattlePyramid(void);
void CopyPyramidTrainerSpeechBefore(u32 trainerId);
void CopyPyramidTrainerWinSpeech(u32 trainerId);
void CopyPyramidTrainerLoseSpeech(u32 trainerId);
u8 GetTrainerEncounterMusicIdInBattlePyramid(u32 trainerId);
void GenerateBattlePyramidFloorLayout(u32 *mapArg, bool32 setPlayerPosition);
void LoadBattlePyramidObjectEventTemplates(void);
void LoadBattlePyramidFloorObjectEventScripts(void);
u8 GetNumBattlePyramidObjectEvents(void);
u32 GetBattlePyramidPickupItemId(void);

#endif // GUARD_BATTLE_PYRAMID_H
