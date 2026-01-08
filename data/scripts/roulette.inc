Roulette_EventScript_Table1::
	checkitem ITEM_COIN_CASE
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, 1, Roulette_EventScript_NotEnoughCoins
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 0
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Table2::
	checkitem ITEM_COIN_CASE
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, 1, Roulette_EventScript_NotEnoughCoins
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 1
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Play::
	callnative SetMinBet
	callnative IsSpecialRateDay
	goto_if_lt VAR_TEMP_2, VAR_0x8004, Roulette_EventScript_NotEnoughCoins
	goto_if_eq VAR_0x8005, 1, Roulette_EventScript_SpecialRateDay
	msgbox Roulette_Text_PlayMinimumWagerIsX, MSGBOX_YESNO
	closemessage
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelBJ
	playbgm MUS_GAME_CORNER, FALSE
	special PlayRoulette
	waitstate
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

Roulette_EventScript_SpecialRateDay:
	msgbox Roulette_Text_SpecialRateTable, MSGBOX_DEFAULT
	closemessage
	return

Roulette_EventScript_NotEnoughCoins:
	msgbox Roulette_Text_NotEnoughCoins, MSGBOX_DEFAULT
	closemessage
	releaseall
	end
