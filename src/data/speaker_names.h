#define COMPOUND_STR(str) (const u8[])_(str)
static const u8 *const sSpeakerNamesTable[SP_NAME_COUNT] =
{
    [SP_NAME_MOM] = COMPOUND_STR("MOM"),
    [SP_NAME_PLAYER] = COMPOUND_STR("{PLAYER}"),
};
