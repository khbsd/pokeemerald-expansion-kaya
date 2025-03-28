#ifndef GUARD_GBA_FLASH_INTERNAL_H
#define GUARD_GBA_FLASH_INTERNAL_H

#define FLASH_BASE ((u8 *)0xE000000)

#define FLASH_WRITE(addr, data) ((*(vu8 *)(FLASH_BASE + (addr))) = (data))

#define FLASH_ROM_SIZE_1M 131072 // 1 megabit ROM

#define SECTORS_PER_BANK 16

struct FlashSector
{
    u32 size;
    u8 shift;
    u32 count;
    u32 top;
};

struct FlashType {
    u32 romSize;
    struct FlashSector sector;
    u32 wait[2]; // game pak bus read/write wait

    // TODO: add support for anonymous unions/structs if possible
    union {
        struct {
        u8 makerId;
        u8 deviceId;
        } separate;
        u32 joined;
    } ids;
};

struct FlashSetupInfo
{
    u32 (*programFlashByte)(u32, u32, u8);
    u32 (*programFlashSector)(u32, u8 *);
    u32 (*eraseFlashChip)(void);
    u32 (*eraseFlashSector)(u32);
    u32 (*WaitForFlashWrite)(u8, u8 *, u8);
    const u32 *maxTime;
    struct FlashType type;
};

extern u32 gFlashNumRemainingBytes;

extern u32 (*ProgramFlashByte)(u32, u32, u8);
extern u32 (*ProgramFlashSector)(u32, u8 *);
extern u32 (*EraseFlashChip)(void);
extern u32 (*EraseFlashSector)(u32);
extern u32 (*WaitForFlashWrite)(u8, u8 *, u8);
extern const u32 *gFlashMaxTime;
extern const struct FlashType *gFlash;

extern u8 (*PollFlashStatus)(u8 *);
extern u8 gFlashTimeoutFlag;

extern const struct FlashSetupInfo MX29L010;
extern const struct FlashSetupInfo LE26FV10N1TS;
extern const struct FlashSetupInfo DefaultFlash;

void SwitchFlashBank(u8 bankNum);
u32 ReadFlashId(void);
void StartFlashTimer(u8 phase);
void SetReadFlash1(u32 *dest);
void StopFlashTimer(void);
void ReadFlash(u32 sectorNum, u32 offset, u8 *dest, u32 size);

u32 WaitForFlashWrite_Common(u8 phase, u8 *addr, u8 lastData);

u32 EraseFlashChip_MX(void);
u32 EraseFlashSector_MX(u32 sectorNum);
u32 ProgramFlashByte_MX(u32 sectorNum, u32 offset, u8 data);
u32 ProgramFlashSector_MX(u32 sectorNum, u8 *src);

#endif // GUARD_GBA_FLASH_INTERNAL_H
