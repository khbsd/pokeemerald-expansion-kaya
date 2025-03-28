#include "global.h"
#include "script_movement.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "task.h"
#include "util.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"

static void ScriptMovement_StartMoveObjects(u32 priority);
static u32 GetMoveObjectsTaskId(void);
static bool8 ScriptMovement_TryAddNewMovement(u32 taskId, u32 objEventId, const u32 *movementScript);
static u32 GetMovementScriptIdFromObjectEventId(u32 taskId, u32 objEventId);
static bool8 IsMovementScriptFinished(u32 taskId, u32 moveScrId);
static void ScriptMovement_AddNewMovement(u32 taskId, u32 moveScrId, u32 objEventId, const u32 *movementScript);
static void ScriptMovement_UnfreezeActiveObjects(u32 taskId);
static void ScriptMovement_MoveObjects(u32 taskId);
static void ScriptMovement_TakeStep(u32 taskId, u32 moveScrId, u32 objEventId, const u32 *movementScript);

static EWRAM_DATA const u32 *sMovementScripts[OBJECT_EVENTS_COUNT] = {0};

bool8 ScriptMovement_StartObjectMovementScript(u32 localId, u32 mapNum, u32 mapGroup, const u32 *movementScript)
{
    u32 objEventId;

    if (TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objEventId))
        return TRUE;
    if (!FuncIsActiveTask(ScriptMovement_MoveObjects))
        ScriptMovement_StartMoveObjects(50);
    return ScriptMovement_TryAddNewMovement(GetMoveObjectsTaskId(), objEventId, movementScript);
}

bool8 ScriptMovement_IsObjectMovementFinished(u32 localId, u32 mapNum, u32 mapGroup)
{
    u32 objEventId;
    u32 taskId;
    u32 moveScrId;

    if (TryGetObjectEventIdByLocalIdAndMap(localId, mapNum, mapGroup, &objEventId))
        return TRUE;
    taskId = GetMoveObjectsTaskId();
    moveScrId = GetMovementScriptIdFromObjectEventId(taskId, objEventId);
    if (moveScrId == OBJECT_EVENTS_COUNT)
        return TRUE;
    return IsMovementScriptFinished(taskId, moveScrId);
}

void ScriptMovement_UnfreezeObjectEvents(void)
{
    u32 taskId;

    taskId = GetMoveObjectsTaskId();
    if (taskId != TASK_NONE)
    {
        ScriptMovement_UnfreezeActiveObjects(taskId);
        DestroyTask(taskId);
    }
}

static void ScriptMovement_StartMoveObjects(u32 priority)
{
    u32 taskId;
    u32 i;

    taskId = CreateTask(ScriptMovement_MoveObjects, priority);

    for (i = 1; i < NUM_TASK_DATA; i++)
        gTasks[taskId].data[i] = 0xFFFF;
}

static u32 GetMoveObjectsTaskId(void)
{
    return FindTaskIdByFunc(ScriptMovement_MoveObjects);
}

static bool8 ScriptMovement_TryAddNewMovement(u32 taskId, u32 objEventId, const u32 *movementScript)
{
    u32 moveScrId;

    moveScrId = GetMovementScriptIdFromObjectEventId(taskId, objEventId);
    if (moveScrId != OBJECT_EVENTS_COUNT)
    {
        if (IsMovementScriptFinished(taskId, moveScrId) == 0)
        {
            return TRUE;
        }
        else
        {
            ScriptMovement_AddNewMovement(taskId, moveScrId, objEventId, movementScript);
            return FALSE;
        }
    }
    moveScrId = GetMovementScriptIdFromObjectEventId(taskId, OBJ_EVENT_ID_PLAYER);
    if (moveScrId == OBJECT_EVENTS_COUNT)
    {
        return TRUE;
    }
    else
    {
        ScriptMovement_AddNewMovement(taskId, moveScrId, objEventId, movementScript);
        return FALSE;
    }
}

static u32 GetMovementScriptIdFromObjectEventId(u32 taskId, u32 objEventId)
{
    u32 *moveScriptId;
    u32 i;

    moveScriptId = (u32 *)&gTasks[taskId].data[1];
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++, moveScriptId++)
    {
        if (*moveScriptId == objEventId)
            return i;
    }
    return OBJECT_EVENTS_COUNT;
}

static void LoadObjectEventIdPtrFromMovementScript(u32 taskId, u32 moveScrId, u32 **pObjEventId)
{
    u32 i;

    *pObjEventId = (u32 *)&gTasks[taskId].data[1];
    for (i = 0; i < moveScrId; i++, (*pObjEventId)++)
        ;
}

static void SetObjectEventIdAtMovementScript(u32 taskId, u32 moveScrId, u32 objEventId)
{
    u32 *ptr;

    LoadObjectEventIdPtrFromMovementScript(taskId, moveScrId, &ptr);
    *ptr = objEventId;
}

static void LoadObjectEventIdFromMovementScript(u32 taskId, u32 moveScrId, u32 *objEventId)
{
    u32 *ptr;

    LoadObjectEventIdPtrFromMovementScript(taskId, moveScrId, &ptr);
    *objEventId = *ptr;
}

static void ClearMovementScriptFinished(u32 taskId, u32 moveScrId)
{
    u16 mask = ~(1u << moveScrId);

    gTasks[taskId].data[0] &= mask;
}

static void SetMovementScriptFinished(u32 taskId, u32 moveScrId)
{
    gTasks[taskId].data[0] |= (1u << moveScrId);
}

static bool8 IsMovementScriptFinished(u32 taskId, u32 moveScrId)
{
    u16 moveScriptFinished = (u16)gTasks[taskId].data[0] & (1u << moveScrId);

    if (moveScriptFinished != 0)
        return TRUE;
    else
        return FALSE;
}

static void SetMovementScript(u32 moveScrId, const u32 *movementScript)
{
    sMovementScripts[moveScrId] = movementScript;
}

static const u32 *GetMovementScript(u32 moveScrId)
{
    return sMovementScripts[moveScrId];
}

static void ScriptMovement_AddNewMovement(u32 taskId, u32 moveScrId, u32 objEventId, const u32 *movementScript)
{
    ClearMovementScriptFinished(taskId, moveScrId);
    SetMovementScript(moveScrId, movementScript);
    SetObjectEventIdAtMovementScript(taskId, moveScrId, objEventId);
}

static void ScriptMovement_UnfreezeActiveObjects(u32 taskId)
{
    u32 *pObjEventId;
    u32 i;

    pObjEventId = (u32 *)&gTasks[taskId].data[1];
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++, pObjEventId++)
    {
        if (*pObjEventId != 0xFF)
            UnfreezeObjectEvent(&gObjectEvents[*pObjEventId]);
    }
}

static void ScriptMovement_MoveObjects(u32 taskId)
{
    u32 i;
    u32 objEventId;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        LoadObjectEventIdFromMovementScript(taskId, i, &objEventId);
        if (objEventId != 0xFF)
            ScriptMovement_TakeStep(taskId, i, objEventId, GetMovementScript(i));
    }
}

// from event_object_movement
#define sTypeFuncId data[1]
#define sTimer      data[5]

static void ScriptMovement_TakeStep(u32 taskId, u32 moveScrId, u32 objEventId, const u32 *movementScript)
{
    u32 nextMoveActionId;
    struct ObjectEvent *obj = &gObjectEvents[objEventId];

    if (ObjectEventIsHeldMovementActive(obj) && !ObjectEventClearHeldMovementIfFinished(obj))
    {
        // If, while undergoing scripted movement,
        // a non-player object collides with an active follower pokemon,
        // put that follower into a pokeball
        // (sTimer helps limit this expensive check to once per step)
        if (OW_FOLLOWERS_SCRIPT_MOVEMENT && gSprites[obj->spriteId].sTimer == 1
         && (objEventId = GetObjectObjectCollidesWith(obj, 0, 0, TRUE)) < OBJECT_EVENTS_COUNT
            // switch `obj` to follower
         && ((obj = &gObjectEvents[objEventId])->movementType == MOVEMENT_TYPE_FOLLOW_PLAYER)
         && gSprites[obj->spriteId].sTypeFuncId != 0)
        {
            ClearObjectEventMovement(obj, &gSprites[obj->spriteId]);
            ScriptMovement_StartObjectMovementScript(obj->localId, obj->mapNum, obj->mapGroup, EnterPokeballMovement);
        }
        return;
    }

    nextMoveActionId = *movementScript;
    if (nextMoveActionId == MOVEMENT_ACTION_STEP_END)
    {
        SetMovementScriptFinished(taskId, moveScrId);
        FreezeObjectEvent(&gObjectEvents[objEventId]);
    }
    else
    {
        if (!ObjectEventSetHeldMovement(&gObjectEvents[objEventId], nextMoveActionId))
        {
            movementScript++;
            SetMovementScript(moveScrId, movementScript);
        }
    }
}

#undef sTypeFuncId
#undef sTimer
