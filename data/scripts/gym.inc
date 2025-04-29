Common_Gym_Defeated_Upgrade_Vial_And_Cap::
    getcurrentlevelcap
    buffernumberstring STR_VAR_1, VAR_LEVEL_CAP
    pokevialincreasesize
    msgbox Gym_Text_Upgrades, MSGBOX_DEFAULT
    release
    return

Gym_Text_Upgrades::
	.string "Your PokéVial can now carry one more\n"
	.string "dose, and your level cap is set to {STR_VAR_1}.$"
