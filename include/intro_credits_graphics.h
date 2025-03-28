#ifndef GUARD_INTRO_CREDITS_GRAPHICS_H
#define GUARD_INTRO_CREDITS_GRAPHICS_H

// States for gIntroCredits_MovingSceneryState
enum {
    INTROCRED_SCENERY_NORMAL,
    INTROCRED_SCENERY_DESTROY,
    INTROCRED_SCENERY_FROZEN,
};

// Scenes for the Credits sequence
enum {
    SCENE_OCEAN_MORNING,
    SCENE_OCEAN_SUNSET,
    SCENE_FOREST_RIVAL_ARRIVE,
    SCENE_FOREST_CATCH_RIVAL,
    SCENE_CITY_NIGHT,
};

extern u32 gIntroCredits_MovingSceneryVBase;
extern s32 gIntroCredits_MovingSceneryVOffset;
extern s32 gIntroCredits_MovingSceneryState;

extern const struct CompressedSpriteSheet gSpriteSheet_IntroBrendan[];
extern const struct CompressedSpriteSheet gSpriteSheet_IntroMay[];
extern const struct CompressedSpriteSheet gSpriteSheet_IntroBicycle[];
extern const struct CompressedSpriteSheet gSpriteSheet_IntroFlygon[];
extern const struct SpritePalette gSpritePalettes_IntroPlayerFlygon[];
extern const struct CompressedSpriteSheet gSpriteSheet_CreditsBrendan[];
extern const struct CompressedSpriteSheet gSpriteSheet_CreditsMay[];
extern const struct CompressedSpriteSheet gSpriteSheet_CreditsBicycle[];
extern const struct CompressedSpriteSheet gSpriteSheet_CreditsRivalBrendan[];
extern const struct CompressedSpriteSheet gSpriteSheet_CreditsRivalMay[];
extern const struct SpritePalette gSpritePalettes_Credits[];

void LoadIntroPart2Graphics(u8 scenery);
void SetIntroPart2BgCnt(u8 scenery);
void LoadCreditsSceneGraphics(u8);
void SetCreditsSceneBgCnt(u8);
u8 CreateBicycleBgAnimationTask(u8 mode, u32 bg1Speed, u32 bg2Speed, u32 bg3Speed);
void CycleSceneryPalette(u8);
u8 CreateIntroBrendanSprite(s32 x, s32 y);
u8 CreateIntroMaySprite(s32 x, s32 y);
u8 CreateIntroFlygonSprite(s32 x, s32 y);

#endif // GUARD_INTRO_CREDITS_GRAPHICS_H
