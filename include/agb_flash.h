#ifndef GUARD_AGB_FLASH_H
#define GUARD_AGB_FLASH_H

// Exported type declarations

// Exported RAM declarations

// Exported ROM declarations

u32 SetFlashTimerIntr(u8 timerNum, void (**intrFunc)(void));
u32 IdentifyFlash(void);
u32 ProgramFlashSectorAndVerify(u32 sectorNum, u8 *src);

#endif //GUARD_AGB_FLASH_H
