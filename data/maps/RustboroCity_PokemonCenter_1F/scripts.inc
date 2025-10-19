RustboroCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

RustboroCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

RustboroCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_RUSTBORO_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_Man::
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Boy::
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Girl::
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Tera_Ghost::
    setteratype TYPE_GHOST, 0
	msgbox RustboroCity_PokemonCenter_1F_Text_Tera_Ghost, MSGBOX_NPC
    end

RustboroCity_PokemonCenter_1F_EventScript_Tera_Grass::
    setteratype TYPE_GRASS, 0
	msgbox RustboroCity_PokemonCenter_1F_Text_Tera_Grass, MSGBOX_NPC
    end

RustboroCity_PokemonCenter_1F_EventScript_Tera_Ice::
    setteratype TYPE_ICE, 0
	msgbox RustboroCity_PokemonCenter_1F_Text_Tera_Ice, MSGBOX_NPC
    end

RustboroCity_PokemonCenter_1F_EventScript_Tera_Ground::
    setteratype TYPE_GROUND, 0
	msgbox RustboroCity_PokemonCenter_1F_Text_Tera_Ground, MSGBOX_NPC
    end

RustboroCity_PokemonCenter_1F_EventScript_HyperTrain::
	hypertrain STAT_HP, 0
	hypertrain STAT_ATK, 0
	hypertrain STAT_DEF, 0
	hypertrain STAT_SPEED, 0
	hypertrain STAT_SPATK, 0
	hypertrain STAT_SPDEF, 0
	msgbox RustboroCity_PokemonCenter_1F_Text_HyperTrain, MSGBOX_NPC
    release
    end

RustboroCity_PokemonCenter_1F_Text_Tera_Ghost:
	.string "Your first Pokemon's\n"
	.string "HP type is now Ghost.$"

RustboroCity_PokemonCenter_1F_Text_Tera_Grass:
	.string "Your first Pokemon's\n"
	.string "HP type is now Grass.$"

RustboroCity_PokemonCenter_1F_Text_Tera_Ice:
	.string "Your first Pokemon's\n"
	.string "HP type is now Ice.$"

RustboroCity_PokemonCenter_1F_Text_Tera_Ground:
	.string "Your first Pokemon's\n"
	.string "HP type is now Ground.$"

RustboroCity_PokemonCenter_1F_Text_HyperTrain:
	.string "Your first Pokemon's\n"
	.string "IV's are now maxed out.$"

RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
	.string "My POKéMON has a NAIVE nature, and my\n"
	.string "friend's has a JOLLY nature.\p"
	.string "It's fascinating how POKéMON have\n"
	.string "personalities!$"

RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
	.string "Just like people, there are male and\n"
	.string "female POKéMON.\p"
	.string "But no one seems to have any idea how\n"
	.string "they're different.$"

RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
	.string "The man next door gave me an HM!\p"
	.string "I used it to teach my POKéMON how to\n"
	.string "CUT down skinny trees.$"

