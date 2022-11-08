class CfgPatches {
	class Tenthed_Supplies {
		author = "Silver, Kodiak, Crow, Akira";
		name = "10th ODST: Supplies Retextures";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core"
		};
		units[] = {
			"Tenthed_SupplyPod_Empty",
			"Supply10thMedPod",
			"Tenthed_Supply10thAmmoPod",
			"Tenthed_Supply10thExplosivesPod",

			"Tenthed_SupplyPodTest",

			"moduleOrdnanceSupplyPodAmmo",
			"moduleOrdnanceSupplyPodExplosives",
			"moduleOrdnanceSupplyPodMedical"
		};
		ammo[] = {
			"SupplyPod_Round"
		};
	};
};
class CfgFactionClasses {
	class SupplyPodFaction {
		displayName = "[10th] Orbital Supply Pods";
		priority = 2;
		side = 7;
	};
};
class CfgVehicles {
	class NATO_Box_Base;
	class ModuleOrdnance_F;

	class Tenthed_SupplyPod_Empty : NATO_Box_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Supply Pod - Empty";
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		hiddenSelections[] = {
			"attach_Cover"
		};
		faction = "Empty";
		editorCategory = "Tenthed_EditorCategory_Objects";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Supplies";
		author = "Akira";
		icon = "iconCrateWpns";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		maximumLoad = 1000;
		transportMaxBackpacks = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.5;
		armor = 10000;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
	};

	class Tenthed_Supply10thAmmoPod : Tenthed_SupplyPod_Empty
	{
		displayName = "Supply Pod - Ammo";
		class TransportMagazines
		{
			class M7xMag
			{
				magazine = "OPTRE_60Rnd_5x23mm_Mag_Tracer";
				count = 40;
			};
			class MA5CMag
			{
				magazine = "OPTRE_32Rnd_762x51_Mag_Tracer";
				count = 80;
			};
			class BR45Mag
			{
				magazine = "OPTRE_36Rnd_95x40_Mag_Tracer";
				count = 60;
			};
			class AROM37Mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag_Tracer";
				count = 40;
			};
			class shotgunSlug
			{
				magazine = "OPTRE_12Rnd_8Gauge_Slug";
				count = 25;
			};
			class ShotGunPelliet
			{
				magazine = "OPTRE_12Rnd_8Gauge_Pellet";
				count = 25;
			};
			class M58SMag
			{
				magazine = "OPTRE_42Rnd_95x40_mag_Tracer";
				count = 40;
			};
			class MA5BMag
			{
				magazine = "OPTRE_60Rnd_762x51_Mag_Tracer";
				count = 60;
			};
			class AR12Mag
			{
				magazine = "SC_35Rnd_762x51_Mag";
				count = 60;
			};
			class CommandoMag
			{
				magazine = "Commando_20Rnd_65_TracerY_Mag";
				count = 40;
			};
			class RASMag
			{
				magazine = "DMNS_42Rnd_762x54_Mag_Tracer";
				count = 40;
			};
			class M247SmallBox
			{
				magazine = "OPTRE_100Rnd_762x51_Box_Tracer_Yellow";
				count = 30;
			};
			class M247BigBox
			{
				magazine = "OPTRE_400Rnd_762x51_Box_Tracer";
				count = 30;
			};
			class M73SmallBox
			{
				magazine = "OPTRE_100Rnd_95x40_Box_Tracer";
				count = 30;
			};
			class M73BigBox
			{
				magazine = "OPTRE_200Rnd_95x40_Box_Tracer";
				count = 25;
			};
			class M73HBigBox
			{
				magazine = "OPTRE_300Rnd_95x60_Box_JHPT";
				count = 25;
			};
			class CM12BigBox
			{
				magazine = "DMNS_150Rnd_30x06_Mag_Tracer";
				count = 25;
			};
			class SAWBigBox
			{
				magazine = "DMNS_100Rnd_762x51_Mag_Tracer";
				count = 25;
			};
			class DMR37Mag
			{
				magazine = "ACE_30Rnd_65_Creedmor_msbs_mag";
				count = 30;
			};
			class DMRAPMag
			{
				magazine = "OPTRE_15Rnd_762x51_Mag_Tracer";
				count = 30;
			};
			class DMRBallMag
			{
				magazine = "OPTRE_15Rnd_762x51_Mag";
				count = 30;
			};
			class BR37Mag
			{
				magazine = "OPTRE_10Rnd_338_Ap";
				count = 30;
			};
			class SSR55Mag
			{
				magazine = "SC_5Rnd_50HV_Mag";
				count = 30;
			};
			class MRS10XMag
			{
				magazine = "OPTRE_20Rnd_86x70_Mag_Tracer";
				count = 30;
			};
			class MRS10LMag
			{
				magazine = "10Rnd_338_Mag";
				count = 30;
			};
			class M12Mag
			{
				magazine = "OPTRE_64Rnd_57x31_Mag_Tracer";
				count = 30;
			};
			class MagBall
			{
				magazine = "OPTRE_8Rnd_127x40_Mag";
				count = 10;
			};
			class MagNarc
			{
				magazine = "OPTRE_8Rnd_127x40_Mag_NARQ";
				count = 5;
			};
			class MagAP
			{
				magazine = "OPTRE_8Rnd_127x40_Mag_AP";
				count = 10;
			};
			class SniperAP
			{
				magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag";
				count = 25;
			};
			class SniperHVAP
			{
				magazine = "OPTRE_4Rnd_145x114_HVAP_Mag";
				count = 25;
			};
			class SniperNarQ
			{
				magazine = "OPTRE_4Rnd_145x114_Mag_NARQ";
				count = 5;
			};
			class SRM7710Rnd
			{
				magazine = "OPTRE_10Rnd_127x99";
				count = 25;
			};

		};
		class TransportWeapons {};
		class TransportItems {};
	};
	class Tenthed_Supply10thExplosivesPod : Tenthed_SupplyPod_Empty
	{
		displayName = "Supply Pod - Explosives";
		class TransportMagazines
		{
			class M19SACLOS
			{
				magazine = "OPTRE_M41_Twin_HEAT_SACLOS";
				count = 20;
			};
			class M41SSRMAVHE
			{
				magazine = "OPTRE_M41_Twin_HE";
				count = 20;
			};
			class MortarIMpact
			{
				magazine = "potato_vz99_HE_multi";
				count = 30;
			};
			class C7Explosive
			{
				magazine = "C7_Remote_Mag";
				count = 30;
			};
			class APERSDispenser
			{
				magazine = "APERSMineDispenser_Mag";
				count = 15;
			};
			class M154Mine
			{
				magazine = "UNSCMine_Range_Mag";
				count = 10;
			};
			class UGL3
			{
				magazine = "3Rnd_HE_Grenade_shell";
				count = 20;
			};
			class UGL1
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 25;
			};
			class ImpactSmokeRed
			{
				magazine = "OPTRE_1Rnd_SmokeRed_Grenade_shell";
				count = 10;
			};
			class ImpactSmokeBlue
			{
				magazine = "OPTRE_1Rnd_SmokeBlue_Grenade_shell";
				count = 10;
			};
			class UGLSmokeRed
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 10;
			};
			class UGLSmokeBlue
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 10;
			};
			class M9Frag
			{
				magazine = "OPTRE_M9_Frag";
				count = 10;
			};
			class M2SmokeRed
			{
				magazine = "OPTRE_M2_Smoke_Red";
				count = 10;
			};
			class M2SmokeBlue
			{
				magazine = "OPTRE_M2_Smoke_Blue";
				count = 10;
			};
			class M2SmokeWhite
			{
				magazine = "OPTRE_M2_Smoke";
				count = 10;
			};
		};
		class TransportWeapons {};
		class TransportItems
		{
			class EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 2;
			};
			class FortifyTool
			{
				name = "ACE_Foritfy";
				count = 2;
			};
			class Toolkit
			{
				name = "Toolkit";
				count = 2;
			};
		};
	};
	class Tenthed_Supply10thMedPod : Tenthed_SupplyPod_Empty
	{
		displayName = "Supply Pod - Medical";
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems
		{
			class ACEsurguicalKit
			{
				name = "ACE_surgicalKit";
				count = 3;
			};
			class ACEPersonalAidKit
			{
				name = "ACE_personalAidKit";
				count = 3;
			};
			class AceBlood1000
			{
				name = "ACE_bloodIV";
				count = 20;
			};
			class AceBlood500
			{
				name = "ACE_bloodiv_500";
				count = 20;
			};
			class OPTRE_Biofoam
			{
				name = "OPTRE_Biofoam";
				count = 20;
			};
			class Epinephrine
			{
				name = "ACE_epinephrine";
				count = 20;
			};
			class Tourniquet
			{
				name = "ACE_tourniquet";
				count = 10;
			};
			class Fielddressing
			{
				name = "ACE_fieldDressing";
				count = 25;
			};
			class PackingBandage
			{
				name = "ACE_packingBandage";
				count = 25;
			};
			class ElasticBandage
			{
				name = "ACE_elasticBandage";
				count = 100;
			};
			class MediGel
			{
				name = "OPTRE_Medigel";
				count = 30;
			};
			class Splint
			{
				name = "ACE_splint";
				count = 30;
			};
		};
	};

	class Strategic;
	class StaticWeapon;
	class Newturret;
	class Tenthed_SupplyPodTest : StaticWeapon {
		scope = 2;
		scopeCurator = 2;
		displayName = "Supply Pod - ammo tester";
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		hiddenSelections[] = {
			"attach_Cover"
		};

		placement = "vertical";
		hasDriver = 0;
		class Turrets {
			class MainTurret1 : Newturret {
				gunnername = "Cargo";
				proxyType = "CPCargo";
				proxyindex = 1;
				GunnerinAction[] =
				{
					"mbt2_slot2b_in"
				};
				forceHideDriver = 1;
				forceHideGunner = 1;
				hideProxyInCombat = 1;
				driverForceOptics = 1;
				maxTurn = 0;
				minTurn = 0;
				minElev = 0;
				maxElev = 0;
				hasgunner = 0;
				initElev = 0;
				inGunnerMayFire = 0;
				memoryPointsGetInGunnerDir = "pos_cargo_dir";
				memoryPointsGetInGunnerCargo = "pos_cargo";
			};
		};

		faction = "Empty";
		editorCategory = "Tenthed_EditorCategory_Objects";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Supplies";
		author = "Akira";
		icon = "iconCrateWpns";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		maximumLoad = 1000;
		transportMaxBackpacks = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.5;
		armor = 10000;
		class TransportMagazines {
			class M7xMag {
				magazine = "OPTRE_60Rnd_5x23mm_Mag_Tracer";
				count = 40;
			};
			class MA5CMag {
				magazine = "OPTRE_32Rnd_762x51_Mag_Tracer";
				count = 80;
			};
			class BR45Mag {
				magazine = "OPTRE_36Rnd_95x40_Mag_Tracer";
				count = 60;
			};
			class AROM37Mag {
				magazine = "30Rnd_65x39_caseless_msbs_mag_Tracer";
				count = 40;
			};
			class shotgunSlug {
				magazine = "OPTRE_12Rnd_8Gauge_Slug";
				count = 25;
			};
			class ShotGunPelliet {
				magazine = "OPTRE_12Rnd_8Gauge_Pellet";
				count = 25;
			};
			class M58SMag {
				magazine = "OPTRE_42Rnd_95x40_mag_Tracer";
				count = 40;
			};
			class MA5BMag {
				magazine = "OPTRE_60Rnd_762x51_Mag_Tracer";
				count = 60;
			};
			class AR12Mag {
				magazine = "SC_35Rnd_762x51_Mag";
				count = 60;
			};
			class CommandoMag {
				magazine = "Commando_20Rnd_65_TracerY_Mag";
				count = 40;
			};
			class RASMag {
				magazine = "DMNS_42Rnd_762x54_Mag_Tracer";
				count = 40;
			};
			class M247SmallBox {
				magazine = "OPTRE_100Rnd_762x51_Box_Tracer_Yellow";
				count = 30;
			};
			class M247BigBox {
				magazine = "OPTRE_400Rnd_762x51_Box_Tracer";
				count = 30;
			};
			class M73SmallBox {
				magazine = "OPTRE_100Rnd_95x40_Box_Tracer";
				count = 30;
			};
			class M73BigBox {
				magazine = "OPTRE_200Rnd_95x40_Box_Tracer";
				count = 25;
			};
			class M73HBigBox {
				magazine = "OPTRE_300Rnd_95x60_Box_JHPT";
				count = 25;
			};
			class CM12BigBox {
				magazine = "DMNS_150Rnd_30x06_Mag_Tracer";
				count = 25;
			};
			class SAWBigBox {
				magazine = "DMNS_100Rnd_762x51_Mag_Tracer";
				count = 25;
			};
			class DMR37Mag {
				magazine = "ACE_30Rnd_65_Creedmor_msbs_mag";
				count = 30;
			};
			class DMRAPMag {
				magazine = "OPTRE_15Rnd_762x51_Mag_Tracer";
				count = 30;
			};
			class DMRBallMag {
				magazine = "OPTRE_15Rnd_762x51_Mag";
				count = 30;
			};
			class BR37Mag {
				magazine = "OPTRE_10Rnd_338_Ap";
				count = 30;
			};
			class SSR55Mag {
				magazine = "SC_5Rnd_50HV_Mag";
				count = 30;
			};
			class MRS10XMag {
				magazine = "OPTRE_20Rnd_86x70_Mag_Tracer";
				count = 30;
			};
			class MRS10LMag {
				magazine = "10Rnd_338_Mag";
				count = 30;
			};
			class M12Mag {
				magazine = "OPTRE_64Rnd_57x31_Mag_Tracer";
				count = 30;
			};
			class MagBall {
				magazine = "OPTRE_8Rnd_127x40_Mag";
				count = 10;
			};
			class MagNarc {
				magazine = "OPTRE_8Rnd_127x40_Mag_NARQ";
				count = 5;
			};
			class MagAP {
				magazine = "OPTRE_8Rnd_127x40_Mag_AP";
				count = 10;
			};
			class SniperAP {
				magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag";
				count = 25;
			};
			class SniperHVAP {
				magazine = "OPTRE_4Rnd_145x114_HVAP_Mag";
				count = 25;
			};
			class SniperNarQ {
				magazine = "OPTRE_4Rnd_145x114_Mag_NARQ";
				count = 5;
			};
			class SRM7710Rnd {
				magazine = "OPTRE_10Rnd_127x99";
				count = 25;
			};

		};
		class TransportWeapons {};
		class TransportItems {};
	};

	class ArgumentsBaseUnits;

	class supplyModuleTest : ModuleOrdnance_F {
		class ArgumentsBaseUnits {
			class Units;
		};
		class ModuleDescription;
	};

	class moduleOrdnanceSupplyPodAmmo : supplyModuleTest {
		author = "RD501";
		isGlobal = 1;
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "SupplyPodFaction";
		model = "\a3\Modules_F_Curator\Ordnance\surfacehowitzer.p3d";
		file = "\Tenthed_Supplies\functions\";
		class fnc_moduleorbitaldroiddispenser{};
		functionPriority = 1;
		displayName = "Orbital Supply Pod - Ammo";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		ammo = "SupplyPod_Round";
		class Arguments : ArgumentsBaseUnits {
			class Units : Units {};
			class PodType {
				displayName = "my param 2";
				description = "my param 2 description";
				typeName = "STRING"; // default
				defaultValue = "Supply10thAmmoPod";
			};
		};

		//podtype = "Tenthed_SupplyPodTest";
		//delete Arguments;
	};
	class moduleOrdnanceSupplyPodExplosives : moduleOrdnanceSupplyPodAmmo {
		displayName = "Orbital Supply Pod - Explosives";
		ammo = "SupplyPod_Round";
		podtype = "Supply10thExplosivesPod";
		//delete Arguments;
	};
	class moduleOrdnanceSupplyPodMedical : moduleOrdnanceSupplyPodAmmo {
		displayName = "Orbital Supply Pod - Medical";
		ammo = "SupplyPod_Round";
		podtype = "Supply10thMedPod";
		//delete Arguments;
	};
};
class CfgAmmo {
	class ModuleOrdnanceHowitzer_F_ammo;
	//class ModuleOrdnanceMortar_F_ammo;
	//class ModuleOrdnanceRocket_F_ammo;
	class SupplyPod_Round : ModuleOrdnanceHowitzer_F_ammo {
		caliber = 950;
		hit = 5000;
		allowAgainstInfantry = 1;
		canLock = 0;
		explosive = 1;
		fuseDistance = 30;
		indirectHit = 500;
		indirectHitRange = 2;
		maxSpeed = 1100;
		typicalSpeed = 1050;
		sideAirFriction = 0;
		submunitionAmmo = "";
		submunitionConeAngle = 30;
		simulation = "shotshell";
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
	};
};
class Extended_PreInit_EventHandlers {
	class Tenthed_Supplies {
		init = "call compileFinal preprocessFileLineNumbers 'Tenthed_Supplies\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers {
	class Tenthed_Supplies {
		init = "call compileFinal preprocessFileLineNumbers 'Tenthed_Supplies\XEH_postInit.sqf'";
	};
};
