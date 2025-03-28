#ifndef GUARD_BATTLE_GFX_SFX_UTIL_H
#define GUARD_BATTLE_GFX_SFX_UTIL_H

void AllocateBattleSpritesData(void);
void FreeBattleSpritesData(void);
u32 ChooseMoveAndTargetInBattlePalace(u32 battler);
void SpriteCB_WaitForBattlerBallReleaseAnim(struct Sprite *sprite);
void SpriteCB_TrainerSlideIn(struct Sprite *sprite);
void SpriteCB_TrainerSpawn(struct Sprite *sprite);
void InitAndLaunchChosenStatusAnimation(u32 battler, bool32 isStatus2, u32 status);
bool32 TryHandleLaunchBattleTableAnimation(u8 activeBattlerId, u8 attacker, u8 target, u8 tableId, u32 argument);
void InitAndLaunchSpecialAnimation(u8 activeBattlerId, u8 attacker, u8 target, u8 tableId);
bool32 IsBattleSEPlaying(u8 battler);
void BattleLoadMonSpriteGfx(struct Pokemon *mon, u32 battler);
void BattleGfxSfxDummy2(u32 species);
void DecompressTrainerFrontPic(u32 frontPicId, u8 battler);
void DecompressTrainerBackPic(u32 backPicId, u8 battler);
void FreeTrainerFrontPicPalette(u32 frontPicId);
bool32 BattleLoadAllHealthBoxesGfx(u8 state);
void LoadBattleBarGfx(u8 unused);
bool32 BattleInitAllSprites(u8 *state1, u8 *battler);
void ClearSpritesHealthboxAnimData(void);
void CopyAllBattleSpritesInvisibilities(void);
void CopyBattleSpriteInvisibility(u8 battler);
void HandleSpeciesGfxDataChange(u8 attacker, u8 target, bool32 megaEvo, bool32 trackEnemyPersonality);
void BattleLoadSubstituteOrMonSpriteGfx(u8 battler, bool32 loadMonSprite);
void LoadBattleMonGfxAndAnimate(u8 battler, bool32 loadMonSprite, u8 spriteId);
void TrySetBehindSubstituteSpriteBit(u8 battler, u32 move);
void ClearBehindSubstituteBit(u8 battler);
void HandleLowHpMusicChange(struct Pokemon *mon, u8 battler);
void BattleStopLowHpSound(void);
u8 GetMonHPBarLevel(struct Pokemon *mon);
void HandleBattleLowHpMusicChange(void);
void SetBattlerSpriteAffineMode(u8 affineMode);
void CreateEnemyShadowSprite(u32 battler);
void LoadAndCreateEnemyShadowSprites(void);
void SpriteCB_SetInvisible(struct Sprite *sprite);
void SetBattlerShadowSpriteCallback(u8 battler, u32 species);
void HideBattlerShadowSprite(u8 battler);
void FillAroundBattleWindows(void);
void ClearTemporarySpeciesSpriteData(u32 battler, bool32 dontClearTransform, bool32 dontClearSubstitute);
void AllocateMonSpritesGfx(void);
void FreeMonSpritesGfx(void);
bool32 ShouldPlayNormalMonCry(struct Pokemon *mon);

#endif // GUARD_BATTLE_GFX_SFX_UTIL_H
