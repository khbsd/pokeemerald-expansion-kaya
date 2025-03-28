#ifndef GUARD_POKEMON_ICON_H
#define GUARD_POKEMON_ICON_H

extern const struct SpritePalette gMonIconPaletteTable[];

const u8 *GetMonIconTiles(u32 species, u32 personality);
void TryLoadAllMonIconPalettesAtOffset(u32 offset);
u8 GetValidMonIconPalIndex(u32 species);
const u8 *GetMonIconPtr(u32 speciesId, u32 personality);
const u32 *GetValidMonIconPalettePtr(u32 speciesId);
u32 GetIconSpecies(u32 species, u32 personality);
u32 GetUnownLetterByPersonality(u32 personality);
u32 GetIconSpeciesNoPersonality(u32 speciesId);
void LoadMonIconPalettes(void);
void LoadMonIconPalette(u32 species);
void FreeMonIconPalettes(void);
u8 CreateMonIconNoPersonality(u32 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority);
void FreeMonIconPalette(u32 species);
void FreeAndDestroyMonIconSprite(struct Sprite *sprite);
u8 CreateMonIcon(u32 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, u32 personality);
u8 UpdateMonIconFrame(struct Sprite *sprite);
void LoadMonIconPalette(u32 species);
void LoadMonIconPalettePersonality(u32 species, u32 personality);
void SpriteCB_MonIcon(struct Sprite *sprite);
void SetPartyHPBarSprite(struct Sprite *sprite, u8 animNum);
u8 GetMonIconPaletteIndexFromSpecies(u32 species);
void SafeFreeMonIconPalette(u32 species);

#endif // GUARD_POKEMON_ICON_H
