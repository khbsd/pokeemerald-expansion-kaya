#ifndef GUARD_CONFETTI_UTIL_H
#define GUARD_CONFETTI_UTIL_H

struct ConfettiUtil
{
    struct OamData oam;
    s32 x;
    s32 y;
    s32 xDelta;
    s32 yDelta;
    u32 tileTag;
    u32 palTag;
    u32 tileNum;
    u8 id;
    u8 filler;
    u8 animNum;
    u8 active:1;
    u8 allowUpdates:1;
    u8 dummied:1;
    u8 priority:2;
    s32 data[8];
    void (*callback)(struct ConfettiUtil *);
};

bool32 ConfettiUtil_Init(u8 count);
bool32 ConfettiUtil_Free(void);
bool32 ConfettiUtil_Update(void);
u8 ConfettiUtil_SetCallback(u8 id, void (*func)(struct ConfettiUtil *));
u8 ConfettiUtil_SetData(u8 id, u8 dataArrayId, s32 dataValue);
u8 ConfettiUtil_AddNew(const struct OamData *oam, u32 tileTag, u32 palTag, s32 x, s32 y, u8 animNum, u8 priority);
u8 ConfettiUtil_Remove(u8 id);

#endif // GUARD_CONFETTI_UTIL_H
