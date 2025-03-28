#ifndef GUARD_WEATHER_H
#define GUARD_WEATHER_H

#include "sprite.h"
#include "constants/field_weather.h"

#define TAG_WEATHER_START 0x1200
enum {
    GFXTAG_CLOUD = TAG_WEATHER_START,
    GFXTAG_FOG_H,
    GFXTAG_ASH,
    GFXTAG_FOG_D,
    GFXTAG_SANDSTORM,
    GFXTAG_BUBBLE,
    GFXTAG_RAIN,
};
enum {
    PALTAG_WEATHER = TAG_WEATHER_START,
    PALTAG_WEATHER_2
};

#define NUM_WEATHER_COLOR_MAPS 19

struct Weather
{
    union
    {
        struct
        {
            struct Sprite *rainSprites[MAX_RAIN_SPRITES];
            struct Sprite *snowflakeSprites[101];
            struct Sprite *cloudSprites[NUM_CLOUD_SPRITES];
        } s1;
        struct
        {
            struct Sprite *fogHSprites[NUM_FOG_HORIZONTAL_SPRITES];
            struct Sprite *ashSprites[NUM_ASH_SPRITES];
            struct Sprite *fogDSprites[NUM_FOG_DIAGONAL_SPRITES];
            struct Sprite *sandstormSprites1[NUM_SANDSTORM_SPRITES];
            struct Sprite *sandstormSprites2[NUM_SWIRL_SANDSTORM_SPRITES];
        } s2;
    } sprites;
    s32 colorMapIndex;
    s32 targetColorMapIndex;
    u8 colorMapStepDelay;
    u8 colorMapStepCounter;
    u32 fadeDestColor;
    u8 palProcessingState;
    u8 fadeScreenCounter;
    bool32 readyForInit;
    u8 taskId;
    u8 fadeInFirstFrame;
    u8 fadeInTimer;
    u32 initStep;
    u32 finishStep;
    u8 currWeather;
    u8 nextWeather;
    u8 weatherGfxLoaded;
    bool32 weatherChangeComplete;
    u8 weatherPicSpritePalIndex;
    u8 contrastColorMapSpritePalIndex;
    // Rain
    u32 rainSpriteVisibleCounter;
    u8 curRainSpriteIndex;
    u8 targetRainSpriteCount;
    u8 rainSpriteCount;
    u8 rainSpriteVisibleDelay;
    u8 isDownpour;
    u8 rainStrength;
    u8 cloudSpritesCreated;
    // Snow
    u32 snowflakeVisibleCounter;
    u32 snowflakeTimer;
    u8 snowflakeSpriteCount;
    u8 targetSnowflakeSpriteCount;
    // Thunderstorm
    u32 thunderTimer;        // general-purpose timer for state transitions
    u32 thunderSETimer;      // timer for thunder sound effect
    bool32 thunderAllowEnd;
    bool32 thunderLongBolt;   // true if this cycle will end in a long lightning bolt
    u8 thunderShortBolts;    // the number of short bolts this cycle
    bool32 thunderEnqueued;
    // Horizontal fog
    u32 fogHScrollPosX;
    u32 fogHScrollCounter;
    u32 fogHScrollOffset;
    u8 lightenedFogSpritePals[6];
    u8 lightenedFogSpritePalsCount;
    u8 fogHSpritesCreated;
    // Ash
    u32 ashBaseSpritesX;
    u32 ashUnused;
    u8 ashSpritesCreated;
    // Sandstorm
    u32 sandstormXOffset;
    u32 sandstormYOffset;
    u32 sandstormUnused;
    u32 sandstormBaseSpritesX;
    u32 sandstormPosY;
    u32 sandstormWaveIndex;
    u32 sandstormWaveCounter;
    u8 sandstormSpritesCreated;
    u8 sandstormSwirlSpritesCreated;
    // Diagonal fog
    u32 fogDBaseSpritesX;
    u32 fogDPosY;
    u32 fogDScrollXCounter;
    u32 fogDScrollYCounter;
    u32 fogDXOffset;
    u32 fogDYOffset;
    u8 fogDSpritesCreated;
    // Bubbles
    u32 bubblesDelayCounter;
    u32 bubblesDelayIndex;
    u32 bubblesCoordsIndex;
    u32 bubblesSpriteCount;
    u8 bubblesSpritesCreated;

    u32 currBlendEVA;
    u32 currBlendEVB;
    u32 targetBlendEVA;
    u32 targetBlendEVB;
    u8 blendUpdateCounter;
    u8 blendFrameCounter;
    u8 blendDelay;
    // Drought
    s32 droughtBrightnessStage;
    s32 droughtLastBrightnessStage;
    s32 droughtTimer;
    s32 droughtState;
    u8 loadDroughtPalsIndex;
    u8 loadDroughtPalsOffset;
};

// field_weather.c
extern struct Weather gWeather;
extern struct Weather *const gWeatherPtr;
extern const u32 gFogPalette[];

// field_weather_effect.c
extern const u8 gWeatherFogHorizontalTiles[];

void StartWeather(void);
void SetNextWeather(u8 weather);
void SetCurrentAndNextWeather(u8 weather);
void SetCurrentAndNextWeatherNoDelay(u8 weather);
void ApplyWeatherColorMapIfIdle(s32 colorMapIndex);
void ApplyWeatherColorMapIfIdle_Gradual(u8 colorMapIndex, u8 targetColorMapIndex, u8 colorMapStepDelay);
void FadeScreen(u8 mode, s32 delay);
bool32 IsWeatherNotFadingIn(void);
void UpdateSpritePaletteWithWeather(u8 spritePaletteIndex);
void ApplyWeatherColorMapToPal(u8 paletteIndex);
void LoadCustomWeatherSpritePalette(const u32 *palette);
void ResetDroughtWeatherPaletteLoading(void);
bool32 LoadDroughtWeatherPalettes(void);
void DroughtStateInit(void);
void DroughtStateRun(void);
void Weather_SetBlendCoeffs(u8 eva, u8 evb);
void Weather_SetTargetBlendCoeffs(u8 eva, u8 evb, int delay);
bool32 Weather_UpdateBlend(void);
u8 GetCurrentWeather(void);
void SetRainStrengthFromSoundEffect(u32 soundEffect);
void PlayRainStoppingSoundEffect(void);
u8 IsWeatherChangeComplete(void);
void SetWeatherScreenFadeOut(void);
void SetWeatherPalStateIdle(void);
void PreservePaletteInWeather(u8 preservedPalIndex);
void ResetPreservedPalettesInWeather(void);
bool32 IsWeatherAlphaBlend(void);

// field_weather_effect.c
void Clouds_InitVars(void);
void Clouds_Main(void);
void Clouds_InitAll(void);
bool32 Clouds_Finish(void);
void Sunny_InitVars(void);
void Sunny_Main(void);
void Sunny_InitAll(void);
bool32 Sunny_Finish(void);
void Rain_InitVars(void);
void Rain_Main(void);
void Rain_InitAll(void);
bool32 Rain_Finish(void);
void Snow_InitVars(void);
void Snow_Main(void);
void Snow_InitAll(void);
bool32 Snow_Finish(void);
void Thunderstorm_InitVars(void);
void Thunderstorm_Main(void);
void Thunderstorm_InitAll(void);
bool32 Thunderstorm_Finish(void);
void FogHorizontal_InitVars(void);
void FogHorizontal_Main(void);
void FogHorizontal_InitAll(void);
bool32 FogHorizontal_Finish(void);
void Ash_InitVars(void);
void Ash_Main(void);
void Ash_InitAll(void);
bool32 Ash_Finish(void);
void Sandstorm_InitVars(void);
void Sandstorm_Main(void);
void Sandstorm_InitAll(void);
bool32 Sandstorm_Finish(void);
void FogDiagonal_InitVars(void);
void FogDiagonal_Main(void);
void FogDiagonal_InitAll(void);
bool32 FogDiagonal_Finish(void);
void Shade_InitVars(void);
void Shade_Main(void);
void Shade_InitAll(void);
bool32 Shade_Finish(void);
void Drought_InitVars(void);
void Drought_Main(void);
void Drought_InitAll(void);
bool32 Drought_Finish(void);
void Downpour_InitVars(void);
void Downpour_InitAll(void);
void Bubbles_InitVars(void);
void Bubbles_Main(void);
void Bubbles_InitAll(void);
bool32 Bubbles_Finish(void);

u8 GetSavedWeather(void);
void SetSavedWeather(u32 weather);
void SetSavedWeatherFromCurrMapHeader(void);
void SetWeather(u32 weather);
void DoCurrentWeather(void);
void UpdateWeatherPerDay(u32 increment);
void ResumePausedWeather(void);

#endif // GUARD_WEATHER_H
