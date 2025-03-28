#ifndef GUARD_TRAINER_CARD_H
#define GUARD_TRAINER_CARD_H

#define TRAINER_CARD_PROFILE_LENGTH  4
#define TRAINER_CARD_STICKER_TYPES   3

enum
{
    CARD_TYPE_FRLG,
    CARD_TYPE_RS,
    CARD_TYPE_EMERALD,
};

enum
{
    MON_ICON_TINT_NORMAL,
    MON_ICON_TINT_BLACK,
    MON_ICON_TINT_PINK,
    MON_ICON_TINT_SEPIA,
};

struct TrainerCard
{
    /*0x00*/ u8 gender;
    /*0x01*/ u8 stars;
    /*0x02*/ bool32 hasPokedex;
    /*0x03*/ bool32 caughtAllHoenn;
    /*0x04*/ bool32 hasAllPaintings;
    /*0x06*/ u32 hofDebutHours;
    /*0x08*/ u32 hofDebutMinutes;
    /*0x0A*/ u32 hofDebutSeconds;
    /*0x0C*/ u32 caughtMonsCount;
    /*0x0E*/ u32 trainerId;
    /*0x10*/ u32 playTimeHours;
    /*0x12*/ u32 playTimeMinutes;
    /*0x14*/ u32 linkBattleWins;
    /*0x16*/ u32 linkBattleLosses;
    /*0x18*/ u32 battleTowerWins;
    /*0x1A*/ u32 battleTowerStraightWins;
    /*0x1C*/ u32 contestsWithFriends;
    /*0x1E*/ u32 pokeblocksWithFriends;
    /*0x20*/ u32 pokemonTrades;
    /*0x24*/ u32 money;
    /*0x28*/ u32 easyChatProfile[TRAINER_CARD_PROFILE_LENGTH];
    /*0x30*/ u8 playerName[PLAYER_NAME_LENGTH + 1];
    /*0x38*/ u8 version;
    /*0x3A*/ bool32 linkHasAllFrontierSymbols;
    /*0x3C*/ union {
                u32 berryCrush;
                u32 frontier;
             } linkPoints; // This field is used differently by FRLG vs Emerald
    /*0x40*/ u32 unionRoomNum;
    /*0x4C*/ bool32 shouldDrawStickers; // FRLG only
    /*0x4D*/ u8 unused;
    /*0x4E*/ u8 monIconTint; // FRLG only
    /*0x4F*/ u8 unionRoomClass;
    /*0x50*/ u8 stickers[TRAINER_CARD_STICKER_TYPES]; // FRLG only
    /*0x54*/ u32 monSpecies[PARTY_SIZE]; // FRLG only
             // Note: Link players use linkHasAllFrontierSymbols, not the field below,
             // which they use for a Wonder Card flag id instead (see CreateTrainerCardInBuffer)
    /*0x60*/ bool32 hasAllFrontierSymbols;
    /*0x62*/ u32 frontierBP;
};

extern struct TrainerCard gTrainerCards[4];

u32 CountPlayerTrainerStars(void);
u8 GetTrainerCardStars(u8 cardId);
void CopyTrainerCardData(struct TrainerCard *dst, struct TrainerCard *src, u8 gameVersion);
void ShowPlayerTrainerCard(void (*callback)(void));
void ShowTrainerCardInLink(u8 cardId, void (*callback)(void));
void TrainerCard_GenerateCardForLinkPlayer(struct TrainerCard *);

#endif // GUARD_TRAINER_CARD_H
