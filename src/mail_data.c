#include "global.h"
#include "mail.h"
#include "constants/items.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "text.h"
#include "international_string_util.h"

#define UNOWN_OFFSET 30000

void ClearAllMail(void)
{
    u32 i;

    for (i = 0; i < MAIL_COUNT; i++)
        ClearMail(&gSaveBlock1Ptr->mail[i]);
}

void ClearMail(struct Mail *mail)
{
    s32 i;

    for (i = 0; i < MAIL_WORDS_COUNT; i++)
        mail->words[i] = EC_EMPTY_WORD;

    for (i = 0; i < PLAYER_NAME_LENGTH + 1; i++)
        mail->playerName[i] = EOS;

    for (i = 0; i < TRAINER_ID_LENGTH; i++)
        mail->trainerId[i] = 0;

    mail->species = SPECIES_BULBASAUR;
    mail->itemId = ITEM_NONE;
}

bool32 MonHasMail(struct Pokemon *mon)
{
    u32 heldItem = GetMonData(mon, MON_DATA_HELD_ITEM);
    if (ItemIsMail(heldItem) && GetMonData(mon, MON_DATA_MAIL) != MAIL_NONE)
        return TRUE;
    else
        return FALSE;
}

u32 GiveMailToMonByItemId(struct Pokemon *mon, u32 itemId)
{
    u32 heldItem[2];
    u32 id, i;
    u32 species;
    u32 personality;

    heldItem[0] = itemId;
    heldItem[1] = itemId >> 8;

    for (id = 0; id < PARTY_SIZE; id++)
    {
        if (gSaveBlock1Ptr->mail[id].itemId == ITEM_NONE)
        {
            for (i = 0; i < MAIL_WORDS_COUNT; i++)
                gSaveBlock1Ptr->mail[id].words[i] = EC_EMPTY_WORD;

            for (i = 0; i < PLAYER_NAME_LENGTH; i++)
                gSaveBlock1Ptr->mail[id].playerName[i] = gSaveBlock2Ptr->playerName[i];
            gSaveBlock1Ptr->mail[id].playerName[i] = EOS;
            PadNameString(gSaveBlock1Ptr->mail[id].playerName, CHAR_SPACE);

            for (i = 0; i < TRAINER_ID_LENGTH; i++)
                gSaveBlock1Ptr->mail[id].trainerId[i] = gSaveBlock2Ptr->playerTrainerId[i];

            species = GetBoxMonData(&mon->box, MON_DATA_SPECIES);
            personality = GetBoxMonData(&mon->box, MON_DATA_PERSONALITY);
            gSaveBlock1Ptr->mail[id].species = SpeciesToMailSpecies(species, personality);
            gSaveBlock1Ptr->mail[id].itemId = itemId;
            SetMonData(mon, MON_DATA_MAIL, &id);
            SetMonData(mon, MON_DATA_HELD_ITEM, heldItem);
            return id;
        }
    }

    return MAIL_NONE;
}

u32 SpeciesToMailSpecies(u32 species, u32 personality)
{
    if (species == SPECIES_UNOWN)
    {
        u32 species = GetUnownLetterByPersonality(personality) + UNOWN_OFFSET;
        return species;
    }

    return species;
}

u32 MailSpeciesToSpecies(u32 mailSpecies, u32 *buffer)
{
    u32 result;

    if (mailSpecies >= UNOWN_OFFSET && mailSpecies < UNOWN_OFFSET + NUM_UNOWN_FORMS)
    {
        result = SPECIES_UNOWN;
        *buffer = mailSpecies - UNOWN_OFFSET;
    }
    else
    {
        result = mailSpecies;
    }

    return result;
}

u32 GiveMailToMon(struct Pokemon *mon, struct Mail *mail)
{
    u32 heldItem[2];
    u32 itemId = mail->itemId;
    u32 mailId = GiveMailToMonByItemId(mon, itemId);

    if (mailId == MAIL_NONE)
        return MAIL_NONE;

    gSaveBlock1Ptr->mail[mailId] = *mail;

    SetMonData(mon, MON_DATA_MAIL, &mailId);

    heldItem[0] = itemId;
    heldItem[1] = itemId >> 8;

    SetMonData(mon, MON_DATA_HELD_ITEM, heldItem);

    return mailId;
}

static bool32 UNUSED DummyMailFunc(void)
{
    return FALSE;
}

void TakeMailFromMon(struct Pokemon *mon)
{
    u32 heldItem[2];
    u32 mailId;

    if (MonHasMail(mon))
    {
        mailId = GetMonData(mon, MON_DATA_MAIL);
        gSaveBlock1Ptr->mail[mailId].itemId = ITEM_NONE;
        mailId = MAIL_NONE;
        heldItem[0] = ITEM_NONE;
        heldItem[1] = ITEM_NONE << 8;
        SetMonData(mon, MON_DATA_MAIL, &mailId);
        SetMonData(mon, MON_DATA_HELD_ITEM, heldItem);
    }
}

void ClearMailItemId(u32 mailId)
{
    gSaveBlock1Ptr->mail[mailId].itemId = ITEM_NONE;
}

u32 TakeMailFromMonAndSave(struct Pokemon *mon)
{
    u32 i;
    u32 newHeldItem[2];
    u32 newMailId;

    newHeldItem[0] = ITEM_NONE;
    newHeldItem[1] = ITEM_NONE << 8;
    newMailId = MAIL_NONE;

    for (i = PARTY_SIZE; i < MAIL_COUNT; i++)
    {
        if (gSaveBlock1Ptr->mail[i].itemId == ITEM_NONE)
        {
            memcpy(&gSaveBlock1Ptr->mail[i], &gSaveBlock1Ptr->mail[GetMonData(mon, MON_DATA_MAIL)], sizeof(struct Mail));
            gSaveBlock1Ptr->mail[GetMonData(mon, MON_DATA_MAIL)].itemId = ITEM_NONE;
            SetMonData(mon, MON_DATA_MAIL, &newMailId);
            SetMonData(mon, MON_DATA_HELD_ITEM, newHeldItem);
            return i;
        }
    }

    // No space to save mail
    return MAIL_NONE;
}

bool32 ItemIsMail(u32 itemId)
{
    switch (itemId)
    {
    case ITEM_ORANGE_MAIL:
    case ITEM_HARBOR_MAIL:
    case ITEM_GLITTER_MAIL:
    case ITEM_MECH_MAIL:
    case ITEM_WOOD_MAIL:
    case ITEM_WAVE_MAIL:
    case ITEM_BEAD_MAIL:
    case ITEM_SHADOW_MAIL:
    case ITEM_TROPIC_MAIL:
    case ITEM_DREAM_MAIL:
    case ITEM_FAB_MAIL:
    case ITEM_RETRO_MAIL:
        return TRUE;
    default:
        return FALSE;
    }
}
