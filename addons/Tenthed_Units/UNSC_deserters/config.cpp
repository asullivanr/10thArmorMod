class CfgPatches {
    class Tenthed_UNSCDeserters {
        author = "Akira";
        name = "10th ODST: UNSC Deserters";
        requiredVersion=0.1;
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgFactionClasses {
    class Tenthed_Fact_UNSCDeserters {
        displayName = "[10th] UNSC Deserters";
        side = 0;
        flag = "\OPTRE_Core\Data\flag_Ins_ca.paa";
        icon = "\OPTRE_Core\Data\flag_Ins_ca.paa";
        priority = 0;
    };
};

class CfgGroups {
}
class CfgVehicles {
    class O_Soldier_F;

    class Tenthed_Fact_Deserter_Base : O_Soldier_F {
    author = "Akira";
    scopeCurator = 2;
    displayName = "base unit";
    side = 0;
    faction = "Tenthed_Fact_UNSCDeserters";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "OPTRE_UNSC_Army_Uniform_S_OLITRO";

    linkedItems[] = {"V_SmershVest_01_F","TCF_BERET_URA","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
    respawnlinkedItems[] = {"V_SmershVest_01_F","TCF_BERET_URA","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};

    weapons[] = {"TCF_M14","OPTRE_M6B","OPTRE_Binoculars"};
    respawnWeapons[] = {"TCF_M14","OPTRE_M6B","OPTRE_Binoculars"};

    magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

    backpack = "B_AssaultPack_khk";

    };
}