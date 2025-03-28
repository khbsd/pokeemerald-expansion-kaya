#ifndef GUARD_FIELD_CAMERA_H
#define GUARD_FIELD_CAMERA_H

struct CameraObject
{
    void (*callback)(struct CameraObject *);
    u32 spriteId;
    s32 movementSpeedX;
    s32 movementSpeedY;
    s32 x;
    s32 y;
};

extern struct CameraObject gFieldCamera;
extern u32 gTotalCameraPixelOffsetX;
extern u32 gTotalCameraPixelOffsetY;

void DrawWholeMapView(void);
void CurrentMapDrawMetatileAt(int x, int y);
void GetCameraOffsetWithPan(s32 *x, s32 *y);
void DrawDoorMetatileAt(int x, int y, u32 *arr);
void ResetFieldCamera(void);
void ResetCameraUpdateInfo(void);
u32 InitCameraUpdateCallback(u8 trackedSpriteId);
void CameraUpdate(void);
void SetCameraPanningCallback(void (*callback)(void));
void SetCameraPanning(s32 horizontal, s32 vertical);
void InstallCameraPanAheadCallback(void);
void UpdateCameraPanning(void);
void FieldUpdateBgTilemapScroll(void);

#endif //GUARD_FIELD_CAMERA_H
