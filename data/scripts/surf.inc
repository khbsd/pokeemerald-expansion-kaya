EventScript_UseSurf::
	checkfieldmove FIELD_MOVE_SURF
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
	lockall
	goto_if_set FLAG_SYS_USE_SURF, EventScript_AutoUseConsecutiveSurf
	dofieldeffect FLDEFF_USE_SURF
	end

EventScript_AutoUseConsecutiveSurf::
	lockall
	dofieldeffect FLDEFF_USE_SURF
	end

EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	closemessage
	end

EventScript_CurrentTooFast::
	lockall
	checkfieldmove FIELD_MOVE_SURF
	goto_if_eq VAR_RESULT, FALSE, EventScript_CurrentTooFastEndMsg
	playse SE_SELECT
	msgbox Text_CurrentTooFast
EventScript_CurrentTooFastEndMsg::
	releaseall
	end
