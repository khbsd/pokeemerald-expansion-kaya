#ifndef GUARD_FIELD_NAME_BOX_H
#define GUARD_FIELD_NAME_BOX_H

#define NAME_BOX_BASE_TILE_TOTAL (6)
#define NAME_BOX_BASE_TILE_NUM (0x194 - (OW_NAME_BOX_DEFAULT_WIDTH * OW_NAME_BOX_DEFAULT_HEIGHT) - NAME_BOX_BASE_TILE_TOTAL)

extern EWRAM_DATA const u8 *gSpeakerName;
extern const u8 *const gSpeakerNamesTable[];

void TrySpawnNamebox(void);
u32 GetNameboxWindowId(void);
void DestroyNamebox(void);
void FillNamebox(void);
void DrawNamebox(u32 windowId, bool32 copyToVram);
void ClearNamebox(u32 windowId, bool32 copyToVram);
void SetSpeakerName(const u8 *name);
u32 GetNameboxWidth(void);
void TrySpawnAndShowNamebox(const u8 *speaker);

#endif // GUARD_FIELD_NAME_BOX_H
