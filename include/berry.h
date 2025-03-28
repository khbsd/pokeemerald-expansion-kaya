#ifndef GUARD_BERRY_H
#define GUARD_BERRY_H

void SetEnigmaBerry(u8 *src);
bool32 IsEnigmaBerryValid(void);
const struct Berry *GetBerryInfo(u8 berry);
struct BerryTree *GetBerryTreeInfo(u8 id);
bool32 ObjectEventInteractionWaterBerryTree(void);
bool32 IsPlayerFacingEmptyBerryTreePatch(void);
bool32 TryToWaterBerryTree(void);
void ClearBerryTrees(void);
void BerryTreeTimeUpdate(s32 minutes);
void PlantBerryTree(u8 id, u8 berry, u8 stage, bool32 sparkle);
void RemoveBerryTree(u8 id);
u8 GetBerryTypeByBerryTreeId(u8 id);
u8 GetStageByBerryTreeId(u8);
u8 ItemIdToBerryType(u32 item);
void GetBerryNameByBerryType(u8 berry, u8 *string);
void ResetBerryTreeSparkleFlag(u8 id);
void Bag_ChooseBerry(void);
void Bag_ChooseMulch(void);
void ObjectEventInteractionGetBerryTreeData(void);
void ObjectEventInteractionPlantBerryTree(void);
void ObjectEventInteractionPickBerryTree(void);
void ObjectEventInteractionRemoveBerryTree(void);
void ObjectEventInteractionApplyMulch(void);
bool32 PlayerHasBerries(void);
void SetBerryTreesSeen(void);
bool32 BerryTreeGrow(struct BerryTree *tree);

extern const struct Berry gBerries[];

struct BerryCrushBerryData {
    u8 difficulty; // The number of A presses required to crush it
    u32 powder;
};

extern const struct BerryCrushBerryData gBerryCrush_BerryData[];

#endif // GUARD_BERRY_H
