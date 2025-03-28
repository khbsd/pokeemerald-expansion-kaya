#ifndef GUARD_TRIG_H
#define GUARD_TRIG_H

extern const s32 gSineTable[];

s32 Sin(s32 index, s32 amplitude);
s32 Cos(s32 index, s32 amplitude);
s32 Sin2(u32 angle);
s32 Cos2(u32 angle);

#endif // GUARD_TRIG_H
