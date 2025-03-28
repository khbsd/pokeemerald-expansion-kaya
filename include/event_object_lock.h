#ifndef GUARD_EVENT_OBJECT_LOCK_H
#define GUARD_EVENT_OBJECT_LOCK_H

bool32 IsFreezePlayerFinished(void);
bool32 IsFreezeSelectedObjectAndPlayerFinished(void);
void FreezeObjects_WaitForPlayer(void);
void FreezeObjects_WaitForPlayerAndSelected(void);
void FreezeForApproachingTrainers(void);
bool32 IsFreezeObjectAndPlayerFinished(void);
void ScriptUnfreezeObjectEvents(void);
void UnionRoom_UnlockPlayerAndChatPartner(void);

#endif // GUARD_EVENT_OBJECT_LOCK_H
