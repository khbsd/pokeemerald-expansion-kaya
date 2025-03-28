#ifndef GUARD_VS_SEEKER_H
#define GUARD_VS_SEEKER_H

#include "global.h"

void Task_InitVsSeekerAndCheckForTrainersOnScreen(u8 taskId);
bool32 UpdateVsSeekerStepCounter(void);
void MapResetTrainerRematches(u32 mapGroup, u32 mapNum);
void ClearRematchMovementByTrainerId(void);
u32 GetRematchTrainerIdVSSeeker(u32 trainerId);
bool32 IsVsSeekerEnabled(void);

#define VSSEEKER_RECHARGE_STEPS 100

#endif //GUARD_VS_SEEKER_H
