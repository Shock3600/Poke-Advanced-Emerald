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

OldaleTown_PokemonCenter_1F_EventScript_Tera_Ghost::
    waitstate
    setteratype TYPE_GHOST, 0
	msgbox OldaleTown_PokemonCenter_1F_Text_Tera_Ghost, MSGBOX_NPC
    release
    end

OldaleTown_PokemonCenter_1F_EventScript_Tera_Grass::
    waitstate
    setteratype TYPE_GRASS, 0
	msgbox OldaleTown_PokemonCenter_1F_Text_Tera_Grass, MSGBOX_NPC
    release
    end

OldaleTown_PokemonCenter_1F_EventScript_Tera_Ice::
    waitstate
    setteratype TYPE_ICE, 0
	msgbox OldaleTown_PokemonCenter_1F_Text_Tera_Ice, MSGBOX_NPC
    release
    end

OldaleTown_PokemonCenter_1F_EventScript_Tera_Ground::
    waitstate
    setteratype TYPE_GROUND, 0
	msgbox OldaleTown_PokemonCenter_1F_Text_Tera_Ground, MSGBOX_NPC
    release
    end

OldaleTown_PokemonCenter_1F_EventScript_HyperTrain::
	hypertrain STAT_HP, 0
	hypertrain STAT_ATK, 0
	hypertrain STAT_DEF, 0
	hypertrain STAT_SPEED, 0
	hypertrain STAT_SPATK, 0
	hypertrain STAT_SPDEF, 0
	msgbox OldaleTown_PokemonCenter_1F_Text_HyperTrain, MSGBOX_NPC
    release
    end

OldaleTown_PokemonCenter_1F_Text_Tera_Ghost:
	.string "Your first Pokemon's\n"
	.string "HP type is now Ghost.$"

OldaleTown_PokemonCenter_1F_Text_Tera_Grass:
	.string "Your first Pokemon's\n"
	.string "HP type is now Ghost.$"

OldaleTown_PokemonCenter_1F_Text_Tera_Ice:
	.string "Your first Pokemon's\n"
	.string "HP type is now Ghost.$"

OldaleTown_PokemonCenter_1F_Text_Tera_Ground:
	.string "Your first Pokemon's\n"
	.string "HP type is now Ghost.$"

OldaleTown_PokemonCenter_1F_Text_HyperTrain:
	.string "Your first Pokemon's\n"
	.string "IV's are now maxed out.$"

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

