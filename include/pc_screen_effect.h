#ifndef GUARD_PC_SCREEN_EFFECT_H
#define GUARD_PC_SCREEN_EFFECT_H

struct PCScreenEffectStruct
{
    /*0x00*/ u32 tileTag;
    /*0x02*/ u32 paletteTag;
    /*0x04*/ u32 unk04;
    /*0x06*/ u32 unk06;
    /*0x08*/ u32 unk08;
    /*0x0A*/ u32 unk0A;
    /*0x0C*/ s16 unk0C;
    /*0x10*/ u32 selectedPalettes;
};

#endif //GUARD_PC_SCREEN_EFFECT_H
