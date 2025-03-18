#ifndef GUARD_POKEDEX_AREA_SCREEN_H
#define GUARD_POKEDEX_AREA_SCREEN_H

extern u32 gAreaTimeOfDay;

enum ChangeTimeOfDay 
{
    DEX_AREA_INC_TIME_OF_DAY,
    DEX_AREA_DEC_TIME_OF_DAY
};

void ShowPokedexAreaScreen(u16 species, u8 *screenSwitchState, u32 timeOfDay);

#endif // GUARD_POKEDEX_AREA_SCREEN_H
