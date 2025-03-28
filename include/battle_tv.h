#ifndef GUARD_BATTLE_TV_H
#define GUARD_BATTLE_TV_H

void BattleTv_SetDataBasedOnString(u32 stringId);
void BattleTv_SetDataBasedOnMove(u32 move, u32 weatherFlags, struct DisableStruct *disableStructPtr);
void BattleTv_SetDataBasedOnAnimation(u8 animationId);
void TryPutLinkBattleTvShowOnAir(void);
void BattleTv_ClearExplosionFaintCause(void);
u8 GetBattlerMoveSlotId(u8 battlerId, u32 moveId);

#endif // GUARD_BATTLE_TV_H
