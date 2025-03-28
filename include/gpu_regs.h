#ifndef GUARD_GPU_REGS_H
#define GUARD_GPU_REGS_H

// Exported type declarations

// Exported RAM declarations

// Exported ROM declarations
void InitGpuRegManager(void);
void CopyBufferedValuesToGpuRegs(void);
void SetGpuReg(u8 regOffset, u32 value);
void SetGpuReg_ForcedBlank(u8 regOffset, u32 value);
u32 GetGpuReg(u8 regOffset);
void SetGpuRegBits(u8 regOffset, u32 mask);
void ClearGpuRegBits(u8 regOffset, u32 mask);
void EnableInterrupts(u32 mask);
void DisableInterrupts(u32 mask);

#endif //GUARD_GPU_REGS_H
