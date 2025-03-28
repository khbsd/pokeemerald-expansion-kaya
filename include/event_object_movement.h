#ifndef GUARD_EVENT_OBJECT_MOVEMENT_H
#define GUARD_EVENT_OBJECT_MOVEMENT_H

#include "constants/event_object_movement.h"

#if OW_POKEMON_OBJECT_EVENTS == FALSE && OW_FOLLOWERS_ENABLED == TRUE
#error "OW_POKEMON_OBJECT_EVENTS needs to be TRUE in order for OW_FOLLOWERS_ENABLED to work."
#endif

// Palette slots for overworld NPCs.
// The same standard set of palettes for overworld objects are normally always loaded at the same
// time while walking around the overworld. The only exceptions are the palettes for the player and
// the "special" NPC, which can be swapped out. This also means that e.g. two "special" NPCs
// with competing palettes cannot be properly loaded at the same time.
enum {
    PALSLOT_PLAYER,
    PALSLOT_PLAYER_REFLECTION,
    PALSLOT_NPC_1,
    PALSLOT_NPC_2,
    PALSLOT_NPC_3,
    PALSLOT_NPC_4,
    PALSLOT_NPC_1_REFLECTION,
    PALSLOT_NPC_2_REFLECTION,
    PALSLOT_NPC_3_REFLECTION,
    PALSLOT_NPC_4_REFLECTION,
    PALSLOT_NPC_SPECIAL,
    PALSLOT_NPC_SPECIAL_REFLECTION,
    OBJ_PALSLOT_COUNT
    // the remaining sprite palette slots (12-15) are used by field effects, the interface, etc.
};

enum SpinnerRunnerFollowPatterns
{
    RUNFOLLOW_ANY,
    RUNFOLLOW_NORTH_SOUTH,
    RUNFOLLOW_EAST_WEST,
    RUNFOLLOW_NORTH_WEST,
    RUNFOLLOW_NORTH_EAST,
    RUNFOLLOW_SOUTH_WEST,
    RUNFOLLOW_SOUTH_EAST,
    RUNFOLLOW_NORTH_SOUTH_WEST,
    RUNFOLLOW_NORTH_SOUTH_EAST,
    RUNFOLLOW_NORTH_EAST_WEST,
    RUNFOLLOW_SOUTH_EAST_WEST
};

enum ReflectionTypes
{
    REFL_TYPE_NONE,
    REFL_TYPE_ICE,
    REFL_TYPE_WATER,
    NUM_REFLECTION_TYPES
};

enum FollowerTransformTypes
{
    TRANSFORM_TYPE_NONE,
    TRANSFORM_TYPE_PERMANENT,
    TRANSFORM_TYPE_RANDOM_WILD,
    TRANSFORM_TYPE_WEATHER,
};

#define FIGURE_8_LENGTH 72

#define GROUND_EFFECT_FLAG_TALL_GRASS_ON_SPAWN   (1 << 0)
#define GROUND_EFFECT_FLAG_TALL_GRASS_ON_MOVE    (1 << 1)
#define GROUND_EFFECT_FLAG_LONG_GRASS_ON_SPAWN   (1 << 2)
#define GROUND_EFFECT_FLAG_LONG_GRASS_ON_MOVE    (1 << 3)
#define GROUND_EFFECT_FLAG_WATER_REFLECTION      (1 << 4)
#define GROUND_EFFECT_FLAG_ICE_REFLECTION        (1 << 5)
#define GROUND_EFFECT_FLAG_SHALLOW_FLOWING_WATER (1 << 6)
#define GROUND_EFFECT_FLAG_SAND                  (1 << 7)
#define GROUND_EFFECT_FLAG_DEEP_SAND             (1 << 8)
#define GROUND_EFFECT_FLAG_RIPPLES               (1 << 9)
#define GROUND_EFFECT_FLAG_PUDDLE                (1 << 10)
#define GROUND_EFFECT_FLAG_SAND_PILE             (1 << 11)
#define GROUND_EFFECT_FLAG_LAND_IN_TALL_GRASS    (1 << 12)
#define GROUND_EFFECT_FLAG_LAND_IN_LONG_GRASS    (1 << 13)
#define GROUND_EFFECT_FLAG_LAND_IN_SHALLOW_WATER (1 << 14)
#define GROUND_EFFECT_FLAG_LAND_IN_DEEP_WATER    (1 << 15)
#define GROUND_EFFECT_FLAG_LAND_ON_NORMAL_GROUND (1 << 16)
#define GROUND_EFFECT_FLAG_SHORT_GRASS           (1 << 17)
#define GROUND_EFFECT_FLAG_HOT_SPRINGS           (1 << 18)
#define GROUND_EFFECT_FLAG_SEAWEED               (1 << 19)

// Sprite data for the CameraObject functions
#define sCamera_FollowSpriteId data[0]
#define sCamera_State          data[1]
#define sCamera_MoveX          data[2]
#define sCamera_MoveY          data[3]

struct StepAnimTable
{
    const union AnimCmd *const *anims;
    u32 animPos[4];
};

struct PairedPalettes
{
    u32 tag;
    const u32 *data;
};

struct LockedAnimObjectEvents
{
    u32 localIds[OBJECT_EVENTS_COUNT];
    u32 count;
};

extern const struct OamData gObjectEventBaseOam_32x8;
extern const struct OamData gObjectEventBaseOam_32x32;
extern const struct OamData gObjectEventBaseOam_64x64;
extern const struct SubspriteTable sOamTables_32x32[];
extern const struct SubspriteTable sOamTables_64x64[];
extern const union AnimCmd *const sAnimTable_Following[];
extern const union AnimCmd *const sAnimTable_Following_Asym[];
extern const struct SpriteTemplate *const gFieldEffectObjectTemplatePointers[];
extern const u32 gReflectionEffectPaletteMap[];

extern const struct SpriteFrameImage *const gBerryTreePicTablePointers[];
extern const u32 *const gBerryTreePaletteSlotTablePointers[];

void ResetObjectEvents(void);
u32 GetMoveDirectionAnimNum(u32 direction);
u32 GetObjectEventIdByLocalIdAndMap(u32 localId, u32 mapNum, u32 mapGroupId);
bool8 TryGetObjectEventIdByLocalIdAndMap(u32 localId, u32 mapNum, u32 mapGroupId, u32 *objectEventId);
u32 GetObjectEventIdByXY(s16 x, s16 y);
void SetObjectEventDirection(struct ObjectEvent *objectEvent, u32 direction);
u32 GetFirstInactiveObjectEventId(void);
u32 GetObjectEventIdByLocalId(u32);
void RemoveObjectEventByLocalIdAndMap(u32 localId, u32 mapNum, u32 mapGroup);
void LoadSpecialObjectReflectionPalette(u32 tag, u32 slot);
void TryMoveObjectEventToMapCoords(u32 localId, u32 mapNum, u32 mapGroup, s16 x, s16 y);
void PatchObjectPalette(u32 paletteTag, u32 paletteSlot);
void SpawnObjectEventsOnReturnToField(s16 x, s16 y);
void OverrideSecretBaseDecorationSpriteScript(u32 localId, u32 mapNum, u32 mapGroup, u32 decorCat);
void GetMapCoordsFromSpritePos(s16 x, s16 y, s16 *destX, s16 *destY);
u32 GetFaceDirectionAnimNum(u32 direction);
void SetSpritePosToOffsetMapCoords(s16 *x, s16 *y, s16 dx, s16 dy);
void ClearObjectEventMovement(struct ObjectEvent *objectEvent, struct Sprite *sprite);
void ObjectEventClearHeldMovement(struct ObjectEvent *);
void ObjectEventClearHeldMovementIfActive(struct ObjectEvent *);
struct Pokemon *GetFirstLiveMon(void);
u32 GetOverworldWeatherSpecies(u32 species);
void UpdateFollowingPokemon(void);
void RemoveFollowingPokemon(void);
struct ObjectEvent *GetFollowerObject(void);
void TrySpawnObjectEvents(s16 cameraX, s16 cameraY);
u32 CreateObjectGraphicsSprite(u32, void (*)(struct Sprite *), s16 x, s16 y, u32 subpriority);
u32 TrySpawnObjectEvent(u32 localId, u32 mapNum, u32 mapGroup);
u32 SpawnSpecialObjectEventParameterized(u32 graphicsId, u32 movementBehavior, u32 localId, s16 x, s16 y, u32 elevation);
u32 SpawnSpecialObjectEvent(struct ObjectEventTemplate *);
void SetSpritePosToMapCoords(s16 mapX, s16 mapY, s16 *destX, s16 *destY);
void CameraObjectReset(void);
u32 UpdateSpritePaletteByTemplate(const struct SpriteTemplate *, struct Sprite *);
void ObjectEventSetGraphicsId(struct ObjectEvent *, u32 graphicsId);
void ObjectEventTurn(struct ObjectEvent *, u32 direction);
void ObjectEventTurnByLocalIdAndMap(u32 localId, u32 mapNum, u32 mapGroup, u32 direction);
const struct ObjectEventGraphicsInfo *GetObjectEventGraphicsInfo(u32 graphicsId);
void SetObjectInvisibility(u32 localId, u32 mapNum, u32 mapGroup, bool8 invisible);
void FreeAndReserveObjectSpritePalettes(void);
u32 LoadObjectEventPalette(u32 paletteTag);
u32 LoadPlayerObjectEventPalette(u32 gender);
void SetObjectEventSpritePosByLocalIdAndMap(u32 localId, u32 mapNum, u32 mapGroup, s16 x, s16 y);
void ResetObjectSubpriority(u32 localId, u32 mapNum, u32 mapGroup);
void SetObjectSubpriority(u32 localId, u32 mapNum, u32 mapGroup, u32 subpriority);
void AllowObjectAtPosTriggerGroundEffects(s16 x, s16 y);
void ObjectEventGetLocalIdAndMap(struct ObjectEvent *objectEvent, void *localId, void *mapNum, void *mapGroup);
void ShiftObjectEventCoords(struct ObjectEvent *, s16 x, s16 y);
void MoveObjectEventToMapCoords(struct ObjectEvent *, s16 x, s16 y);
void TryOverrideObjectEventTemplateCoords(u32 localId, u32 mapNum, u32 mapGroup);
void InitObjectEventPalettes(u32 palSlot);
void UpdateObjectEventCurrentMovement(struct ObjectEvent *, struct Sprite *, bool8(struct ObjectEvent *, struct Sprite *));
u32 ObjectEventFaceOppositeDirection(struct ObjectEvent *, u32 direction);
u32 GetOppositeDirection(u32 direction);
u32 GetWalkInPlaceFasterMovementAction(u32);
u32 GetWalkInPlaceFastMovementAction(u32);
u32 GetWalkInPlaceNormalMovementAction(u32);
u32 GetWalkInPlaceSlowMovementAction(u32);
u32 GetCollisionAtCoords(struct ObjectEvent *, s16 x, s16 y, u32 dir);
u32 GetObjectObjectCollidesWith(struct ObjectEvent *objectEvent, s16 x, s16 y, bool32 addCoords);
void MoveCoords(u32 direction, s16 *x, s16 *y);
bool8 ObjectEventIsHeldMovementActive(struct ObjectEvent *);
u32 ObjectEventClearHeldMovementIfFinished(struct ObjectEvent *);
u32 GetObjectEventIdByPosition(u32 x, u32 y, u32 elevation);
void SetTrainerMovementType(struct ObjectEvent *objectEvent, u32 movementType);
u32 GetTrainerFacingDirectionMovementType(u32 direction);
const u32 *GetObjectEventScriptPointerByObjectEventId(u32 objectEventId);
u32 GetCollisionFlagsAtCoords(struct ObjectEvent *objectEvent, s16 x, s16 y, u32 direction);
u32 GetFaceDirectionMovementAction(u32);
u32 GetWalkNormalMovementAction(u32);
u32 GetWalkFastMovementAction(u32);
u32 GetRideWaterCurrentMovementAction(u32);
u32 GetWalkFasterMovementAction(u32);
u32 GetPlayerRunMovementAction(u32);
u32 GetJumpInPlaceMovementAction(u32);
u32 GetAcroWheelieFaceDirectionMovementAction(u32);
u32 GetAcroPopWheelieFaceDirectionMovementAction(u32);
u32 GetAcroEndWheelieFaceDirectionMovementAction(u32);
u32 GetAcroWheelieHopFaceDirectionMovementAction(u32);
u32 GetAcroWheelieHopDirectionMovementAction(u32);
u32 GetAcroWheelieJumpDirectionMovementAction(u32);
u32 GetJumpInPlaceTurnAroundMovementAction(u32);
u32 GetAcroWheelieInPlaceDirectionMovementAction(u32);
u32 GetAcroPopWheelieMoveDirectionMovementAction(u32);
u32 GetAcroWheelieMoveDirectionMovementAction(u32);
u32 GetAcroEndWheelieMoveDirectionMovementAction(u32);
u32 GetFishingDirectionAnimNum(u32 direction);
u32 GetAcroWheelieDirectionAnimNum(u32 direction);
u32 GetFishingBiteDirectionAnimNum(u32 direction);
u32 GetFishingNoCatchDirectionAnimNum(u32 direction);
bool8 ObjectEventSetHeldMovement(struct ObjectEvent *objectEvent, u32 specialAnimId);
void ObjectEventForceSetHeldMovement(struct ObjectEvent *objectEvent, u32 movementActionId);
bool8 ObjectEventIsMovementOverridden(struct ObjectEvent *objectEvent);
u32 ObjectEventCheckHeldMovementStatus(struct ObjectEvent *objectEvent);
u32 ObjectEventGetHeldMovementActionId(struct ObjectEvent *objectEvent);
const struct ObjectEventTemplate *FindObjectEventTemplateByLocalId(u32, const struct ObjectEventTemplate *, u32);
void TryOverrideTemplateCoordsForObjectEvent(const struct ObjectEvent *objectEvent, u32 movementType);
void OverrideTemplateCoordsForObjectEvent(const struct ObjectEvent *objectEvent);
void ShiftStillObjectEventCoords(struct ObjectEvent *objEvent);
void ObjectEventMoveDestCoords(struct ObjectEvent *objEvent, u32 direction, s16 *x, s16 *y);
u32 AddCameraObject(u32 linkedSpriteId);
void UpdateObjectEventsForCameraUpdate(s16 x, s16 y);
u32 GetWalkSlowMovementAction(u32);
u32 GetWalkSlowStairsMovementAction(u32);
u32 GetJumpMovementAction(u32);
u32 ElevationToPriority(u32 elevation);
void ObjectEventUpdateElevation(struct ObjectEvent *objEvent, struct Sprite *);
void SetObjectSubpriorityByElevation(u32 elevation, struct Sprite *, u32 subpriority);
void UnfreezeObjectEvent(struct ObjectEvent *);
u32 FindLockedObjectEventIndex(struct ObjectEvent *);
void SetAndStartSpriteAnim(struct Sprite *, u32 animNum, u32 animCmdIndex);
bool8 SpriteAnimEnded(struct Sprite *);
void UnfreezeObjectEvents(void);
void FreezeObjectEventsExceptOne(u32 objectEventId);
void FreezeObjectEventsExceptTwo(u32 objectEventId1, u32 objectEventId2);
void FreezeObjectEvents(void);
bool8 FreezeObjectEvent(struct ObjectEvent *objectEvent);
u32 GetMoveDirectionFastAnimNum(u32 direction);
u32 GetMoveDirectionFasterAnimNum(u32 direction);
u32 GetMoveDirectionFastestAnimNum(u32 direction);
u32 GetLedgeJumpDirection(s16 x, s16 y, u32 direction);
void CameraObjectSetFollowedSpriteId(u32 objectId);
u32 GetObjectPaletteTag(u32 palSlot);
void UpdateObjectEventSpriteInvisibility(struct Sprite *sprite, bool8 invisible);
s16 GetFigure8XOffset(s16 idx);
s16 GetFigure8YOffset(s16 idx);
void CameraObjectFreeze(void);
u32 GetObjectEventBerryTreeId(u32 objectEventId);
void SetBerryTreeJustPicked(u32 mapId, u32 mapNumber, u32 mapGroup);
bool8 IsBerryTreeSparkling(u32 localId, u32 mapNum, u32 mapGroup);

void MovementType_None(struct Sprite *);
void MovementType_LookAround(struct Sprite *);
void MovementType_WanderAround(struct Sprite *);
void MovementType_WanderUpAndDown(struct Sprite *);
void MovementType_WanderLeftAndRight(struct Sprite *);
void MovementType_FaceDirection(struct Sprite *);
void MovementType_Player(struct Sprite *);
void MovementType_BerryTreeGrowth(struct Sprite *);
void MovementType_FaceDownAndUp(struct Sprite *);
void MovementType_FaceLeftAndRight(struct Sprite *);
void MovementType_FaceUpAndLeft(struct Sprite *);
void MovementType_FaceUpAndRight(struct Sprite *);
void MovementType_FaceDownAndLeft(struct Sprite *);
void MovementType_FaceDownAndRight(struct Sprite *);
void MovementType_FaceDownUpAndLeft(struct Sprite *);
void MovementType_FaceDownUpAndRight(struct Sprite *);
void MovementType_FaceUpRightAndLeft(struct Sprite *);
void MovementType_FaceDownRightAndLeft(struct Sprite *);
void MovementType_RotateCounterclockwise(struct Sprite *);
void MovementType_RotateClockwise(struct Sprite *);
void MovementType_WalkBackAndForth(struct Sprite *);
void MovementType_WalkSequenceUpRightLeftDown(struct Sprite *);
void MovementType_WalkSequenceRightLeftDownUp(struct Sprite *);
void MovementType_WalkSequenceDownUpRightLeft(struct Sprite *);
void MovementType_WalkSequenceLeftDownUpRight(struct Sprite *);
void MovementType_WalkSequenceUpLeftRightDown(struct Sprite *);
void MovementType_WalkSequenceLeftRightDownUp(struct Sprite *);
void MovementType_WalkSequenceDownUpLeftRight(struct Sprite *);
void MovementType_WalkSequenceRightDownUpLeft(struct Sprite *);
void MovementType_WalkSequenceLeftUpDownRight(struct Sprite *);
void MovementType_WalkSequenceUpDownRightLeft(struct Sprite *);
void MovementType_WalkSequenceRightLeftUpDown(struct Sprite *);
void MovementType_WalkSequenceDownRightLeftUp(struct Sprite *);
void MovementType_WalkSequenceRightUpDownLeft(struct Sprite *);
void MovementType_WalkSequenceUpDownLeftRight(struct Sprite *);
void MovementType_WalkSequenceLeftRightUpDown(struct Sprite *);
void MovementType_WalkSequenceDownLeftRightUp(struct Sprite *);
void MovementType_WalkSequenceUpLeftDownRight(struct Sprite *);
void MovementType_WalkSequenceDownRightUpLeft(struct Sprite *);
void MovementType_WalkSequenceLeftDownRightUp(struct Sprite *);
void MovementType_WalkSequenceRightUpLeftDown(struct Sprite *);
void MovementType_WalkSequenceUpRightDownLeft(struct Sprite *);
void MovementType_WalkSequenceDownLeftUpRight(struct Sprite *);
void MovementType_WalkSequenceLeftUpRightDown(struct Sprite *);
void MovementType_WalkSequenceRightDownLeftUp(struct Sprite *);
void MovementType_CopyPlayer(struct Sprite *);
void MovementType_TreeDisguise(struct Sprite *);
void MovementType_MountainDisguise(struct Sprite *);
void MovementType_CopyPlayerInGrass(struct Sprite *);
void MovementType_Buried(struct Sprite *);
void MovementType_WalkInPlace(struct Sprite *);
void MovementType_JogInPlace(struct Sprite *);
void MovementType_RunInPlace(struct Sprite *);
void MovementType_Invisible(struct Sprite *);
void MovementType_WalkSlowlyInPlace(struct Sprite *);
void MovementType_FollowPlayer(struct Sprite *);
u32 GetSlideMovementAction(u32);
u32 GetJumpMovementAction(u32);
u32 GetJump2MovementAction(u32);
u32 CopySprite(struct Sprite *sprite, s16 x, s16 y, u32 subpriority);
u32 CreateCopySpriteAt(struct Sprite *sprite, s16 x, s16 y, u32 subpriority);
bool8 IsElevationMismatchAt(u32, s16, s16);

u32 MovementType_WanderAround_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderAround_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderAround_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_Wander_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderAround_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderAround_Step5(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderAround_Step6(struct ObjectEvent *, struct Sprite *);
u32 GetVectorDirection(s16 dx, s16 dy, s16 absdx, s16 absdy);
u32 GetLimitedVectorDirection_SouthNorth(s16 dx, s16 dy, s16 absdx, s16 absdy);
u32 GetLimitedVectorDirection_WestEast(s16 dx, s16 dy, s16 absdx, s16 absdy);
u32 GetLimitedVectorDirection_WestNorth(s16 dx, s16 dy, s16 absdx, s16 absdy);
u32 GetLimitedVectorDirection_EastNorth(s16 dx, s16 dy, s16 absdx, s16 absdy);
u32 GetLimitedVectorDirection_WestSouth(s16 dx, s16 dy, s16 absdx, s16 absdy);
u32 GetLimitedVectorDirection_EastSouth(s16 dx, s16 dy, s16 absdx, s16 absdy);
u32 GetLimitedVectorDirection_SouthNorthWest(s16 dx, s16 dy, s16 absdx, s16 absdy);
u32 GetLimitedVectorDirection_SouthNorthEast(s16 dx, s16 dy, s16 absdx, s16 absdy);
u32 GetLimitedVectorDirection_NorthWestEast(s16 dx, s16 dy, s16 absdx, s16 absdy);
u32 GetLimitedVectorDirection_SouthWestEast(s16 dx, s16 dy, s16 absdx, s16 absdy);
u32 MovementType_LookAround_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_LookAround_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_LookAround_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_LookAround_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_LookAround_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderUpAndDown_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderUpAndDown_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderUpAndDown_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderUpAndDown_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderUpAndDown_Step5(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderUpAndDown_Step6(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderLeftAndRight_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderLeftAndRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderLeftAndRight_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderLeftAndRight_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderLeftAndRight_Step5(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WanderLeftAndRight_Step6(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDirection_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDirection_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDirection_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_BerryTreeGrowth_Normal(struct ObjectEvent *, struct Sprite *);
u32 MovementType_BerryTreeGrowth_Move(struct ObjectEvent *, struct Sprite *);
u32 MovementType_BerryTreeGrowth_SparkleStart(struct ObjectEvent *, struct Sprite *);
u32 MovementType_BerryTreeGrowth_Sparkle(struct ObjectEvent *, struct Sprite *);
u32 MovementType_BerryTreeGrowth_SparkleEnd(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndUp_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndUp_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndUp_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndUp_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndUp_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceLeftAndRight_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceLeftAndRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceLeftAndRight_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceLeftAndRight_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceLeftAndRight_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpAndLeft_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpAndLeft_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpAndLeft_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpAndLeft_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpAndLeft_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpAndRight_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpAndRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpAndRight_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpAndRight_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpAndRight_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndLeft_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndLeft_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndLeft_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndLeft_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndLeft_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndRight_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndRight_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndRight_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownAndRight_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownUpAndLeft_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownUpAndLeft_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownUpAndLeft_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownUpAndLeft_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownUpAndLeft_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownUpAndRight_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownUpAndRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownUpAndRight_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownUpAndRight_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownUpAndRight_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpLeftAndRight_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpLeftAndRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpLeftAndRight_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpLeftAndRight_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceUpLeftAndRight_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownLeftAndRight_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownLeftAndRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownLeftAndRight_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownLeftAndRight_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FaceDownLeftAndRight_Step4(struct ObjectEvent *, struct Sprite *);
u32 MovementType_RotateCounterclockwise_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_RotateCounterclockwise_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_RotateCounterclockwise_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_RotateCounterclockwise_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_RotateClockwise_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_RotateClockwise_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_RotateClockwise_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_RotateClockwise_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkBackAndForth_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkBackAndForth_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkBackAndForth_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkBackAndForth_Step3(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequence_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequence_Step2(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceUpRightLeftDown_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceRightLeftDownUp_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceDownUpRightLeft_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceLeftDownUpRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceUpLeftRightDown_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceLeftRightDownUp_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceDownUpLeftRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceRightDownUpLeft_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceLeftUpDownRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceUpDownRightLeft_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceRightLeftUpDown_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceDownRightLeftUp_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceRightUpDownLeft_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceUpDownLeftRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceLeftRightUpDown_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceDownLeftRightUp_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceUpLeftDownRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceDownRightUpLeft_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceLeftDownRightUp_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceRightUpLeftDown_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceUpRightDownLeft_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceDownLeftUpRight_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceLeftUpRightDown_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSequenceRightDownLeftUp_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_CopyPlayer_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_CopyPlayer_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_CopyPlayer_Step2(struct ObjectEvent *, struct Sprite *);
bool8 CopyablePlayerMovement_None(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 CopyablePlayerMovement_FaceDirection(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 CopyablePlayerMovement_WalkNormal(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 CopyablePlayerMovement_WalkFast(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 CopyablePlayerMovement_WalkFaster(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 CopyablePlayerMovement_Slide(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 CopyablePlayerMovement_JumpInPlace(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 CopyablePlayerMovement_Jump(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));

u32 MovementType_FollowPlayer_Shadow(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FollowPlayer_Active(struct ObjectEvent *, struct Sprite *);
u32 MovementType_FollowPlayer_Moving(struct ObjectEvent *, struct Sprite *);
void StartSpriteAnimInDirection(struct ObjectEvent *objectEvent, struct Sprite *sprite, u32 direction, u32 animNum);

bool8 FollowablePlayerMovement_Idle(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 FollowablePlayerMovement_FaceDirection(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 FollowablePlayerMovement_Step(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 FollowablePlayerMovement_GoSpeed1(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 FollowablePlayerMovement_GoSpeed2(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 FollowablePlayerMovement_Slide(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 FollowablePlayerMovement_JumpInPlace(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 FollowablePlayerMovement_GoSpeed4(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 FollowablePlayerMovement_Jump(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
bool8 CopyablePlayerMovement_Jump2(struct ObjectEvent *, struct Sprite *, u32, bool8(u32));
u32 MovementType_CopyPlayerInGrass_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_Buried_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkInPlace_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_MoveInPlace_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_WalkSlowlyInPlace_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_JogInPlace_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_RunInPlace_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_Invisible_Step0(struct ObjectEvent *, struct Sprite *);
u32 MovementType_Invisible_Step1(struct ObjectEvent *, struct Sprite *);
u32 MovementType_Invisible_Step2(struct ObjectEvent *, struct Sprite *);

u32 CreateVirtualObject(u32 graphicsId, u32 virtualObjId, s16 x, s16 y, u32 elevation, u32 direction);
void TurnVirtualObject(u32 virtualObjId, u32 direction);
void SetVirtualObjectGraphics(u32 virtualObjId, u32 graphicsId);
void SetVirtualObjectInvisibility(u32 virtualObjId, bool32 invisible);
bool32 IsVirtualObjectInvisible(u32 virtualObjId);
void SetVirtualObjectSpriteAnim(u32 virtualObjId, u32 animNum);
bool32 IsVirtualObjectAnimating(u32 virtualObjId);
u32 GetObjectEventIdByLocalId(u32 localId);
bool32 IsFollowerVisible(void);

// run slow
u32 GetPlayerRunSlowMovementAction(u32);
//sideways stairs
u32 GetSidewaysStairsToRightDirection(s16, s16, u32);
u32 GetSidewaysStairsToLeftDirection(s16, s16, u32);
u32 GetSidewaysStairsCollision(struct ObjectEvent *objectEvent, u32 dir, u32 currentBehavior, u32 nextBehavior, u32 collision);

bool8 MovementAction_EmoteX_Step0(struct ObjectEvent *, struct Sprite *);
bool8 MovementAction_EmoteDoubleExclamationMark_Step0(struct ObjectEvent *, struct Sprite *);

#endif //GUARD_EVENT_OBJECT_MOVEMENT_H
