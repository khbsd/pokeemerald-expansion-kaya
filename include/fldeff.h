#ifndef GUARD_FLDEFF_H
#define GUARD_FLDEFF_H

// cut
bool32 SetUpFieldMove_Cut(void);
bool32 FldEff_UseCutOnGrass(void);
bool32 FldEff_UseCutOnTree(void);
bool32 FldEff_CutGrass(void);
void FixLongGrassMetatilesWindowTop(s16 x, s16 y);
void FixLongGrassMetatilesWindowBottom(s16 x, s16 y);

extern const struct SpritePalette gSpritePalette_CutGrass;
extern struct MapPosition gPlayerFacingPosition;

// escalator
void StartEscalator(bool32 var);
void StopEscalator(void);
bool32 IsEscalatorMoving(void);

// soft-boiled
bool32 SetUpFieldMove_SoftBoiled(void);
void Task_TryUseSoftboiledOnPartyMon(u8 taskId);
void ChooseMonForSoftboiled(u8 taskId);

// flash
bool32 SetUpFieldMove_Flash(void);
void CB2_DoChangeMap(void);
bool32 GetMapPairFadeToType(u8 _fromType, u8 _toType);
bool32 GetMapPairFadeFromType(u8 _fromType, u8 _toType);

// strength
bool32 SetUpFieldMove_Strength(void);
bool32 FldEff_UseStrength(void);

// sweet scent
bool32 SetUpFieldMove_SweetScent(void);
bool32 FldEff_SweetScent(void);
void StartSweetScentFieldEffect(void);

// teleport
bool32 SetUpFieldMove_Teleport(void);
bool32 FldEff_UseTeleport(void);

// dig
bool32 SetUpFieldMove_Dig(void);
bool32 FldEff_UseDig(void);

// rock smash
bool32 CheckObjectGraphicsInFrontOfPlayer(u32 graphicsId);
u8 CreateFieldMoveTask(void);
bool32 SetUpFieldMove_RockSmash(void);
bool32 FldEff_UseRockSmash(void);

#endif // GUARD_FLDEFF_H
