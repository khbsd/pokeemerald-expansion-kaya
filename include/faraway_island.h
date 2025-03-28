#ifndef GUARD_FARAWAY_ISLAND_H
#define GUARD_FARAWAY_ISLAND_H

u32 GetMewMoveDirection(void);
bool32 ShouldMewShakeGrass(struct ObjectEvent *);
void UpdateFarawayIslandStepCounter(void);
bool32 ObjectEventIsFarawayIslandMew(struct ObjectEvent *);
bool32 IsMewPlayingHideAndSeek(void);

#endif // GUARD_FARAWAY_ISLAND_H
