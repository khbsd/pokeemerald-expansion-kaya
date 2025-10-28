	.macro inc x:req
	.set \x, \x + 1
	.endm

	.macro enum_start x=0
	.set __enum__, \x
	.endm

	.macro enum constant:req
	.equiv \constant, __enum__
	inc __enum__
	.endm

    .macro keysplit label:req, starting_note
	.ifb \starting_note
		.global keysplit_\label
		keysplit_\label:
		.set _last_note, 0
	.else
		.set keysplit_\label, . - \starting_note
		.set _last_note, \starting_note
	.endif
	.set _last_split, 0
	.endm

    .macro split index:req, ending_note:req
	.if \ending_note < _last_note
		.if _last_split == 0
			.error "split's ending_note earlier than previous keysplit's starting_note"
		.else
			.error "split's ending_note earlier than previous split's ending_note"
		.endif
	.else
	.rept \ending_note - _last_note
		.byte \index
	.endr
	.endif
	.set _last_note, \ending_note
	.set _last_split, 1
	.endm

    .macro voice_group label:req, starting_note
	.align 2
	.ifb \starting_note
		.global voicegroup_\label
		voicegroup_\label:
	.else
		.set voicegroup_\label, . - \starting_note * 0xC
	.endif
	.endm
