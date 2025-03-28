#ifndef GUARD_ROTATING_GATE_H
#define GUARD_ROTATING_GATE_H

void RotatingGatePuzzleCameraUpdate(s32 deltaX, s32 deltaY);
void RotatingGate_InitPuzzleAndGraphics(void);
bool32 CheckForRotatingGatePuzzleCollision(u8 direction, s32 x, s32 y);
bool32 CheckForRotatingGatePuzzleCollisionWithoutAnimation(u8 direction, s32 x, s32 y);

#endif // GUARD_ROTATING_GATE_H
