OldaleTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OldaleTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OLDALE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

OldaleTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Boy::
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Elder_Tera::
    lock
    faceplayer
    //msgbox "I can change the Hidden Power Type of a Pokemon.", MSGBOX_DEFAULT
    call ChoosePartyMon
    dynmultipush TYPE_FIGHTING, TYPE_FIGHTING
    dynmultipush TYPE_FLYING, TYPE_FLYING
    dynmultipush TYPE_POISON, TYPE_POISON
    dynmultipush TYPE_GROUND, TYPE_GROUND
    dynmultipush TYPE_ROCK, TYPE_ROCK
    dynmultipush TYPE_BUG, TYPE_BUG
    dynmultipush TYPE_GHOST, TYPE_GHOST
    dynmultipush TYPE_STEEL, TYPE_STEEL
    dynmultipush TYPE_FIRE, TYPE_FIRE
    dynmultipush TYPE_WATER, TYPE_WATER
    dynmultipush TYPE_GRASS, TYPE_GRASS
    dynmultipush TYPE_ELECTRIC, TYPE_ELECTRIC
    dynmultipush TYPE_PSYCHIC, TYPE_PSYCHIC
    dynmultipush TYPE_ICE, TYPE_ICE
    dynmultipush TYPE_DRAGON, TYPE_DRAGON
    dynmultipush TYPE_DARK, TYPE_DARK
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    copyvar VAR_0x8005, VAR_RESULT
    //special(ChangeTeraType)
    end

OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
	.string "That PC in the corner there is\n"
	.string "for any POKéMON TRAINER to use.\p"
	.string "Naturally, that means you're welcome\n"
	.string "to use it, too.$"

OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
	.string "POKéMON CENTERS are great!\p"
	.string "You can use their services as much\n"
	.string "as you like, and it's all for free.\l"
	.string "You never have to worry!$"

OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "But they say they're still making\n"
	.string "adjustments.$"

OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "I traded POKéMON right away.$"

