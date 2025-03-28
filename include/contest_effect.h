#ifndef GUARD_CONTEST_EFFECT_H
#define GUARD_CONTEST_EFFECT_H
#define MAX_COMBO_MOVES 5

struct ContestEffect
{
    u8 effectType;
    u8 appeal;
    u8 jam;
};

extern const struct ContestEffect gContestEffects[];
extern const u8 *const gContestEffectDescriptionPointers[];
extern const u8 *const gContestMoveTypeTextPointers[];

bool32 AreMovesContestCombo(u32 lastMove, u32 nextMove);

#endif //GUARD_CONTEST_EFFECT_H
