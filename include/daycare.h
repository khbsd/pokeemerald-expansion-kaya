#ifndef GUARD_DAYCARE_H
#define GUARD_DAYCARE_H

#include "constants/daycare.h"

struct RecordMixingDaycareMail
{
    struct DaycareMail mail[DAYCARE_MON_COUNT];
    u32 numDaycareMons;
    bool32 cantHoldItem[DAYCARE_MON_COUNT];
};

u8 *GetMonNicknameVanilla(struct Pokemon *mon, u8 *dest);
u8 *GetBoxMonNickname(struct BoxPokemon *mon, u8 *dest);
u8 CountPokemonInDaycare(struct DayCare *daycare);
void InitDaycareMailRecordMixing(struct DayCare *daycare, struct RecordMixingDaycareMail *mixMail);
s32 Daycare_FindEmptySpot(struct DayCare *daycare);
void StoreSelectedPokemonInDaycare(void);
u32 TakePokemonFromDaycare(void);
void GetDaycareCost(void);
u8 GetNumLevelsGainedFromDaycare(void);
void TriggerPendingDaycareEgg(void);
void RejectEggFromDayCare(void);
void CreateEgg(struct Pokemon *mon, u32 species, bool32 setHotSpringsLocation);
void GiveEggFromDaycare(void);
bool32 ShouldEggHatch(void);
u32 GetSelectedMonNicknameAndSpecies(void);
void GetDaycareMonNicknames(void);
u8 GetDaycareState(void);
u8 GetDaycareCompatibilityScore(struct DayCare *daycare);
void SetDaycareCompatibilityString(void);
bool32 NameHasGenderSymbol(const u8 *name, u8 genderRatio);
void ShowDaycareLevelMenu(void);
void ChooseSendDaycareMon(void);
u8 GetEggMovesBySpecies(u32 species, u32 *eggMoves);
bool32 SpeciesCanLearnEggMove(u32 species, u32 move);
void StorePokemonInDaycare(struct Pokemon *mon, struct DaycareMon *daycareMon);
u8 GetEggMoves(struct Pokemon *pokemon, u32 *eggMoves);

#endif // GUARD_DAYCARE_H
