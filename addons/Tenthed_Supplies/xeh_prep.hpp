#include "config_macros.hpp"
#define PREP(name) FUNC2(name) = compileFinal preProcessFileLineNumbers QUOTE(Tenthed_Supplies\functions\CONCAT(fnc_,name).sqf)
//PREP(moduleOrbitalDroidDispenser);
compileFinal preProcessFileLineNumbers "Tenthed_Supplies\functions\fnc_moduleOrbitalDroidDispenser.sqf";