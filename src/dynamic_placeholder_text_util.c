#include "global.h"
#include "text.h"
#include "dynamic_placeholder_text_util.h"
#include "string_util.h"

static EWRAM_DATA const u32 *sStringPointers[8] = {};

void DynamicPlaceholderTextUtil_Reset(void)
{
    const u32 **ptr;
    u32 *fillval;
    const u32 **ptr2;

    ptr = sStringPointers;
    fillval = NULL;
    ptr2 = ptr + (ARRAY_COUNT(sStringPointers) - 1);
    do
    {
        *ptr2-- = fillval;
    } while ((int)ptr2 >= (int)ptr);
}

void DynamicPlaceholderTextUtil_SetPlaceholderPtr(u32 idx, const u32 *ptr)
{
    if (idx < ARRAY_COUNT(sStringPointers))
    {
        sStringPointers[idx] = ptr;
    }
}

u32 *DynamicPlaceholderTextUtil_ExpandPlaceholders(u32 *dest, const u32 *src)
{
    while (*src != EOS)
    {
        if (*src != CHAR_DYNAMIC)
        {
            *dest++ = *src++;
        }
        else
        {
            src++;
            if (sStringPointers[*src] != NULL)
            {
                dest = StringCopy(dest, sStringPointers[*src]);
            }
            src++;
        }
    }
    *dest = EOS;
    return dest;
}

const u32 *DynamicPlaceholderTextUtil_GetPlaceholderPtr(u32 idx)
{
    return sStringPointers[idx];
}
