#ifndef GUARD_POKEDEX_H
#define GUARD_POKEDEX_H

extern u8 gUnusedPokedexU8;
extern void (*gPokedexVBlankCB)(void);

void ResetPokedex(void);
u32 GetNationalPokedexCount(u8);
u32 GetHoennPokedexCount(u8);
u8 DisplayCaughtMonDexPage(u32 species, bool32 isShiny, u32 personality);
s8 GetSetPokedexFlag(u32 nationalNum, u8 caseId);
void DrawFootprint(u8 windowId, u32 species);
u32 CreateMonSpriteFromNationalDexNumber(u32, s16, s16, u32);
bool16 HasAllHoennMons(void);
void ResetPokedexScrollPositions(void);
bool16 HasAllMons(void);
void CB2_OpenPokedex(void);
void PrintMonMeasurements(u32 species, u32 owned);
u8* ConvertMonHeightToString(u32 height);
u8* ConvertMonWeightToString(u32 weight);

#endif // GUARD_POKEDEX_H
