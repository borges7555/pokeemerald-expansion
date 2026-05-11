# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 3 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 4 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 5 "data/maps/EverGrandeCity/scripts.pory"

# 6 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 7 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 8 "data/maps/EverGrandeCity/scripts.pory"
	end
# 9 "data/maps/EverGrandeCity/scripts.pory"

# 10 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 11 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 12 "data/maps/EverGrandeCity/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity/scripts.pory"

# 14 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 15 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 16 "data/maps/EverGrandeCity/scripts.pory"
	end
# 17 "data/maps/EverGrandeCity/scripts.pory"

# 18 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 19 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 20 "data/maps/EverGrandeCity/scripts.pory"
	end
# 21 "data/maps/EverGrandeCity/scripts.pory"

# 22 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 23 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 24 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/EverGrandeCity/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity/scripts.pory"

# 27 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 28 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 29 "data/maps/EverGrandeCity/scripts.pory"

# 30 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 31 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 32 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 33 "data/maps/EverGrandeCity/scripts.pory"

# 34 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 35 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 36 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 37 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

EverGrandeCity_EventScript_BorgesBattle::
# 42 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 43 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 44 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_double TRAINER_BORGES_EVERGRANDE, EverGrandeCity_Text_Borges_Intro, EverGrandeCity_Text_Borges_Outro, EverGrandeCity_Text_Borges_NotEnoughPokemons
# 45 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Borges_PostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 47 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_Reshiram::
# 68 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 69 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_Reshiram_Text_0
# 70 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 71 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_CovasBattle::
# 76 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 77 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 78 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_double TRAINER_COVAS_EVERGRANDE, EverGrandeCity_Text_Covas_Intro, EverGrandeCity_Text_Covas_Outro, EverGrandeCity_Text_Covas_NotEnoughPokemons
# 79 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Covas_PostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 81 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_Rayquaza::
# 102 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 103 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_Rayquaza_Text_0
# 104 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 105 "data/maps/EverGrandeCity/scripts.pory"
	release
	end


EverGrandeCity_EventScript_Reshiram_Text_0:
# 69 "data/maps/EverGrandeCity/scripts.pory"
	.string "PREEEAAH!$"

EverGrandeCity_EventScript_Rayquaza_Text_0:
# 103 "data/maps/EverGrandeCity/scripts.pory"
	.string "KIYURYURSHEEAH!$"

EverGrandeCity_Text_Borges_Intro::
# 51 "data/maps/EverGrandeCity/scripts.pory"
	.string "BORGES: Let's see if you are ready to\n"
	.string "challenge the POKéMON LEAGUE.$"

EverGrandeCity_Text_Borges_Outro::
# 55 "data/maps/EverGrandeCity/scripts.pory"
	.string "Seems like you are ready after all.$"

EverGrandeCity_Text_Borges_NotEnoughPokemons::
# 59 "data/maps/EverGrandeCity/scripts.pory"
	.string "BORGES: Come back when you have two or\n"
	.string "more POKéMON in your party.$"

EverGrandeCity_Text_Borges_PostBattle::
# 63 "data/maps/EverGrandeCity/scripts.pory"
	.string "BORGES: Good luck in the POKéMON\n"
	.string "LEAGUE.$"

EverGrandeCity_Text_Covas_Intro::
# 85 "data/maps/EverGrandeCity/scripts.pory"
	.string "COVAS: Boa tarde.$"

EverGrandeCity_Text_Covas_Outro::
# 89 "data/maps/EverGrandeCity/scripts.pory"
	.string "COVAS: Fucking noob.$"

EverGrandeCity_Text_Covas_NotEnoughPokemons::
# 93 "data/maps/EverGrandeCity/scripts.pory"
	.string "COVAS: Pobre.$"

EverGrandeCity_Text_Covas_PostBattle::
# 97 "data/maps/EverGrandeCity/scripts.pory"
	.string "COVAS: Desampara-me a loja preto.$"
