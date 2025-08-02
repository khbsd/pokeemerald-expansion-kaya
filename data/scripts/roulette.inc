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

Roulette_Text_PlayMinimumWagerIsX::
	.string "The minimum wager at this table\n"
	.string "is {STR_VAR_1}. Do you want to play?$"

Roulette_Text_NotEnoughCoins::
	.string "You don't have enough COINS.$"

Roulette_Text_SpecialRateTable::
	.string "Special rate table right now!$"

Roulette_Text_ControlsInstruction::
	.string "Place your wager with the + Control\n"
	.string "Pad, then press the A Button.$"

Roulette_Text_ItsAHit::
	.string "It's a hit!$"

Roulette_Text_Jackpot::
	.string "Jackpot!$"

Roulette_Text_NothingDoing::
	.string "Nothing doing!$"

Roulette_Text_YouveWonXCoins::
	.string "You've won {STR_VAR_1} COINS!$"

Roulette_Text_NoCoinsLeft::
	.string "No COINS left…$"

Roulette_Text_KeepPlaying::
	.string "Keep playing?$"

Roulette_Text_BoardWillBeCleared::
	.string "The ROULETTE board will be cleared.$"

@ Unused
Roulette_Text_YouDontHaveACoinCase::
	.string "You don't have a COIN CASE.$"

Roulette_Text_CoinCaseIsFull::
	.string "Your COIN CASE is full!\n"
	.string "Coins can be exchanged for prizes.$"
