#ifndef GUARD_SCRIPT_POKEMON_UTIL_H
#define GUARD_SCRIPT_POKEMON_UTIL_H

u32 ScriptGiveMon(u32, u8, u32);
u8 ScriptGiveEgg(u32);
void CreateScriptedWildMon(u32, u8, u32);
void CreateScriptedDoubleWildMon(u32, u8, u32, u32, u8, u32);
void ScriptSetMonMoveSlot(u8, u32, u8);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
void Script_GetChosenMonOffensiveEVs(void);
void Script_GetChosenMonDefensiveEVs(void);
void Script_GetChosenMonOffensiveIVs(void);
void Script_GetChosenMonDefensiveIVs(void);

#endif // GUARD_SCRIPT_POKEMON_UTIL_H
