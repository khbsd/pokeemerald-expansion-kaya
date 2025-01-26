EventScript_UseSurf::
	checkpartymove MOVE_SURF
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndUseSurf
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
	end

EventScript_AutoUseSurf::
	bufferpartymonnick STR_VAR_1, 0
	setfieldeffectargument 0, 0
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	setflag FLAG_SYS_USE_SURF
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_SURF
	end

EventScript_AutoUseConsecutiveSurf::
	bufferpartymonnick STR_VAR_1, 0
	setfieldeffectargument 0, 0
	lockall
	dofieldeffect FLDEFF_USE_SURF
	end

EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	closemessage
	end
