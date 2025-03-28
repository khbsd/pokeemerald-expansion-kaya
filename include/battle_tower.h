#ifndef GUARD_BATTLE_TOWER_H
#define GUARD_BATTLE_TOWER_H

#include "data.h"

struct RSBattleTowerRecord
{
    /*0x00*/ u8 lvlMode; // 0 = level 50, 1 = level 100
    /*0x01*/ u8 facilityClass;
    /*0x02*/ u32 winStreak;
    /*0x04*/ u8 name[PLAYER_NAME_LENGTH + 1];
    /*0x0C*/ u8 trainerId[TRAINER_ID_LENGTH];
    /*0x10*/ u32 greeting[EASY_CHAT_BATTLE_WORDS_COUNT];
    /*0x1C*/ struct BattleTowerPokemon party[FRONTIER_PARTY_SIZE];
    /*0xA0*/ u32 checksum;
};

struct BattleFrontierTrainer
{
    u8 facilityClass;
    u8 filler1[3];
    u8 trainerName[PLAYER_NAME_LENGTH + 1];
    u32 speechBefore[EASY_CHAT_BATTLE_WORDS_COUNT];
    u32 speechWin[EASY_CHAT_BATTLE_WORDS_COUNT];
    u32 speechLose[EASY_CHAT_BATTLE_WORDS_COUNT];
    const u32 *monSet;
};

extern const u8 gTowerMaleFacilityClasses[30];
extern const u32 gTowerMaleTrainerGfxIds[30];
extern const u8 gTowerFemaleFacilityClasses[20];
extern const u32 gTowerFemaleTrainerGfxIds[20];
extern const struct TrainerMon gBattleFrontierMons[];
extern const struct BattleFrontierTrainer gBattleFrontierTrainers[];
extern const struct TrainerMon gSlateportBattleTentMons[];
extern const struct BattleFrontierTrainer gSlateportBattleTentTrainers[];

// Temporary storage for monIds of the opponent team
// during team generation in battle factory and similar facilities.
extern u32 gFrontierTempParty[];

extern const struct BattleFrontierTrainer *gFacilityTrainers;
extern const struct TrainerMon *gFacilityTrainerMons;

void CallBattleTowerFunc(void);
u32 GetRandomScaledFrontierTrainerId(u8 challengeNum, u8 battleNum);
void SetBattleFacilityTrainerGfxId(u32 trainerId, u8 tempVarId);
void SetEReaderTrainerGfxId(void);
u32 GetBattleFacilityTrainerGfxId(u32 trainerId);
void PutNewBattleTowerRecord(struct EmeraldBattleTowerRecord *newRecordEm);
u8 GetFrontierTrainerFrontSpriteId(u32 trainerId);
u8 GetFrontierOpponentClass(u32 trainerId);
void GetFrontierTrainerName(u8 *dst, u32 trainerId);
void FillFrontierTrainerParty(u8 monsCount);
void FillFrontierTrainersParties(u8 monsCount);
u32 GetRandomFrontierMonFromSet(u32 trainerId);
void FrontierSpeechToString(const u32 *words);
void DoSpecialTrainerBattle(void);
void CalcEmeraldBattleTowerChecksum(struct EmeraldBattleTowerRecord *record);
void CalcRubyBattleTowerChecksum(struct RSBattleTowerRecord *record);
u32 GetCurrentBattleTowerWinStreak(u8 lvlMode, u8 battleMode);
u8 GetEreaderTrainerFrontSpriteId(void);
u8 GetEreaderTrainerClassId(void);
void GetEreaderTrainerName(u8 *dst);
void ValidateEReaderTrainer(void);
void ClearEReaderTrainer(struct BattleTowerEReaderTrainer *ereaderTrainer);
void CopyEReaderTrainerGreeting(void);
void TryHideBattleTowerReporter(void);
bool32 RubyBattleTowerRecordToEmerald(struct RSBattleTowerRecord *src, struct EmeraldBattleTowerRecord *dst);
bool32 EmeraldBattleTowerRecordToRuby(struct EmeraldBattleTowerRecord *src, struct RSBattleTowerRecord *dst);
void CalcApprenticeChecksum(struct Apprentice *apprentice);
void GetBattleTowerTrainerLanguage(u8 *dst, u32 trainerId);
u8 SetFacilityPtrsGetLevel(void);
u8 GetFrontierEnemyMonLevel(u8 lvlMode);
s32 GetHighestLevelInPlayerParty(void);
u32 FacilityClassToGraphicsId(u8 facilityClass);
bool32 ValidateBattleTowerRecord(u8 recordId); // unused
void TrySetLinkBattleTowerEnemyPartyLevel(void);
void CreateFacilityMon(const struct TrainerMon *fmon, u32 level, u8 fixedIV, u32 otID, u32 flags, struct Pokemon *dst);

#endif //GUARD_BATTLE_TOWER_H
