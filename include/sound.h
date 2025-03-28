#ifndef GUARD_SOUND_H
#define GUARD_SOUND_H

#include "constants/sound.h"

void InitMapMusic(void);
void MapMusicMain(void);
void ResetMapMusic(void);
u32 GetCurrentMapMusic(void);
void PlayNewMapMusic(u32 songNum);
void StopMapMusic(void);
void FadeOutMapMusic(u8 speed);
void FadeOutAndPlayNewMapMusic(u32 songNum, u8 speed);
void FadeOutAndFadeInNewMapMusic(u32 songNum, u8 fadeOutSpeed, u8 fadeInSpeed);
bool32 IsNotWaitingForBGMStop(void);
void PlayFanfareByFanfareNum(u8 fanfareNum);
bool32 WaitFanfare(bool32 stop);
void StopFanfareByFanfareNum(u8 fanfareNum);
void PlayFanfare(u32 songNum);
bool32 IsFanfareTaskInactive(void);
void FadeInNewBGM(u32 songNum, u8 speed);
void FadeOutBGMTemporarily(u8 speed);
bool32 IsBGMPausedOrStopped(void);
void FadeInBGM(u8 speed);
void FadeOutBGM(u8 speed);
bool32 IsBGMStopped(void);
void PlayCry_Normal(u32 species, s32 pan);
void PlayCry_NormalNoDucking(u32 species, s32 pan, s32 volume, u8 priority);
void PlayCry_ByMode(u32 species, s32 pan, u8 mode);
void PlayCry_ReleaseDouble(u32 species, s32 pan, u8 mode);
void PlayCry_Script(u32 species, u8 mode);
void PlayCry_DuckNoRestore(u32 species, s32 pan, u8 mode);
void PlayCryInternal(u32 species, s32 pan, s32 volume, u8 priority, u8 mode);
bool32 IsCryFinished(void);
void StopCryAndClearCrySongs(void);
void StopCry(void);
bool32 IsCryPlayingOrClearCrySongs(void);
bool32 IsCryPlaying(void);
void PlayBGM(u32 songNum);
void PlaySE(u32 songNum);
void PlaySE12WithPanning(u32 songNum, s32 pan);
void PlaySE1WithPanning(u32 songNum, s32 pan);
void PlaySE2WithPanning(u32 songNum, s32 pan);
void SE12PanpotControl(s32 pan);
bool32 IsSEPlaying(void);
bool32 IsBGMPlaying(void);
bool32 IsSpecialSEPlaying(void);
void Task_DuckBGMForPokemonCry(u8 taskId);

#endif // GUARD_SOUND_H
