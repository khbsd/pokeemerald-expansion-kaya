#ifndef GUARD_SOUND_H
#define GUARD_SOUND_H

#include "constants/sound.h"

void InitMapMusic(void);
void MapMusicMain(void);
void ResetMapMusic(void);
u16 GetCurrentMapMusic(void);
void PlayNewMapMusic(u32 songNum);
void StopMapMusic(void);
void FadeOutMapMusic(u8 speed);
void FadeOutAndPlayNewMapMusic(u32 songNum, u8 speed);
void FadeOutAndFadeInNewMapMusic(u32 songNum, u8 fadeOutSpeed, u8 fadeInSpeed);
bool8 IsNotWaitingForBGMStop(void);
void PlayFanfareByFanfareNum(u8 fanfareNum);
bool8 WaitFanfare(bool8 stop);
void StopFanfareByFanfareNum(u8 fanfareNum);
void PlayFanfare(u32 songNum);
bool8 IsFanfareTaskInactive(void);
void FadeInNewBGM(u32 songNum, u8 speed);
void FadeOutBGMTemporarily(u8 speed);
bool8 IsBGMPausedOrStopped(void);
void FadeInBGM(u8 speed);
void FadeOutBGM(u8 speed);
bool8 IsBGMStopped(void);
void PlayCry_Normal(enum Species species, s8 pan);
void PlayCry_NormalNoDucking(enum Species species, s8 pan, s8 volume, u8 priority);
void PlayCry_ByMode(enum Species species, s8 pan, u8 mode);
void PlayCry_ReleaseDouble(enum Species species, s8 pan, u8 mode);
void PlayCry_Script(enum Species species, u8 mode);
void PlayCry_DuckNoRestore(enum Species species, s8 pan, u8 mode);
void PlayCryInternal(enum Species species, s8 pan, s8 volume, u8 priority, u8 mode);
bool8 IsCryFinished(void);
void StopCryAndClearCrySongs(void);
void StopCry(void);
bool8 IsCryPlayingOrClearCrySongs(void);
bool8 IsCryPlaying(void);
void PlayBGM(u32 songNum);
void PlaySE(u32 songNum);
void PlaySE12WithPanning(u32 songNum, s8 pan);
void PlaySE1WithPanning(u32 songNum, s8 pan);
void PlaySE2WithPanning(u32 songNum, s8 pan);
void SE12PanpotControl(s8 pan);
bool8 IsSEPlaying(void);
bool8 IsBGMPlaying(void);
bool8 IsSpecialSEPlaying(void);
void Task_DuckBGMForPokemonCry(u8 taskId);
u32 GetRandomAlternateSong(u32 songNum);

extern u8 isGen4BGM;
extern u8 isGen1BGM;

#endif // GUARD_SOUND_H
