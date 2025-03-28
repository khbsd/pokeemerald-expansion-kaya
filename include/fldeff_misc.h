#ifndef GUARD_FLDEFF_MISC_H
#define GUARD_FLDEFF_MISC_H

void ComputerScreenOpenEffect(u32 increment, u32 unused, u8 priority);
void ComputerScreenCloseEffect(u32 increment, u32 unused, u8 priority);
bool32 IsComputerScreenOpenEffectActive(void);
bool32 IsComputerScreenCloseEffectActive(void);
bool32 SetUpFieldMove_SecretPower(void);
bool32 FldEff_UseSecretPowerCave(void);
bool32 FldEff_SecretPowerCave(void);
bool32 FldEff_UseSecretPowerTree(void);
bool32 FldEff_SecretPowerTree(void);
bool32 FldEff_UseSecretPowerShrub(void);
bool32 FldEff_SecretPowerShrub(void);
bool32 FldEff_SecretBasePCTurnOn(void);
void DoSecretBasePCTurnOffEffect(void);
void PopSecretBaseBalloon(s32 metatileId, s32 x, s32 y);
bool32 FldEff_Nop47(void);
bool32 FldEff_Nop48(void);
void ShatterSecretBaseBreakableDoor(s32 x, s32 y);
void PlaySecretBaseMusicNoteMatSound(s32 metatileId);
void DoSecretBaseGlitterMatSparkle(void);
bool32 FldEff_SandPillar(void);
void InteractWithShieldOrTVDecoration(void);
bool32 IsLargeBreakableDecoration(u32 metatileId, bool32 checkBase);
void FldEffPoison_Start(void);
bool32 FldEffPoison_IsActive(void);
void DoWateringBerryTreeAnim(void);
u8 CreateRecordMixingLights(void);
void DestroyRecordMixingLights(void);

extern const struct SpritePalette gSpritePalette_SecretPower_Cave;
extern const struct SpritePalette gSpritePalette_SecretPower_Plant;
extern const struct SpritePalette gFieldEffectObjectPaletteInfo9;
extern const u32 gTilesetPalettes_SecretBase[][16];

#endif //GUARD_FLDEFF_MISC_H
