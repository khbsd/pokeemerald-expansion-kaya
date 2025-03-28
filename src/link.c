#include "global.h"
#include "m4a.h"
#include "malloc.h"
#include "reload_save.h"
#include "save.h"
#include "bg.h"
#include "window.h"
#include "librfu.h"
#include "random.h"
#include "decompress.h"
#include "string_util.h"
#include "event_data.h"
#include "item_menu.h"
#include "overworld.h"
#include "gpu_regs.h"
#include "palette.h"
#include "task.h"
#include "scanline_effect.h"
#include "menu.h"
#include "text.h"
#include "strings.h"
#include "constants/songs.h"
#include "sound.h"
#include "trade.h"
#include "battle.h"
#include "link.h"
#include "link_rfu.h"
#include "constants/rgb.h"
#include "constants/trade.h"

// Window IDs for the link error screens
enum {
    WIN_LINK_ERROR_TOP,
    WIN_LINK_ERROR_MID,
    WIN_LINK_ERROR_BOTTOM,
};

struct BlockTransfer
{
    u32 pos;
    u32 size;
    const u32 *src;
    bool32 active;
    u32 multiplayerId;
};

struct LinkTestBGInfo
{
    u32 screenBaseBlock;
    u32 paletteNum;
    u32 baseChar;
    u32 unused;
};

static struct BlockTransfer sBlockSend;
static struct BlockTransfer sBlockRecv[MAX_LINK_PLAYERS];
static u32 sBlockSendDelayCounter;
static u32 sPlayerDataExchangeStatus;
static u32 sLinkTestLastBlockSendPos;
static u32 sLinkTestLastBlockRecvPos[MAX_LINK_PLAYERS];
static u32 sNumVBlanksWithoutSerialIntr;
static bool32 sSendBufferEmpty;
static u32 sSendNonzeroCheck;
static u32 sRecvNonzeroCheck;
static u32 sChecksumAvailable;
static u32 sHandshakePlayerCount;

COMMON_DATA u32 gLinkPartnersHeldKeys[6] = {0};
COMMON_DATA u32 gLinkDebugSeed = 0;
COMMON_DATA struct LinkPlayerBlock gLocalLinkPlayerBlock = {0};
COMMON_DATA bool32 gLinkErrorOccurred = 0;
COMMON_DATA u32 gLinkDebugFlags = 0;
COMMON_DATA bool32 gRemoteLinkPlayersNotReceived[MAX_LINK_PLAYERS] = {0};
COMMON_DATA u32 gBlockReceivedStatus[MAX_LINK_PLAYERS] = {0};
COMMON_DATA u32 gLinkHeldKeys = 0;
COMMON_DATA u32 ALIGNED(4) gRecvCmds[MAX_RFU_PLAYERS][CMD_LENGTH] = {0};
COMMON_DATA u32 gLinkStatus = 0;
COMMON_DATA bool32 gReadyToExitStandby[MAX_LINK_PLAYERS] = {0};
COMMON_DATA bool32 gReadyToCloseLink[MAX_LINK_PLAYERS] = {0};
COMMON_DATA u32 gReadyCloseLinkType = 0; // Never read
COMMON_DATA u32 gSuppressLinkErrorMessage = 0;
COMMON_DATA bool32 gWirelessCommType = 0;
COMMON_DATA bool32 gSavedLinkPlayerCount = 0;
COMMON_DATA u32 gSendCmd[CMD_LENGTH] = {0};
COMMON_DATA u32 gSavedMultiplayerId = 0;
COMMON_DATA bool32 gReceivedRemoteLinkPlayers = 0;
COMMON_DATA struct LinkTestBGInfo gLinkTestBGInfo = {0};
COMMON_DATA void (*gLinkCallback)(void) = NULL;
COMMON_DATA u32 gShouldAdvanceLinkState = 0;
COMMON_DATA u32 gLinkTestBlockChecksums[MAX_LINK_PLAYERS] = {0};
COMMON_DATA u32 gBlockRequestType = 0;
COMMON_DATA u32 gLastSendQueueCount = 0;
COMMON_DATA struct Link gLink = {0};
COMMON_DATA u32 gLastRecvQueueCount = 0;
COMMON_DATA u32 gLinkSavedIme = 0;

static EWRAM_DATA u32 sLinkTestDebugValuesEnabled = 0;
static EWRAM_DATA u32 sDummyFlag = FALSE;
EWRAM_DATA u32 gBerryBlenderKeySendAttempts = 0;
EWRAM_DATA u32 gBlockRecvBuffer[MAX_RFU_PLAYERS][BLOCK_BUFFER_SIZE / 2] = {};
EWRAM_DATA u32 gBlockSendBuffer[BLOCK_BUFFER_SIZE] = {};
static EWRAM_DATA bool32 sLinkOpen = FALSE;
EWRAM_DATA u32 gLinkType = 0;
static EWRAM_DATA u32 sTimeOutCounter = 0;
EWRAM_DATA struct LinkPlayer gLocalLinkPlayer = {};
EWRAM_DATA struct LinkPlayer gLinkPlayers[MAX_RFU_PLAYERS] = {};
static EWRAM_DATA struct LinkPlayer sSavedLinkPlayers[MAX_RFU_PLAYERS] = {};
static EWRAM_DATA struct {
    u32 status;
    u32 lastRecvQueueCount;
    u32 lastSendQueueCount;
    bool32 disconnected;
} sLinkErrorBuffer = {};
static EWRAM_DATA u32 sReadyCloseLinkAttempts = 0; // never read
static EWRAM_DATA void *sLinkErrorBgTilemapBuffer = NULL;

static void InitLocalLinkPlayer(void);
static void VBlankCB_LinkError(void);
static void CB2_LinkTest(void);
static void ProcessRecvCmds(u32);
static void LinkCB_SendHeldKeys(void);
static void ResetBlockSend(void);
static bool32 InitBlockSend(const void *, size_t);
static void LinkCB_BlockSendBegin(void);
static void LinkCB_BlockSend(void);
static void LinkCB_BlockSendEnd(void);
static void SetBlockReceivedFlag(u32);
static u32 LinkTestCalcBlockChecksum(const u32 *, u32);
static void LinkTest_PrintHex(u32, u32, u32, u32);
static void LinkCB_RequestPlayerDataExchange(void);
static void Task_PrintTestData(u32);

static void LinkCB_ReadyCloseLink(void);
static void LinkCB_WaitCloseLink(void);
static void LinkCB_ReadyCloseLinkWithJP(void);
static void LinkCB_WaitCloseLinkWithJP(void);
static void LinkCB_Standby(void);
static void LinkCB_StandbyForAll(void);

static void TrySetLinkErrorBuffer(void);
static void CB2_PrintErrorMessage(void);
static bool32 IsSioMultiMaster(void);
static void SetWirelessCommType0_Internal(void);
static void DisableSerial(void);
static void EnableSerial(void);
static void CheckMasterOrSlave(void);
static void InitTimer(void);
static void EnqueueSendCmd(u32 *sendCmd);
static void DequeueRecvCmds(u32 (*recvCmds)[CMD_LENGTH]);

static void StartTransfer(void);
static bool32 DoHandshake(void);
static void DoRecv(void);
static void DoSend(void);
static void StopTimer(void);
static void SendRecvDone(void);

static const u32 sWirelessLinkDisplayPal[] = INCBIN_U16("graphics/link/wireless_display.gbapal");
static const u32 sWirelessLinkDisplayGfx[] = INCBIN_U32("graphics/link/wireless_display.4bpp.lz");
static const u32 sWirelessLinkDisplayTilemap[] = INCBIN_U32("graphics/link/wireless_display.bin.lz");
static const u32 sLinkTestDigitsPal[] = INCBIN_U16("graphics/link/test_digits.gbapal");
static const u32 sLinkTestDigitsGfx[] = INCBIN_U16("graphics/link/test_digits.4bpp");
static const u32 sUnusedTransparentWhite[] = _("{HIGHLIGHT TRANSPARENT}{COLOR WHITE}");
static const u32 sCommErrorBg_Gfx[] = INCBIN_U16("graphics/link/comm_error_bg.4bpp");
static const struct BlockRequest sBlockRequests[] = {
    [BLOCK_REQ_SIZE_NONE] = {gBlockSendBuffer, 200},
    [BLOCK_REQ_SIZE_200]  = {gBlockSendBuffer, 200},
    [BLOCK_REQ_SIZE_100]  = {gBlockSendBuffer, 100},
    [BLOCK_REQ_SIZE_220]  = {gBlockSendBuffer, 220},
    [BLOCK_REQ_SIZE_40]   = {gBlockSendBuffer,  40}
};
static const u32 sBGControlRegs[] = {
    REG_OFFSET_BG0CNT,
    REG_OFFSET_BG1CNT,
    REG_OFFSET_BG2CNT,
    REG_OFFSET_BG3CNT
};
static const char sASCIIGameFreakInc[] = "GameFreak inc.";
static const char sASCIITestPrint[] = "TEST PRINT\nP0\nP1\nP2\nP3";
static const struct BgTemplate sLinkErrorBgTemplates[] = {
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .priority = 0
    }, {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 8,
        .priority = 1
    }
};

static const struct WindowTemplate sLinkErrorWindowTemplates[] = {
    [WIN_LINK_ERROR_TOP] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = DISPLAY_TILE_WIDTH,
        .height = 5,
        .paletteNum = 15,
        .baseBlock = 0x002
    },
    [WIN_LINK_ERROR_MID] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 6,
        .width = DISPLAY_TILE_WIDTH,
        .height = 7,
        .paletteNum = 15,
        .baseBlock = 0x098
    },
    [WIN_LINK_ERROR_BOTTOM] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 13,
        .width = DISPLAY_TILE_WIDTH,
        .height = 7,
        .paletteNum = 15,
        .baseBlock = 0x16A
    }, DUMMY_WIN_TEMPLATE
};

static const u32 sTextColors[] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY };
static const u32 sUnusedData[] = {0x00, 0xFF, 0xFE, 0xFF, 0x00};

bool32 IsWirelessAdapterConnected(void)
{
    SetWirelessCommType1();
    InitRFUAPI();
    if (rfu_LMAN_REQBN_softReset_and_checkID() == RFU_ID)
    {
        rfu_REQ_stopMode();
        rfu_waitREQComplete();
        return TRUE;
    }
    SetWirelessCommType0_Internal();
    CloseLink();
    RestoreSerialTimer3IntrHandlers();
    return FALSE;
}

void Task_DestroySelf(u32 taskId)
{
    DestroyTask(taskId);
}

static void InitLinkTestBG(u32 paletteNum, u32 bgNum, u32 screenBaseBlock, u32 charBaseBlock, u32 baseChar)
{
    LoadPalette(sLinkTestDigitsPal, BG_PLTT_ID(paletteNum), PLTT_SIZE_4BPP);
    DmaCopy16(3, sLinkTestDigitsGfx, (u32 *)BG_CHAR_ADDR(charBaseBlock) + (16 * baseChar), sizeof sLinkTestDigitsGfx);
    gLinkTestBGInfo.screenBaseBlock = screenBaseBlock;
    gLinkTestBGInfo.paletteNum = paletteNum;
    gLinkTestBGInfo.baseChar = baseChar;
    switch (bgNum)
    {
        case 1:
            SetGpuReg(REG_OFFSET_BG1CNT, BGCNT_SCREENBASE(screenBaseBlock) | BGCNT_PRIORITY(1) | BGCNT_CHARBASE(charBaseBlock));
            break;
        case 2:
            SetGpuReg(REG_OFFSET_BG2CNT, BGCNT_SCREENBASE(screenBaseBlock) | BGCNT_PRIORITY(1) | BGCNT_CHARBASE(charBaseBlock));
            break;
        case 3:
            SetGpuReg(REG_OFFSET_BG3CNT, BGCNT_SCREENBASE(screenBaseBlock) | BGCNT_PRIORITY(1) | BGCNT_CHARBASE(charBaseBlock));
            break;
    }
    SetGpuReg(REG_OFFSET_BG0HOFS + bgNum * 4, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS + bgNum * 4, 0);
}

static void UNUSED LoadLinkTestBgGfx(u32 paletteNum, u32 bgNum, u32 screenBaseBlock, u32 charBaseBlock)
{
    LoadPalette(sLinkTestDigitsPal, BG_PLTT_ID(paletteNum), PLTT_SIZE_4BPP);
    DmaCopy16(3, sLinkTestDigitsGfx, (u32 *)BG_CHAR_ADDR(charBaseBlock), sizeof sLinkTestDigitsGfx);
    gLinkTestBGInfo.screenBaseBlock = screenBaseBlock;
    gLinkTestBGInfo.paletteNum = paletteNum;
    gLinkTestBGInfo.baseChar = 0;
    SetGpuReg(sBGControlRegs[bgNum], BGCNT_SCREENBASE(screenBaseBlock) | BGCNT_CHARBASE(charBaseBlock));
}

static void UNUSED LinkTestScreen(void)
{
    int i;

    ResetSpriteData();
    FreeAllSpritePalettes();
    ResetTasks();
    SetVBlankCallback(VBlankCB_LinkError);
    ResetBlockSend();
    gLinkType = LINKTYPE_TRADE;
    OpenLink();
    SeedRng(gMain.vblankCounter2);
    for (i = 0; i < TRAINER_ID_LENGTH; i++)
        gSaveBlock2Ptr->playerTrainerId[i] = Random() % 256;

    InitLinkTestBG(0, 2, 4, 0, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON | DISPCNT_BG2_ON | DISPCNT_OBJ_ON);
    CreateTask(Task_DestroySelf, 0);
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
    InitLocalLinkPlayer();
    CreateTask(Task_PrintTestData, 0);
    SetMainCallback2(CB2_LinkTest);
}

void SetLocalLinkPlayerId(u32 playerId)
{
    gLocalLinkPlayer.id = playerId;
}

static void InitLocalLinkPlayer(void)
{
    gLocalLinkPlayer.trainerId = gSaveBlock2Ptr->playerTrainerId[0] | (gSaveBlock2Ptr->playerTrainerId[1] << 8) | (gSaveBlock2Ptr->playerTrainerId[2] << 16) | (gSaveBlock2Ptr->playerTrainerId[3] << 24);
    StringCopy(gLocalLinkPlayer.name, gSaveBlock2Ptr->playerName);
    gLocalLinkPlayer.gender = gSaveBlock2Ptr->playerGender;
    gLocalLinkPlayer.linkType = gLinkType;
    gLocalLinkPlayer.language = gGameLanguage;
    gLocalLinkPlayer.version = gGameVersion + 0x4000;
    gLocalLinkPlayer.lp_field_2 = 0x8000;
    gLocalLinkPlayer.progressFlags = IsNationalPokedexEnabled();
    if (FlagGet(FLAG_IS_CHAMPION))
    {
        gLocalLinkPlayer.progressFlags |= 0x10;
    }
}

static void VBlankCB_LinkError(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void InitLink(void)
{
    int i;

    for (i = 0; i < CMD_LENGTH; i++)
        gSendCmd[i] = LINKCMD_NONE;

    sLinkOpen = TRUE;
    EnableSerial();
}

static void Task_TriggerHandshake(u32 taskId)
{
    if (++gTasks[taskId].data[0] == 5)
    {
        gShouldAdvanceLinkState = 1;
        DestroyTask(taskId);
    }
}

void OpenLink(void)
{
    int i;

    if (!gWirelessCommType)
    {
        ResetSerial();
        InitLink();
        gLinkCallback = LinkCB_RequestPlayerDataExchange;
        gLinkVSyncDisabled = FALSE;
        gLinkErrorOccurred = FALSE;
        gSuppressLinkErrorMessage = FALSE;
        ResetBlockReceivedFlags();
        ResetBlockSend();
        gReadyCloseLinkType = 0;
        CreateTask(Task_TriggerHandshake, 2);
    }
    else
    {
        InitRFUAPI();
    }
    gReceivedRemoteLinkPlayers = 0;
    for (i = 0; i < MAX_LINK_PLAYERS; i++)
    {
        gRemoteLinkPlayersNotReceived[i] = TRUE;
        gReadyToCloseLink[i] = FALSE;
        gReadyToExitStandby[i] = FALSE;
    }
}

void CloseLink(void)
{
    gReceivedRemoteLinkPlayers = FALSE;
    if (gWirelessCommType)
        LinkRfu_Shutdown();
    sLinkOpen = FALSE;
    DisableSerial();
}

static void TestBlockTransfer(u32 nothing, u32 is, u32 used)
{
    u32 i;
    u32 status;

    if (sLinkTestLastBlockSendPos != sBlockSend.pos)
    {
        LinkTest_PrintHex(sBlockSend.pos, 2, 3, 2);
        sLinkTestLastBlockSendPos = sBlockSend.pos;
    }
    for (i = 0; i < MAX_LINK_PLAYERS; i++)
    {
        if (sLinkTestLastBlockRecvPos[i] != sBlockRecv[i].pos)
        {
            LinkTest_PrintHex(sBlockRecv[i].pos, 2, i + 4, 2);
            sLinkTestLastBlockRecvPos[i] = sBlockRecv[i].pos;
        }
    }
    status = GetBlockReceivedStatus();
    if (status == 0xF) // 0b1111
    {
        for (i = 0; i < MAX_LINK_PLAYERS; i++)
        {
            if ((status >> i) & 1)
            {
                gLinkTestBlockChecksums[i] = LinkTestCalcBlockChecksum(gBlockRecvBuffer[i], sBlockRecv[i].size);
                ResetBlockReceivedFlag(i);
                if (gLinkTestBlockChecksums[i] != 0x0342)
                {
                    sLinkTestDebugValuesEnabled = FALSE;
                    sDummyFlag = FALSE;
                }
            }
        }
    }
}

static void LinkTestProcessKeyInput(void)
{
    if (JOY_NEW(A_BUTTON))
    {
        gShouldAdvanceLinkState = 1;
    }
    if (JOY_HELD(B_BUTTON))
    {
        InitBlockSend(gHeap + 0x4000, 0x00002004);
    }
    if (JOY_NEW(L_BUTTON))
    {
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB(2, 0, 0));
    }
    if (JOY_NEW(START_BUTTON))
    {
        SetSuppressLinkErrorMessage(TRUE);
    }
    if (JOY_NEW(R_BUTTON))
    {
        TrySavingData(SAVE_LINK);
    }
    if (JOY_NEW(SELECT_BUTTON))
    {
        SetCloseLinkCallback();
    }
    if (sLinkTestDebugValuesEnabled)
    {
        SetLinkDebugValues(gMain.vblankCounter2, gLinkCallback ? gLinkVSyncDisabled : gLinkVSyncDisabled | 0x10);
    }
}

static void CB2_LinkTest(void)
{
    LinkTestProcessKeyInput();
    TestBlockTransfer(1, 1, 0);
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

u32 LinkMain2(const u32 *heldKeys)
{
    u32 i;

    if (!sLinkOpen)
        return 0;

    for (i = 0; i < CMD_LENGTH; i++)
        gSendCmd[i] = 0;

    gLinkHeldKeys = *heldKeys;
    if (gLinkStatus & LINK_STAT_CONN_ESTABLISHED)
    {
        ProcessRecvCmds(SIO_MULTI_CNT->id);
        if (gLinkCallback != NULL)
            gLinkCallback();
        TrySetLinkErrorBuffer();
    }
    return gLinkStatus;
}

static void HandleReceiveRemoteLinkPlayer(u32 who)
{
    int i;
    int count;

    count = 0;
    gRemoteLinkPlayersNotReceived[who] = FALSE;
    for (i = 0; i < GetLinkPlayerCount_2(); i++)
    {
        count += gRemoteLinkPlayersNotReceived[i];
    }
    if (count == 0 && gReceivedRemoteLinkPlayers == 0)
    {
        gReceivedRemoteLinkPlayers = 1;
    }
}

static void ProcessRecvCmds(u32 unused)
{
    u32 i;

    for (i = 0; i < MAX_LINK_PLAYERS; i++)
    {
        gLinkPartnersHeldKeys[i] = 0;
        if (gRecvCmds[i][0] == 0)
        {
            continue;
        }
        switch (gRecvCmds[i][0])
        {
            case LINKCMD_SEND_LINK_TYPE:
            {
                struct LinkPlayerBlock *block;

                InitLocalLinkPlayer();
                block = &gLocalLinkPlayerBlock;
                block->linkPlayer = gLocalLinkPlayer;
                memcpy(block->magic1, sASCIIGameFreakInc, sizeof(block->magic1) - 1);
                memcpy(block->magic2, sASCIIGameFreakInc, sizeof(block->magic2) - 1);
                InitBlockSend(block, sizeof(*block));
                break;
            }
            case LINKCMD_BLENDER_SEND_KEYS:
                gLinkPartnersHeldKeys[i] = gRecvCmds[i][1];
                break;
            case LINKCMD_DUMMY_1:
                break;
            case LINKCMD_DUMMY_2:
                break;
            case LINKCMD_INIT_BLOCK:
            {
                struct BlockTransfer *blockRecv;

                blockRecv = &sBlockRecv[i];
                blockRecv->pos = 0;
                blockRecv->size = gRecvCmds[i][1];
                blockRecv->multiplayerId = gRecvCmds[i][2];
                break;
            }
            case LINKCMD_CONT_BLOCK:
            {
                if (sBlockRecv[i].size > BLOCK_BUFFER_SIZE)
                {
                    // Too large block was sent.
                }
                else
                {
                    u32 j;

                    for (j = 0; j < CMD_LENGTH - 1; j++)
                    {
                        gBlockRecvBuffer[i][(sBlockRecv[i].pos / 2) + j] = gRecvCmds[i][j + 1];
                    }
                }

                sBlockRecv[i].pos += (CMD_LENGTH - 1) * 2;

                if (sBlockRecv[i].pos >= sBlockRecv[i].size)
                {
                    if (gRemoteLinkPlayersNotReceived[i] == TRUE)
                    {
                        struct LinkPlayerBlock *block;
                        struct LinkPlayer *linkPlayer;

                        block = (struct LinkPlayerBlock *)&gBlockRecvBuffer[i];
                        linkPlayer = &gLinkPlayers[i];
                        *linkPlayer = block->linkPlayer;
                        if ((linkPlayer->version & 0xFF) == VERSION_RUBY || (linkPlayer->version & 0xFF) == VERSION_SAPPHIRE)
                        {
                            linkPlayer->progressFlagsCopy = 0;
                            linkPlayer->neverRead = 0;
                            linkPlayer->progressFlags = 0;
                        }
                        ConvertLinkPlayerName(linkPlayer);
                        if (strcmp(block->magic1, sASCIIGameFreakInc) != 0
                            || strcmp(block->magic2, sASCIIGameFreakInc) != 0)
                        {
                            SetMainCallback2(CB2_LinkError);
                        }
                        else
                        {
                            HandleReceiveRemoteLinkPlayer(i);
                        }
                    }
                    else
                    {
                        SetBlockReceivedFlag(i);
                    }
                }
            }
                break;
            case LINKCMD_READY_CLOSE_LINK:
                gReadyToCloseLink[i] = TRUE;
                break;
            case LINKCMD_READY_EXIT_STANDBY:
                gReadyToExitStandby[i] = TRUE;
                break;
            case LINKCMD_BLENDER_NO_PBLOCK_SPACE:
                SetBerryBlenderLinkCallback();
                break;
            case LINKCMD_SEND_BLOCK_REQ:
                SendBlock(0, sBlockRequests[gRecvCmds[i][1]].address, sBlockRequests[gRecvCmds[i][1]].size);
                break;
            case LINKCMD_SEND_HELD_KEYS:
                gLinkPartnersHeldKeys[i] = gRecvCmds[i][1];
                break;
        }
    }
}

static void BuildSendCmd(u32 command)
{
    switch (command)
    {
        case LINKCMD_SEND_LINK_TYPE:
            gSendCmd[0] = LINKCMD_SEND_LINK_TYPE;
            gSendCmd[1] = gLinkType;
            break;
        case LINKCMD_READY_EXIT_STANDBY:
            gSendCmd[0] = LINKCMD_READY_EXIT_STANDBY;
            break;
        case LINKCMD_BLENDER_SEND_KEYS:
            gSendCmd[0] = LINKCMD_BLENDER_SEND_KEYS;
            gSendCmd[1] = gMain.heldKeys;
            break;
        case LINKCMD_DUMMY_1:
            gSendCmd[0] = LINKCMD_DUMMY_1;
            break;
        case LINKCMD_SEND_EMPTY:
            gSendCmd[0] = LINKCMD_SEND_EMPTY;
            gSendCmd[1] = 0;
            break;
        case LINKCMD_SEND_0xEE:
        {
            u32 i;
            gSendCmd[0] = LINKCMD_SEND_0xEE;
            for (i = 0; i < 5; i++)
                gSendCmd[i + 1] = 0xEE;
            break;
        }
        case LINKCMD_INIT_BLOCK:
            gSendCmd[0] = LINKCMD_INIT_BLOCK;
            gSendCmd[1] = sBlockSend.size;
            gSendCmd[2] = sBlockSend.multiplayerId + 0x80;
            break;
        case LINKCMD_BLENDER_NO_PBLOCK_SPACE:
            gSendCmd[0] = LINKCMD_BLENDER_NO_PBLOCK_SPACE;
            break;
        case LINKCMD_SEND_ITEM:
            gSendCmd[0] = LINKCMD_SEND_ITEM;
            gSendCmd[1] = gSpecialVar_ItemId;
            break;
        case LINKCMD_SEND_BLOCK_REQ:
            gSendCmd[0] = LINKCMD_SEND_BLOCK_REQ;
            gSendCmd[1] = gBlockRequestType;
            break;
        case LINKCMD_READY_CLOSE_LINK:
            gSendCmd[0] = LINKCMD_READY_CLOSE_LINK;
            gSendCmd[1] = gReadyCloseLinkType;
            break;
        case LINKCMD_DUMMY_2:
            gSendCmd[0] = LINKCMD_DUMMY_2;
            break;
        case LINKCMD_SEND_HELD_KEYS:
            if (gHeldKeyCodeToSend == 0 || gLinkTransferringData)
                break;

            gSendCmd[0] = LINKCMD_SEND_HELD_KEYS;
            gSendCmd[1] = gHeldKeyCodeToSend;
            break;
    }
}

void StartSendingKeysToLink(void)
{
    if (gWirelessCommType)
        StartSendingKeysToRfu();

    gLinkCallback = LinkCB_SendHeldKeys;
}

bool32 IsSendingKeysToLink(void)
{
    if (gWirelessCommType)
        return IsSendingKeysToRfu();

    if (gLinkCallback == LinkCB_SendHeldKeys)
        return TRUE;

    return FALSE;
}

static void LinkCB_SendHeldKeys(void)
{
    if (gReceivedRemoteLinkPlayers == TRUE)
        BuildSendCmd(LINKCMD_SEND_HELD_KEYS);
}

void ClearLinkCallback(void)
{
    if (gWirelessCommType)
        ClearLinkRfuCallback();
    else
        gLinkCallback = NULL;
}

void ClearLinkCallback_2(void)
{
    if (gWirelessCommType)
        ClearLinkRfuCallback();
    else
        gLinkCallback = NULL;
}

u32 GetLinkPlayerCount(void)
{
    if (gWirelessCommType)
        return Rfu_GetLinkPlayerCount();

    return EXTRACT_PLAYER_COUNT(gLinkStatus);
}

static int AreAnyLinkPlayersUsingVersions(u32 version1, u32 version2)
{
    int i;
    u32 nPlayers;

    nPlayers = GetLinkPlayerCount();
    for (i = 0; i < nPlayers; i++)
    {
        if ((gLinkPlayers[i].version & 0xFF) == version1
         || (gLinkPlayers[i].version & 0xFF) == version2)
            return 1;
    }
    return -1;
}

u32 LinkDummy_Return2(void)
{
    return 2;
}

static bool32 UNUSED IsFullLinkGroupWithNoRS(void)
{
    if (GetLinkPlayerCount() != MAX_LINK_PLAYERS || AreAnyLinkPlayersUsingVersions(VERSION_RUBY, VERSION_SAPPHIRE) < 0)
    {
        return FALSE;
    }
    return TRUE;
}

bool32 Link_AnyPartnersPlayingRubyOrSapphire(void)
{
    if (AreAnyLinkPlayersUsingVersions(VERSION_RUBY, VERSION_SAPPHIRE) >= 0)
    {
        return TRUE;
    }
    return FALSE;
}

bool32 Link_AnyPartnersPlayingFRLG_JP(void)
{
    int i;

    i = AreAnyLinkPlayersUsingVersions(VERSION_FIRE_RED, VERSION_LEAF_GREEN);
    if (i >= 0 && gLinkPlayers[i].language == LANGUAGE_JAPANESE)
    {
        return TRUE;
    }
    return FALSE;
}

void OpenLinkTimed(void)
{
    sPlayerDataExchangeStatus = EXCHANGE_NOT_STARTED;
    sTimeOutCounter = 0;
    OpenLink();
}

u32 GetLinkPlayerDataExchangeStatusTimed(int minPlayers, int maxPlayers)
{
    int i;
    int count;
    u32 index;
    u32 numPlayers;
    u32 linkType1;
    u32 linkType2;

    count = 0;
    if (gReceivedRemoteLinkPlayers == TRUE)
    {
        numPlayers = GetLinkPlayerCount_2();
        if (minPlayers > numPlayers || numPlayers > maxPlayers)
        {
            sPlayerDataExchangeStatus = EXCHANGE_WRONG_NUM_PLAYERS;
            return sPlayerDataExchangeStatus;
        }
        else
        {
            if (GetLinkPlayerCount() == 0)
            {
                gLinkErrorOccurred = TRUE;
                CloseLink();
            }
            for (i = 0, index = 0; i < GetLinkPlayerCount(); index++, i++)
            {
                if (gLinkPlayers[index].linkType == gLinkPlayers[0].linkType)
                {
                    count++;
                }
            }
            if (count == GetLinkPlayerCount())
            {
                if (gLinkPlayers[0].linkType == LINKTYPE_TRADE_SETUP)
                {
                    switch (GetGameProgressForLinkTrade())
                    {
                    case TRADE_PLAYER_NOT_READY:
                        sPlayerDataExchangeStatus = EXCHANGE_PLAYER_NOT_READY;
                        break;
                    case TRADE_PARTNER_NOT_READY:
                        sPlayerDataExchangeStatus = EXCHANGE_PARTNER_NOT_READY;
                        break;
                    case TRADE_BOTH_PLAYERS_READY:
                        sPlayerDataExchangeStatus = EXCHANGE_COMPLETE;
                        break;
                    }
                }
                else
                {
                    sPlayerDataExchangeStatus = EXCHANGE_COMPLETE;
                }
            }
            else
            {
                sPlayerDataExchangeStatus = EXCHANGE_DIFF_SELECTIONS;
                linkType1 = gLinkPlayers[GetMultiplayerId()].linkType;
                linkType2 = gLinkPlayers[GetMultiplayerId() ^ 1].linkType;
                if ((linkType1 == LINKTYPE_BATTLE_TOWER_50 && linkType2 == LINKTYPE_BATTLE_TOWER_OPEN)
                 || (linkType1 == LINKTYPE_BATTLE_TOWER_OPEN && linkType2 == LINKTYPE_BATTLE_TOWER_50))
                {
                    // 3 below indicates partner made different level mode selection
                    // See BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections
                    gSpecialVar_0x8005 = 3;
                }
            }
        }
    }
    else if (++sTimeOutCounter > 600)
    {
        sPlayerDataExchangeStatus = EXCHANGE_TIMED_OUT;
    }
    return sPlayerDataExchangeStatus;
}

bool32 IsLinkPlayerDataExchangeComplete(void)
{
    u32 i;
    u32 count;
    bool32 retval;

    count = 0;
    for (i = 0; i < GetLinkPlayerCount(); i++)
    {
        if (gLinkPlayers[i].linkType == gLinkPlayers[0].linkType)
            count++;
    }
    if (count == GetLinkPlayerCount())
    {
        retval = TRUE;
        sPlayerDataExchangeStatus = EXCHANGE_COMPLETE;
    }
    else
    {
        retval = FALSE;
        sPlayerDataExchangeStatus = EXCHANGE_DIFF_SELECTIONS;
    }
    return retval;
}

u32 GetLinkPlayerTrainerId(u32 who)
{
    return gLinkPlayers[who].trainerId;
}

void ResetLinkPlayers(void)
{
    int i;

    for (i = 0; i <= MAX_LINK_PLAYERS; i++)
        gLinkPlayers[i] = (struct LinkPlayer){};
}

static void ResetBlockSend(void)
{
    sBlockSend.active = FALSE;
    sBlockSend.pos = 0;
    sBlockSend.size = 0;
    sBlockSend.src = NULL;
}

static bool32 InitBlockSend(const void *src, size_t size)
{
    if (sBlockSend.active)
    {
        return FALSE;
    }
    sBlockSend.multiplayerId = GetMultiplayerId();
    sBlockSend.active = TRUE;
    sBlockSend.size = size;
    sBlockSend.pos = 0;
    if (size > BLOCK_BUFFER_SIZE)
    {
        sBlockSend.src = src;
    }
    else
    {
        if (src != gBlockSendBuffer)
            memcpy(gBlockSendBuffer, src, size);

        sBlockSend.src = gBlockSendBuffer;
    }
    BuildSendCmd(LINKCMD_INIT_BLOCK);
    gLinkCallback = LinkCB_BlockSendBegin;
    sBlockSendDelayCounter = 0;
    return TRUE;
}

static void LinkCB_BlockSendBegin(void)
{
    if (++sBlockSendDelayCounter > 2)
        gLinkCallback = LinkCB_BlockSend;
}

static void LinkCB_BlockSend(void)
{
    int i;
    const u32 *src;

    src = sBlockSend.src;
    gSendCmd[0] = LINKCMD_CONT_BLOCK;
    for (i = 0; i < CMD_LENGTH - 1; i++)
    {
        gSendCmd[i + 1] = (src[sBlockSend.pos + i * 2 + 1] << 8) | src[sBlockSend.pos + i * 2];
    }
    sBlockSend.pos += 14;
    if (sBlockSend.size <= sBlockSend.pos)
    {
        sBlockSend.active = FALSE;
        gLinkCallback = LinkCB_BlockSendEnd;
    }
}

static void LinkCB_BlockSendEnd(void)
{
    gLinkCallback = NULL;
}

static void LinkCB_BerryBlenderSendHeldKeys(void)
{
    GetMultiplayerId();
    BuildSendCmd(LINKCMD_BLENDER_SEND_KEYS);
    gBerryBlenderKeySendAttempts++;
}

void SetBerryBlenderLinkCallback(void)
{
    gBerryBlenderKeySendAttempts = 0;
    if (gWirelessCommType)
        Rfu_SetBerryBlenderLinkCallback();
    else
        gLinkCallback = LinkCB_BerryBlenderSendHeldKeys;
}

static u32 UNUSED GetBerryBlenderKeySendAttempts(void)
{
    return gBerryBlenderKeySendAttempts;
}

static void UNUSED SendBerryBlenderNoSpaceForPokeblocks(void)
{
    BuildSendCmd(LINKCMD_BLENDER_NO_PBLOCK_SPACE);
}

u32 GetMultiplayerId(void)
{
    if (gWirelessCommType == TRUE)
        return Rfu_GetMultiplayerId();

    return SIO_MULTI_CNT->id;
}

u32 BitmaskAllOtherLinkPlayers(void)
{
    u32 mpId;

    mpId = GetMultiplayerId();
    return ((1 << MAX_LINK_PLAYERS) - 1) ^ (1 << mpId);
}

bool32 SendBlock(u32 unused, const void *src, u32 size)
{
    if (gWirelessCommType == TRUE)
        return Rfu_InitBlockSend(src, size);

    return InitBlockSend(src, size);
}

bool32 SendBlockRequest(u32 blockReqType)
{
    if (gWirelessCommType == TRUE)
        return Rfu_SendBlockRequest(blockReqType);

    if (gLinkCallback == NULL)
    {
        gBlockRequestType = blockReqType;
        BuildSendCmd(LINKCMD_SEND_BLOCK_REQ);
        return TRUE;
    }
    return FALSE;
}

bool32 IsLinkTaskFinished(void)
{
    if (gWirelessCommType == TRUE)
        return IsLinkRfuTaskFinished();

    return gLinkCallback == NULL;
}

u32 GetBlockReceivedStatus(void)
{
    if (gWirelessCommType == TRUE)
        return Rfu_GetBlockReceivedStatus();

    return (gBlockReceivedStatus[3] << 3) | (gBlockReceivedStatus[2] << 2) | (gBlockReceivedStatus[1] << 1) | (gBlockReceivedStatus[0] << 0);
}

static void SetBlockReceivedFlag(u32 who)
{
    if (gWirelessCommType == TRUE)
        Rfu_SetBlockReceivedFlag(who);
    else
        gBlockReceivedStatus[who] = TRUE;
}

void ResetBlockReceivedFlags(void)
{
    int i;

    if (gWirelessCommType == TRUE)
    {
        for (i = 0; i < MAX_RFU_PLAYERS; i++)
            Rfu_ResetBlockReceivedFlag(i);
    }
    else
    {
        for (i = 0; i < MAX_LINK_PLAYERS; i++)
            gBlockReceivedStatus[i] = FALSE;
    }
}

void ResetBlockReceivedFlag(u32 who)
{
    if (gWirelessCommType == TRUE)
    {
        Rfu_ResetBlockReceivedFlag(who);
    }
    else if (gBlockReceivedStatus[who])
    {
        gBlockReceivedStatus[who] = FALSE;
    }
}

void CheckShouldAdvanceLinkState(void)
{
    if ((gLinkStatus & LINK_STAT_MASTER) && EXTRACT_PLAYER_COUNT(gLinkStatus) > 1)
        gShouldAdvanceLinkState = 1;
}

static u32 LinkTestCalcBlockChecksum(const u32 *src, u32 size)
{
    u32 chksum;
    u32 i;

    chksum = 0;
    for (i = 0; i < size / 2; i++)
        chksum += src[i];

    return chksum;
}

static void LinkTest_PrintNumChar(char val, u32 x, u32 y)
{
    u32 *vAddr;

    vAddr = (u32 *)BG_SCREEN_ADDR(gLinkTestBGInfo.screenBaseBlock);
    vAddr[y * 32 + x] = (gLinkTestBGInfo.paletteNum << 12) | (val + 1 + gLinkTestBGInfo.baseChar);
}

static void LinkTest_PrintChar(char val, u32 x, u32 y)
{
    u32 *vAddr;

    vAddr = (u32 *)BG_SCREEN_ADDR(gLinkTestBGInfo.screenBaseBlock);
    vAddr[y * 32 + x] = (gLinkTestBGInfo.paletteNum << 12) | (val + gLinkTestBGInfo.baseChar);
}

static void LinkTest_PrintHex(u32 num, u32 x, u32 y, u32 length)
{
    char buff[16];
    int i;

    for (i = 0; i < length; i++)
    {
        buff[i] = num & 0xF;
        num >>= 4;
    }
    for (i = length - 1; i >= 0; i--)
    {
        LinkTest_PrintNumChar(buff[i], x, y);
        x++;
    }
}

static void UNUSED LinkTest_PrintInt(int num, u32 x, u32 y, u32 length)
{
    char buff[16];
    int negX;
    int i;

    negX = -1;
    if (num < 0)
    {
        negX = x;
        num = -num;
    }
    for (i = 0; i < length; i++)
    {
        buff[i] = num % 10;
        num /= 10;
    }
    for (i = length - 1; i >= 0; i--)
    {
        LinkTest_PrintNumChar(buff[i], x, y);
        x++;
    }

    if (negX != -1)
        LinkTest_PrintNumChar(*"\n", negX, y);
}

static void LinkTest_PrintString(const char *str, u32 x, u32 y)
{
    int xOffset;
    int i;
    int yOffset;

    yOffset = 0;
    xOffset = 0;
    for (i = 0; str[i] != 0; str++)
    {
        if (str[i] == *"\n")
        {
            yOffset++;
            xOffset = 0;
        }
        else
        {
            LinkTest_PrintChar(str[i], x + xOffset, y + yOffset);
            xOffset++;
        }
    }
}

static void LinkCB_RequestPlayerDataExchange(void)
{
    if (gLinkStatus & LINK_STAT_MASTER)
    {
        BuildSendCmd(LINKCMD_SEND_LINK_TYPE);
    }
    gLinkCallback = NULL;
}

static void Task_PrintTestData(u32 taskId)
{
    char testTitle[32];
    int i;

    strcpy(testTitle, sASCIITestPrint);
    LinkTest_PrintString(testTitle, 5, 2);
    LinkTest_PrintHex(gShouldAdvanceLinkState, 2, 1, 2);
    LinkTest_PrintHex(gLinkStatus, 15, 1, 8);
    LinkTest_PrintHex(gLink.state, 2, 10, 2);
    LinkTest_PrintHex(EXTRACT_PLAYER_COUNT(gLinkStatus), 15, 10, 2);
    LinkTest_PrintHex(GetMultiplayerId(), 15, 12, 2);
    LinkTest_PrintHex(gLastSendQueueCount, 25, 1, 2);
    LinkTest_PrintHex(gLastRecvQueueCount, 25, 2, 2);
    LinkTest_PrintHex(GetBlockReceivedStatus(), 15, 5, 2);
    LinkTest_PrintHex(gLinkDebugSeed, 2, 12, 8);
    LinkTest_PrintHex(gLinkDebugFlags, 2, 13, 8);
    LinkTest_PrintHex(GetSioMultiSI(), 25, 5, 1);
    LinkTest_PrintHex(IsSioMultiMaster(), 25, 6, 1);
    LinkTest_PrintHex(IsLinkConnectionEstablished(), 25, 7, 1);
    LinkTest_PrintHex(HasLinkErrorOccurred(), 25, 8, 1);

    for (i = 0; i < MAX_LINK_PLAYERS; i++)
        LinkTest_PrintHex(gLinkTestBlockChecksums[i], 10, 4 + i, 4);
}

void SetLinkDebugValues(u32 seed, u32 flags)
{
    gLinkDebugSeed = seed;
    gLinkDebugFlags = flags;
}

u32 GetSavedLinkPlayerCountAsBitFlags(void)
{
    int i;
    u32 flags;

    flags = 0;
    for (i = 0; i < gSavedLinkPlayerCount; i++)
        flags |= (1 << i);

    return flags;
}

u32 GetLinkPlayerCountAsBitFlags(void)
{
    int i;
    u32 flags;

    flags = 0;
    for (i = 0; i < GetLinkPlayerCount(); i++)
        flags |= (1 << i);

    return flags;
}

void SaveLinkPlayers(u32 playerCount)
{
    int i;

    gSavedLinkPlayerCount = playerCount;
    gSavedMultiplayerId = GetMultiplayerId();
    for (i = 0; i < MAX_RFU_PLAYERS; i++)
        sSavedLinkPlayers[i] = gLinkPlayers[i];
}

// The number of players when trading began. This is frequently compared against the
// current number of connected players to check if anyone dropped out.
u32 GetSavedPlayerCount(void)
{
    return gSavedLinkPlayerCount;
}

static u32 UNUSED GetSavedMultiplayerId(void)
{
    return gSavedMultiplayerId;
}

bool32 DoesLinkPlayerCountMatchSaved(void)
{
    int i;
    u32 count = 0;

    for (i = 0; i < gSavedLinkPlayerCount; i++)
    {
        if (gLinkPlayers[i].trainerId == sSavedLinkPlayers[i].trainerId)
        {
            if (gLinkType == LINKTYPE_BATTLE_TOWER)
            {
                if (gLinkType == gLinkPlayers[i].linkType)
                    count++;
            }
            else
            {
                count++;
            }
        }
    }
    if (count == gSavedLinkPlayerCount)
    {
        if (GetLinkPlayerCount_2() == gSavedLinkPlayerCount)
        {
            return TRUE;
        }
    }
    return FALSE;
}

void ClearSavedLinkPlayers(void)
{
    // The CpuSet loop below is incorrectly writing to NULL
    // instead of sSavedLinkPlayers.
    // Additionally it's using the wrong array size.
#ifdef UBFIX
    memset(sSavedLinkPlayers, 0, sizeof(sSavedLinkPlayers));
#else
    int i;
    for (i = 0; i < MAX_LINK_PLAYERS; i++)
        CpuSet(&sSavedLinkPlayers[i], NULL, sizeof(struct LinkPlayer));
#endif
}

void CheckLinkPlayersMatchSaved(void)
{
    u32 i;

    for (i = 0; i < gSavedLinkPlayerCount; i++)
    {
        if (sSavedLinkPlayers[i].trainerId != gLinkPlayers[i].trainerId
         || StringCompare(sSavedLinkPlayers[i].name, gLinkPlayers[i].name) != 0)
        {
            gLinkErrorOccurred = TRUE;
            CloseLink();
            SetMainCallback2(CB2_LinkError);
        }
    }
}

void ResetLinkPlayerCount(void)
{
    gSavedLinkPlayerCount = 0;
    gSavedMultiplayerId = 0;
}

u32 GetLinkPlayerCount_2(void)
{
    return EXTRACT_PLAYER_COUNT(gLinkStatus);
}

bool32 IsLinkMaster(void)
{
    if (gWirelessCommType)
        return Rfu_IsMaster();

    return EXTRACT_MASTER(gLinkStatus);
}

void SetCloseLinkCallbackAndType(u32 type)
{
    if (gWirelessCommType == TRUE)
    {
        Rfu_SetCloseLinkCallback();
    }
    else
    {
        if (gLinkCallback == NULL)
        {
            gLinkCallback = LinkCB_ReadyCloseLink;
            gReadyCloseLinkType = type;
        }
    }
}

void SetCloseLinkCallback(void)
{
    if (gWirelessCommType == TRUE)
    {
        Rfu_SetCloseLinkCallback();
    }
    else
    {
        if (gLinkCallback != NULL)
        {
            sReadyCloseLinkAttempts++;
        }
        else
        {
            gLinkCallback = LinkCB_ReadyCloseLink;
            gReadyCloseLinkType = 0;
        }
    }
}

static void LinkCB_ReadyCloseLink(void)
{
    if (gLastRecvQueueCount == 0)
    {
        BuildSendCmd(LINKCMD_READY_CLOSE_LINK);
        gLinkCallback = LinkCB_WaitCloseLink;
    }
}

static void LinkCB_WaitCloseLink(void)
{
    int i;
    unsigned count;

    // Wait for all players to be ready
    u32 linkPlayerCount = GetLinkPlayerCount();
    count = 0;
    for (i = 0; i < linkPlayerCount; i++)
    {
        if (gReadyToCloseLink[i])
            count++;
    }

    if (count == linkPlayerCount)
    {
        // All ready, close link
        gBattleTypeFlags &= ~BATTLE_TYPE_LINK_IN_BATTLE;
        gLinkVSyncDisabled = TRUE;
        CloseLink();
        gLinkCallback = NULL;
    }
}

// Used instead of SetCloseLinkCallback when disconnecting from an attempt to link with a foreign game
void SetCloseLinkCallbackHandleJP(void)
{
    if (gWirelessCommType == TRUE)
    {
        Rfu_SetCloseLinkCallback();
    }
    else
    {
        if (gLinkCallback != NULL)
        {
            sReadyCloseLinkAttempts++;
        }
        else
        {
            gLinkCallback = LinkCB_ReadyCloseLinkWithJP;
            gReadyCloseLinkType = 0;
        }
    }
}

static void LinkCB_ReadyCloseLinkWithJP(void)
{
    if (gLastRecvQueueCount == 0)
    {
        BuildSendCmd(LINKCMD_READY_CLOSE_LINK);
        gLinkCallback = LinkCB_WaitCloseLinkWithJP;
    }
}

static void LinkCB_WaitCloseLinkWithJP(void)
{
    int i;
    unsigned count;
    u32 linkPlayerCount;

    linkPlayerCount = GetLinkPlayerCount();
    count = 0;

    // Wait for all non-foreign players to be ready
    for (i = 0; i < linkPlayerCount; i++)
    {
        // Rather than communicate with the foreign game
        // just assume they're ready to disconnect
        if (gLinkPlayers[i].language == LANGUAGE_JAPANESE)
            count++;
        else if (gReadyToCloseLink[i])
            count++;
    }

    if (count == linkPlayerCount)
    {
        // All ready, close link
        gBattleTypeFlags &= ~BATTLE_TYPE_LINK_IN_BATTLE;
        gLinkVSyncDisabled = TRUE;
        CloseLink();
        gLinkCallback = NULL;
    }
}

void SetLinkStandbyCallback(void)
{
    if (gWirelessCommType == TRUE)
    {
        Rfu_SetLinkStandbyCallback();
    }
    else
    {
        if (gLinkCallback == NULL)
            gLinkCallback = LinkCB_Standby;
    }
}

static void LinkCB_Standby(void)
{
    if (gLastRecvQueueCount == 0)
    {
        BuildSendCmd(LINKCMD_READY_EXIT_STANDBY);
        gLinkCallback = LinkCB_StandbyForAll;
    }
}

static void LinkCB_StandbyForAll(void)
{
    u32 i;
    u32 linkPlayerCount = GetLinkPlayerCount();
    for (i = 0; i < linkPlayerCount; i++)
    {
        if (!gReadyToExitStandby[i])
            break;
    }

    // If true, all players ready to exit standby
    if (i == linkPlayerCount)
    {
        for (i = 0; i < MAX_LINK_PLAYERS; i++)
            gReadyToExitStandby[i] = FALSE;

        gLinkCallback = NULL;
    }
}

static void TrySetLinkErrorBuffer(void)
{
    // Check if a link error has occurred
    if (sLinkOpen && EXTRACT_LINK_ERRORS(gLinkStatus))
    {
        // Link error has occurred, handle message details if
        // necessary, then stop the link.
        if (!gSuppressLinkErrorMessage)
        {
            sLinkErrorBuffer.status = gLinkStatus;
            sLinkErrorBuffer.lastRecvQueueCount = gLastRecvQueueCount;
            sLinkErrorBuffer.lastSendQueueCount = gLastSendQueueCount;
            SetMainCallback2(CB2_LinkError);
        }
        gLinkErrorOccurred = TRUE;
        CloseLink();
    }
}

void SetLinkErrorBuffer(u32 status, u32 lastSendQueueCount, u32 lastRecvQueueCount, bool32 disconnected)
{
    sLinkErrorBuffer.status = status;
    sLinkErrorBuffer.lastSendQueueCount = lastSendQueueCount;
    sLinkErrorBuffer.lastRecvQueueCount = lastRecvQueueCount;
    sLinkErrorBuffer.disconnected = disconnected;
}

void CB2_LinkError(void)
{
    u32 *tilemapBuffer;

    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    m4aMPlayStop(&gMPlayInfo_SE1);
    m4aMPlayStop(&gMPlayInfo_SE2);
    m4aMPlayStop(&gMPlayInfo_SE3);
    InitHeap(gHeap, HEAP_SIZE);
    ResetSpriteData();
    FreeAllSpritePalettes();
    ResetPaletteFadeControl();
    SetBackdropFromColor(RGB_BLACK);
    ResetTasks();
    ScanlineEffect_Stop();
    if (gWirelessCommType)
    {
        if (!sLinkErrorBuffer.disconnected)
            gWirelessCommType = 3;

        ResetLinkRfuGFLayer();
    }
    SetVBlankCallback(VBlankCB_LinkError);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sLinkErrorBgTemplates, ARRAY_COUNT(sLinkErrorBgTemplates));
    sLinkErrorBgTilemapBuffer = tilemapBuffer = Alloc(BG_SCREEN_SIZE);
    SetBgTilemapBuffer(1, tilemapBuffer);
    if (InitWindows(sLinkErrorWindowTemplates))
    {
        DeactivateAllTextPrinters();
        ResetTempTileDataBuffers();
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BG0HOFS, 0);
        SetGpuReg(REG_OFFSET_BG0VOFS, 0);
        SetGpuReg(REG_OFFSET_BG1HOFS, 0);
        SetGpuReg(REG_OFFSET_BG1VOFS, 0);
        ClearGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_WIN1_ON | DISPCNT_OBJWIN_ON);
        LoadPalette(gStandardMenuPalette, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        gSoftResetDisabled = FALSE;
        CreateTask(Task_DestroySelf, 0);
        StopMapMusic();
        gMain.callback1 = NULL;
        RunTasks();
        AnimateSprites();
        BuildOamBuffer();
        UpdatePaletteFade();
        SetMainCallback2(CB2_PrintErrorMessage);
    }
}

static void ErrorMsg_MoveCloserToPartner(void)
{
    LoadBgTiles(0, sCommErrorBg_Gfx, 0x20, 0);
    DecompressAndLoadBgGfxUsingHeap(1, sWirelessLinkDisplayGfx, FALSE, 0, 0);
    CopyToBgTilemapBuffer(1, sWirelessLinkDisplayTilemap, 0, 0);
    CopyBgTilemapBufferToVram(1);
    LoadPalette(sWirelessLinkDisplayPal, BG_PLTT_ID(0), sizeof(sWirelessLinkDisplayPal));
    FillWindowPixelBuffer(WIN_LINK_ERROR_TOP, PIXEL_FILL(0));
    FillWindowPixelBuffer(WIN_LINK_ERROR_BOTTOM, PIXEL_FILL(0));
    AddTextPrinterParameterized3(WIN_LINK_ERROR_TOP, FONT_SHORT_COPY_1, 2, 6, sTextColors, 0, gText_CommErrorEllipsis);
    AddTextPrinterParameterized3(WIN_LINK_ERROR_BOTTOM, FONT_SHORT_COPY_1, 2, 1, sTextColors, 0, gText_MoveCloserToLinkPartner);
    PutWindowTilemap(WIN_LINK_ERROR_TOP);
    PutWindowTilemap(WIN_LINK_ERROR_BOTTOM);
    CopyWindowToVram(WIN_LINK_ERROR_TOP, COPYWIN_NONE); // Does nothing
    CopyWindowToVram(WIN_LINK_ERROR_BOTTOM, COPYWIN_FULL);
}

static void ErrorMsg_CheckConnections(void)
{
    LoadBgTiles(0, sCommErrorBg_Gfx, 0x20, 0);
    FillWindowPixelBuffer(WIN_LINK_ERROR_MID, PIXEL_FILL(0));
    FillWindowPixelBuffer(WIN_LINK_ERROR_BOTTOM, PIXEL_FILL(0));
    AddTextPrinterParameterized3(WIN_LINK_ERROR_MID, FONT_SHORT_COPY_1, 2, 0, sTextColors, 0, gText_CommErrorCheckConnections);
    PutWindowTilemap(WIN_LINK_ERROR_MID);
    PutWindowTilemap(WIN_LINK_ERROR_BOTTOM);
    CopyWindowToVram(WIN_LINK_ERROR_MID, COPYWIN_NONE); // Does nothing
    CopyWindowToVram(WIN_LINK_ERROR_BOTTOM, COPYWIN_FULL);
}

static void CB2_PrintErrorMessage(void)
{
    switch (gMain.state)
    {
        case  00:
            // Below is only true for the RFU, so the other error
            // type is inferred to be from a wired connection
            if (sLinkErrorBuffer.disconnected)
                ErrorMsg_MoveCloserToPartner();
            else
                ErrorMsg_CheckConnections();
            break;
        case  02:
            ShowBg(0);
            if (sLinkErrorBuffer.disconnected)
                ShowBg(1);
            break;
        case  30:
            PlaySE(SE_BOO);
            break;
        case  60:
            PlaySE(SE_BOO);
            break;
        case  90:
            PlaySE(SE_BOO);
            break;
        case 130:
            if (gWirelessCommType == 2)
                AddTextPrinterParameterized3(WIN_LINK_ERROR_TOP, FONT_SHORT_COPY_1, 2, 20, sTextColors, 0, gText_ABtnTitleScreen);
            else if (gWirelessCommType == 1)
                AddTextPrinterParameterized3(WIN_LINK_ERROR_TOP, FONT_SHORT_COPY_1, 2, 20, sTextColors, 0, gText_ABtnRegistrationCounter);
            break;
    }
    if (gMain.state == 160)
    {
        if (gWirelessCommType == 1)
        {
            if (JOY_NEW(A_BUTTON))
            {
                PlaySE(SE_PIN);
                gWirelessCommType = 0;
                sLinkErrorBuffer.disconnected = FALSE;
                ReloadSave();
            }
        }
        else if (gWirelessCommType == 2)
        {
            if (JOY_NEW(A_BUTTON))
            {
                rfu_REQ_stopMode();
                rfu_waitREQComplete();
                DoSoftReset();
            }
        }
    }

    if (gMain.state != 160)
        gMain.state++;
}

// TODO: there might be a file boundary here, let's name it

bool32 GetSioMultiSI(void)
{
    return (REG_SIOCNT & SIO_MULTI_SI) != 0;
}

static bool32 IsSioMultiMaster(void)
{
    return (REG_SIOCNT & SIO_MULTI_SD) && (REG_SIOCNT & SIO_MULTI_SI) == 0;
}

bool32 IsLinkConnectionEstablished(void)
{
    return EXTRACT_CONN_ESTABLISHED(gLinkStatus);
}

void SetSuppressLinkErrorMessage(bool32 flag)
{
    gSuppressLinkErrorMessage = flag;
}

bool32 HasLinkErrorOccurred(void)
{
    return gLinkErrorOccurred;
}

void LocalLinkPlayerToBlock(void)
{
    struct LinkPlayerBlock *block;

    InitLocalLinkPlayer();
    block = &gLocalLinkPlayerBlock;
    block->linkPlayer = gLocalLinkPlayer;
    memcpy(block->magic1, sASCIIGameFreakInc, sizeof(block->magic1) - 1);
    memcpy(block->magic2, sASCIIGameFreakInc, sizeof(block->magic2) - 1);
    memcpy(gBlockSendBuffer, block, sizeof(*block));
}

void LinkPlayerFromBlock(u32 who)
{
    u32 who_ = who;
    struct LinkPlayerBlock *block;
    struct LinkPlayer *player;

    block = (struct LinkPlayerBlock *)gBlockRecvBuffer[who_];
    player = &gLinkPlayers[who_];
    *player = block->linkPlayer;
    ConvertLinkPlayerName(player);

    if (strcmp(block->magic1, sASCIIGameFreakInc) != 0
     || strcmp(block->magic2, sASCIIGameFreakInc) != 0)
        SetMainCallback2(CB2_LinkError);
}

// When this function returns TRUE the callbacks are skipped
bool32 HandleLinkConnection(void)
{
    bool32 main1Failed, main2Failed;

    if (gWirelessCommType == 0)
    {
        gLinkStatus = LinkMain1(&gShouldAdvanceLinkState, gSendCmd, gRecvCmds);
        LinkMain2(&gMain.heldKeys);
        if ((gLinkStatus & LINK_STAT_RECEIVED_NOTHING) && IsSendingKeysOverCable() == TRUE)
            return TRUE;
    }
    else
    {
        main1Failed = RfuMain1(); // Always returns FALSE
        main2Failed = RfuMain2();
        if (IsSendingKeysOverCable() == TRUE)
        {
            // This will never be reached.
            // IsSendingKeysOverCable is always FALSE for wireless communication
            if (main1Failed == TRUE || IsRfuRecvQueueEmpty() || main2Failed)
                return TRUE;
        }
    }
    return FALSE;
}

void SetWirelessCommType1(void)
{
    if (gReceivedRemoteLinkPlayers == 0)
        gWirelessCommType = 1;
}

static void SetWirelessCommType0_Internal(void)
{
    if (gReceivedRemoteLinkPlayers == 0)
        gWirelessCommType = 0;
}

void SetWirelessCommType0(void)
{
    if (gReceivedRemoteLinkPlayers == 0)
        gWirelessCommType = 0;
}

u32 GetLinkRecvQueueLength(void)
{
    if (gWirelessCommType != 0)
        return GetRfuRecvQueueLength();

    return gLink.recvQueue.count;
}

bool32 IsLinkRecvQueueAtOverworldMax(void)
{
    if (GetLinkRecvQueueLength() >= OVERWORLD_RECV_QUEUE_MAX)
        return TRUE;

    return FALSE;
}

// Unused
u32 GetWirelessCommType(void)
{
    return gWirelessCommType;
}

void ConvertLinkPlayerName(struct LinkPlayer *player)
{
    player->progressFlagsCopy = player->progressFlags; // ? Perhaps relocating for a longer name field
    ConvertInternationalString(player->name, player->language);
}

static void DisableSerial(void)
{
    DisableInterrupts(INTR_FLAG_TIMER3 | INTR_FLAG_SERIAL);
    REG_SIOCNT = SIO_MULTI_MODE;
    REG_TMCNT_H(3) = 0;
    REG_IF = INTR_FLAG_TIMER3 | INTR_FLAG_SERIAL;
    REG_SIOMLT_SEND = 0;
    REG_SIOMLT_RECV = 0;
    CpuFill32(0, &gLink, sizeof(gLink));
}

static void EnableSerial(void)
{
    DisableInterrupts(INTR_FLAG_TIMER3 | INTR_FLAG_SERIAL);
    REG_RCNT = 0;
    REG_SIOCNT = SIO_MULTI_MODE;
    REG_SIOCNT |= SIO_115200_BPS | SIO_INTR_ENABLE;
    EnableInterrupts(INTR_FLAG_SERIAL);
    REG_SIOMLT_SEND = 0;
    CpuFill32(0, &gLink, sizeof(gLink));
    sNumVBlanksWithoutSerialIntr = 0;
    sSendNonzeroCheck = 0;
    sRecvNonzeroCheck = 0;
    sChecksumAvailable = 0;
    sHandshakePlayerCount = 0;
    gLastSendQueueCount = 0;
    gLastRecvQueueCount = 0;
}

void ResetSerial(void)
{
    EnableSerial();
    DisableSerial();
}

// link_main1.c

u32 LinkMain1(u32 *shouldAdvanceLinkState, u32 *sendCmd, u32 (*recvCmds)[CMD_LENGTH])
{
    u32 retVal;
    u32 retVal2;

    switch (gLink.state)
    {
        case LINK_STATE_START0:
            DisableSerial();
            gLink.state = 1;
            break;
        case LINK_STATE_START1:
            if (*shouldAdvanceLinkState == 1)
            {
                EnableSerial();
                gLink.state = 2;
            }
            break;
        case LINK_STATE_HANDSHAKE:
            switch (*shouldAdvanceLinkState)
            {
                default:
                    CheckMasterOrSlave();
                    break;
                case 1:
                    if (gLink.isMaster == LINK_MASTER && gLink.playerCount > 1)
                        gLink.handshakeAsMaster = TRUE;
                    break;
                case 2:
                    gLink.state = LINK_STATE_START0;
                    REG_SIOMLT_SEND = 0;
                    break;
            }
            break;
        case LINK_STATE_INIT_TIMER:
            InitTimer();
            gLink.state = LINK_STATE_CONN_ESTABLISHED;
            // fallthrough
        case LINK_STATE_CONN_ESTABLISHED:
            EnqueueSendCmd(sendCmd);
            DequeueRecvCmds(recvCmds);
            break;
    }
    *shouldAdvanceLinkState = 0;
    retVal = gLink.localId;
    retVal |= (gLink.playerCount << LINK_STAT_PLAYER_COUNT_SHIFT);
    if (gLink.isMaster == LINK_MASTER)
    {
        retVal |= LINK_STAT_MASTER;
    }
    {
        u32 receivedNothing = gLink.receivedNothing << LINK_STAT_RECEIVED_NOTHING_SHIFT;
        u32 link_field_F = gLink.link_field_F << LINK_STAT_UNK_FLAG_9_SHIFT;
        u32 hardwareError = gLink.hardwareError << LINK_STAT_ERROR_HARDWARE_SHIFT;
        u32 badChecksum = gLink.badChecksum << LINK_STAT_ERROR_CHECKSUM_SHIFT;
        u32 queueFull = gLink.queueFull << LINK_STAT_ERROR_QUEUE_FULL_SHIFT;
        u32 val;

        if (gLink.state == LINK_STATE_CONN_ESTABLISHED)
        {
            val = LINK_STAT_CONN_ESTABLISHED;
            val |= receivedNothing;
            val |= retVal;
            val |= link_field_F;
            val |= hardwareError;
            val |= badChecksum;
            val |= queueFull;
        }
        else
        {
            val = retVal;
            val |= receivedNothing;
            val |= link_field_F;
            val |= hardwareError;
            val |= badChecksum;
            val |= queueFull;
        }

        retVal = val;
    }

    if (gLink.lag == LAG_MASTER)
        retVal |= LINK_STAT_ERROR_LAG_MASTER;

    if (gLink.localId >= MAX_LINK_PLAYERS)
        retVal |= LINK_STAT_ERROR_INVALID_ID;

    retVal2 = retVal;
    if (gLink.lag == LAG_SLAVE)
        retVal2 |= LINK_STAT_ERROR_LAG_SLAVE;

    return retVal2;
}

static void CheckMasterOrSlave(void)
{
    u32 terminals;

    terminals = *(vu32 *)REG_ADDR_SIOCNT & (SIO_MULTI_SD | SIO_MULTI_SI);
    if (terminals == SIO_MULTI_SD && gLink.localId == 0)
    {
        gLink.isMaster = LINK_MASTER;
    }
    else
    {
        gLink.isMaster = LINK_SLAVE;
    }
}

static void InitTimer(void)
{
    if (gLink.isMaster)
    {
        REG_TM3CNT_L = -197;
        REG_TM3CNT_H = TIMER_64CLK | TIMER_INTR_ENABLE;
        EnableInterrupts(INTR_FLAG_TIMER3);
    }
}

static void EnqueueSendCmd(u32 *sendCmd)
{
    u32 i;
    u32 offset;

    gLinkSavedIme = REG_IME;
    REG_IME = 0;
    if (gLink.sendQueue.count < QUEUE_CAPACITY)
    {
        offset = gLink.sendQueue.pos + gLink.sendQueue.count;
        if (offset >= QUEUE_CAPACITY)
        {
            offset -= QUEUE_CAPACITY;
        }
        for (i = 0; i < CMD_LENGTH; i++)
        {
            sSendNonzeroCheck |= *sendCmd;
            gLink.sendQueue.data[i][offset] = *sendCmd;
            *sendCmd = 0;
            sendCmd++;
        }
    }
    else
    {
        gLink.queueFull = QUEUE_FULL_SEND;
    }
    if (sSendNonzeroCheck)
    {
        gLink.sendQueue.count++;
        sSendNonzeroCheck = 0;
    }
    REG_IME = gLinkSavedIme;
    gLastSendQueueCount = gLink.sendQueue.count;
}


static void DequeueRecvCmds(u32 (*recvCmds)[CMD_LENGTH])
{
    u32 i;
    u32 j;

    gLinkSavedIme = REG_IME;
    REG_IME = 0;
    if (gLink.recvQueue.count == 0)
    {
        for (i = 0; i < gLink.playerCount; i++)
        {
            for (j = 0; j < CMD_LENGTH; j++)
            {
                recvCmds[i][j] = 0;
            }
        }

        gLink.receivedNothing = TRUE;
    }
    else
    {
        for (i = 0; i < gLink.playerCount; i++)
        {
            for (j = 0; j < CMD_LENGTH; j++)
            {
                recvCmds[i][j] = gLink.recvQueue.data[i][j][gLink.recvQueue.pos];
            }
        }
        gLink.recvQueue.count--;
        gLink.recvQueue.pos++;
        if (gLink.recvQueue.pos >= QUEUE_CAPACITY)
        {
            gLink.recvQueue.pos = 0;
        }
        gLink.receivedNothing = FALSE;
    }
    REG_IME = gLinkSavedIme;
}

// link_intr.c

void LinkVSync(void)
{
    if (gLink.isMaster)
    {
        switch (gLink.state)
        {
            case LINK_STATE_CONN_ESTABLISHED:
                if (gLink.serialIntrCounter < 9)
                {
                    if (gLink.hardwareError != TRUE)
                    {
                        gLink.lag = LAG_MASTER;
                    }
                    else
                    {
                        StartTransfer();
                    }
                }
                else if (gLink.lag != LAG_MASTER)
                {
                    gLink.serialIntrCounter = 0;
                    StartTransfer();
                }
                break;
            case LINK_STATE_HANDSHAKE:
                StartTransfer();
                break;
        }
    }
    else if (gLink.state == LINK_STATE_CONN_ESTABLISHED || gLink.state == LINK_STATE_HANDSHAKE)
    {
        if (++sNumVBlanksWithoutSerialIntr > 10)
        {
            if (gLink.state == LINK_STATE_CONN_ESTABLISHED)
            {
                gLink.lag = LAG_SLAVE;
            }
            if (gLink.state == LINK_STATE_HANDSHAKE)
            {
                gLink.playerCount = 0;
                gLink.link_field_F = FALSE;
            }
        }
    }
}

void Timer3Intr(void)
{
    StopTimer();
    StartTransfer();
}

void SerialCB(void)
{
    gLink.localId = SIO_MULTI_CNT->id;
    switch (gLink.state)
    {
        case LINK_STATE_CONN_ESTABLISHED:
            gLink.hardwareError = SIO_MULTI_CNT->error;
            DoRecv();
            DoSend();
            SendRecvDone();
            break;
        case LINK_STATE_HANDSHAKE:
            if (DoHandshake())
            {
                if (gLink.isMaster)
                {
                    gLink.state = LINK_STATE_INIT_TIMER;
                    gLink.serialIntrCounter = 8;
                }
                else
                {
                    gLink.state = LINK_STATE_CONN_ESTABLISHED;
                }
            }
            break;
    }
    gLink.serialIntrCounter++;
    sNumVBlanksWithoutSerialIntr = 0;
    if (gLink.serialIntrCounter == 8)
    {
        gLastRecvQueueCount = gLink.recvQueue.count;
    }
}

static void StartTransfer(void)
{
    REG_SIOCNT |= SIO_START;
}

static bool32 DoHandshake(void)
{
    u32 i;
    u32 playerCount;
    u32 minRecv;

    playerCount = 0;
    minRecv = 0xFFFF;
    if (gLink.handshakeAsMaster == TRUE)
    {
        REG_SIOMLT_SEND = MASTER_HANDSHAKE;
    }
    else
    {
        REG_SIOMLT_SEND = SLAVE_HANDSHAKE;
    }
    *(u64 *)gLink.handshakeBuffer = REG_SIOMLT_RECV;
    REG_SIOMLT_RECV = 0;
    gLink.handshakeAsMaster = FALSE;
    for (i = 0; i < MAX_LINK_PLAYERS; i++)
    {
        if ((gLink.handshakeBuffer[i] & ~0x3) == SLAVE_HANDSHAKE || gLink.handshakeBuffer[i] == MASTER_HANDSHAKE)
        {
            playerCount++;
            if (minRecv > gLink.handshakeBuffer[i] && gLink.handshakeBuffer[i] != 0)
                minRecv = gLink.handshakeBuffer[i];
        }
        else
        {
            if (gLink.handshakeBuffer[i] != 0xFFFF)
                playerCount = 0;
            break;
        }
    }
    gLink.playerCount = playerCount;
    if (gLink.playerCount > 1 && gLink.playerCount == sHandshakePlayerCount && gLink.handshakeBuffer[0] == MASTER_HANDSHAKE)
    {
        return TRUE;
    }
    if (gLink.playerCount > 1)
    {
        gLink.link_field_F = (minRecv & 3) + 1;
    }
    else
    {
        gLink.link_field_F = 0;
    }
    sHandshakePlayerCount = gLink.playerCount;
    return FALSE;
}

static void DoRecv(void)
{
    u32 recv[4];
    u32 i;
    u32 index;

    *(u64 *)recv = REG_SIOMLT_RECV;
    if (gLink.sendCmdIndex == 0)
    {
        for (i = 0; i < gLink.playerCount; i++)
        {
            if (gLink.checksum != recv[i] && sChecksumAvailable)
            {
                gLink.badChecksum = TRUE;
            }
        }
        gLink.checksum = 0;
        sChecksumAvailable = TRUE;
    }
    else
    {
        index = gLink.recvQueue.pos + gLink.recvQueue.count;
        if (index >= QUEUE_CAPACITY)
        {
            index -= QUEUE_CAPACITY;
        }
        if (gLink.recvQueue.count < QUEUE_CAPACITY)
        {
            for (i = 0; i < gLink.playerCount; i++)
            {
                gLink.checksum += recv[i];
                sRecvNonzeroCheck |= recv[i];
                gLink.recvQueue.data[i][gLink.recvCmdIndex][index] = recv[i];
            }
        }
        else
        {
            gLink.queueFull = QUEUE_FULL_RECV;
        }
        gLink.recvCmdIndex++;
        if (gLink.recvCmdIndex == CMD_LENGTH && sRecvNonzeroCheck)
        {
            gLink.recvQueue.count++;
            sRecvNonzeroCheck = 0;
        }
    }
}

static void DoSend(void)
{
    if (gLink.sendCmdIndex == CMD_LENGTH)
    {
        REG_SIOMLT_SEND = gLink.checksum;
        if (!sSendBufferEmpty)
        {
            gLink.sendQueue.count--;
            gLink.sendQueue.pos++;
            if (gLink.sendQueue.pos >= QUEUE_CAPACITY)
            {
                gLink.sendQueue.pos = 0;
            }
        }
        else
        {
            sSendBufferEmpty = FALSE;
        }
    }
    else
    {
        if (!sSendBufferEmpty && gLink.sendQueue.count == 0)
        {
            sSendBufferEmpty = TRUE;
        }
        if (sSendBufferEmpty)
        {
            REG_SIOMLT_SEND = 0;
        }
        else
        {
            REG_SIOMLT_SEND = gLink.sendQueue.data[gLink.sendCmdIndex][gLink.sendQueue.pos];
        }
        gLink.sendCmdIndex++;
    }
}

static void StopTimer(void)
{
    if (gLink.isMaster)
    {
        REG_TM3CNT_H &= ~TIMER_ENABLE;
        REG_TM3CNT_L = -197;
    }
}

static void SendRecvDone(void)
{
    if (gLink.recvCmdIndex == CMD_LENGTH)
    {
        gLink.sendCmdIndex = 0;
        gLink.recvCmdIndex = 0;
    }
    else if (gLink.isMaster)
    {
        REG_TM3CNT_H |= TIMER_ENABLE;
    }
}

void ResetSendBuffer(void)
{
    u32 i;
    u32 j;

    gLink.sendQueue.count = 0;
    gLink.sendQueue.pos = 0;
    for (i = 0; i < CMD_LENGTH; i++)
    {
        for (j = 0; j < QUEUE_CAPACITY; j++)
            gLink.sendQueue.data[i][j] = LINKCMD_NONE;
    }
}

void ResetRecvBuffer(void)
{
    u32 i;
    u32 j;
    u32 k;

    gLink.recvQueue.count = 0;
    gLink.recvQueue.pos = 0;
    for (i = 0; i < MAX_LINK_PLAYERS; i++)
    {
        for (j = 0; j < CMD_LENGTH; j++)
        {
            for (k = 0; k < QUEUE_CAPACITY; k++)
                gLink.recvQueue.data[i][j][k] = LINKCMD_NONE;
        }
    }
}

bool32 ShouldCheckForUnionRoom(void)
{
    if (OW_UNION_DISABLE_CHECK)
        return FALSE;

    if (OW_FLAG_MOVE_UNION_ROOM_CHECK == 0)
        return TRUE;

    if (FlagGet(OW_FLAG_MOVE_UNION_ROOM_CHECK))
        return TRUE;

    return FALSE;
}
