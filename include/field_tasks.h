#ifndef GUARD_FIELD_TASKS_H
#define GUARD_FIELD_TASKS_H

void CheckIfPlayerIsKaya(void);
void CheckPlayerName(u8 *str);
void SetPlayerAsKaya(void);
void UnsetPlayerAsKaya(void);
bool32 GetPlayerHouse(void);
void SetPlayerHouse(void);
void SetUpFieldTasks(void);
void ActivatePerStepCallback(u8 callbackId);
void ResetFieldTasksArgs(void);
void SetSootopolisGymCrackedIceMetatiles(void);

#endif // GUARD_FIELD_TASKS_H
