#ifndef GUARD_POKEDEX_CRY_SCREEN_H
#define GUARD_POKEDEX_CRY_SCREEN_H

struct CryScreenWindow
{
    u32 unk0; // Assigned to val that's never read
    u8 unk2;  // Never read
    u8 paletteNo;
    u8 xPos;
    u8 yPos;
};

extern u8 gDexCryScreenState;

bool32 LoadCryWaveformWindow(struct CryScreenWindow *, u8);
void UpdateCryWaveformWindow(u8);
void CryScreenPlayButton(u32);
bool32 LoadCryMeter(struct CryScreenWindow *, u8);
void FreeCryScreen(void);

#endif
