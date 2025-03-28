#ifndef GUARD_NEW_GAME_H
#define GUARD_NEW_GAME_H

extern bool32 gDifferentSaveFile;
// Shortcuts some randomness in berry_blender.c, and enables debug printing
// in contest.c.
extern bool32 gEnableContestDebugging;

void SetTrainerId(u32 trainerId, u8 *dst);
u32 GetTrainerId(u8 *trainerId);
void CopyTrainerId(u8 *dst, u8 *src);
void NewGameInitData(void);
void ResetMenuAndMonGlobals(void);
void Sav2_ClearSetDefault(void);

#endif // GUARD_NEW_GAME_H
