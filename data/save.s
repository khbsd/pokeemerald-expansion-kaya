	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata

gUnknown_085CDC00:: @ 85CDC00
	.incbin "baserom.gba", 0x5cdc00, 0x38
