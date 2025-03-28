#ifndef GUARD_FIELD_MESSAGE_BOX_H
#define GUARD_FIELD_MESSAGE_BOX_H

enum
{
    FIELD_MESSAGE_BOX_HIDDEN,
    FIELD_MESSAGE_BOX_UNUSED,
    FIELD_MESSAGE_BOX_NORMAL,
    FIELD_MESSAGE_BOX_AUTO_SCROLL,
};

bool32 ShowFieldMessage(const u8 *message);
bool32 ShowPokenavFieldMessage(const u8 *message);
bool32 ShowFieldMessageFromBuffer(void);
bool32 ShowFieldAutoScrollMessage(const u8 *message);
void HideFieldMessageBox(void);
bool32 IsFieldMessageBoxHidden(void);
u8 GetFieldMessageBoxMode(void);
void StopFieldMessage(void);
void InitFieldMessageBox(void);

extern u8 gWalkAwayFromSignpostTimer;

#endif // GUARD_FIELD_MESSAGE_BOX_H
