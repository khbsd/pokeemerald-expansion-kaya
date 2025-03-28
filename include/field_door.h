#ifndef GUARD_FIELD_DOOR_H
#define GUARD_FIELD_DOOR_H

void FieldSetDoorOpened(u32, u32);
void FieldSetDoorClosed(u32, u32);
s32 FieldAnimateDoorClose(u32, u32);
s32 FieldAnimateDoorOpen(u32, u32);
bool32 FieldIsDoorAnimationRunning(void);
u32 GetDoorSoundEffect(u32 x, u32 y);

#endif //GUARD_FIELD_DOOR_H
