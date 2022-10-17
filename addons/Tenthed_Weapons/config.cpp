class CfgPatches {
    class Tenthed_weapons {
        author = "Silver, Kodiak, Crow, Akira";
        name = "10th ODST: Weapons";
        requiredAddons[] = {
            "Tenthed_core",
			"sc_weapons_2"
        };
        weapons[] = {};
        units[] = {};
    };
};

class asdg_MuzzleSlot_338;
class asdg_OpticRail1913;

//class asdg_OpticRail;
class asdg_UnderSlot;
//class asdg_MuzzleSlot;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class UnderBarrelSlot;

class CfgWeapons {
	class SC_Rifle_PKMP;
	class OPTRE_BR55HB;

	class Tenthed_SC_Rifle_PKMP : SC_Rifle_PKMP {
		scope = 2;
		author = "Scion Conflict Mod Team";
		maxZeroing = 1000;
		displayName = "[10th] PKMP";
		descriptionshort = "[10th] PKMP - Heavy Machine Gun";
		model = "\sc_weapons_2\data\pkmp\pkmp.p3d";
		magazines[] = {
			"Tenthed_SC_200Rnd_338_Mag"
		};
		reloadAction = "GestureReloadSPAR_02";
		handAnim[] = {
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\Anim\mmg_02.rtm"
		};
		drySound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",
			0.60000002,
			1,
			10
		};
		reloadMagazineSound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",
			0.69999999,
			1,
			5
		};
		picture = "\sc_weapons_2\data\icons\icon_pkmp_ca.paa";
		inertia = 1;
		recoil = "recoil_mmg_01";
		modes[] = {
			"FullAutoFast",
			"FullAutoSlow"
		};
		hiddenSelections[] = {
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"sc_weapons_2\data\pkmp\textures\body_co.paa",
			"sc_weapons_2\data\pkmp\textures\mag_co.paa"
		};

		mrbs = 3000;
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 657.86;
		ACE_Overheating_allowSwapBarrel = 1;

		class FullAutoSlow : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {
					"MMG02_Shot_SoundSet",
					"MMG02_Tail_SoundSet",
					"MMG02_InteriorTail_SoundSet"
				};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {
					"MMG02_silencerShot_SoundSet",
					"MMG02_silencerTail_SoundSet",
					"MMG02_silencerInteriorTail_SoundSet"
				};
			};
			dispersion = 0.00122;
			reloadTime = 0.15000001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAutoFast : FullAutoSlow {
			reloadTime = 0.075000003;
			textureType = "fastAuto";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 140;
			allowedSlots[] = { 901 };
			class MuzzleSlot : asdg_MuzzleSlot_338 {};
			class CowsSlot : asdg_OpticRail1913 {};
			class UnderBarrelSlot : asdg_UnderSlot {};
		};
	};
	class Tenthed_BR55HB : OPTRE_BR55HB {
		dlc = "OPTRE";
		author = "Article 2 Studios";
		scope = 2;
		scopeArsenal = 2;
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\BR\data\anim\br55_handpos.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\Handanim_M395_Spartan.rtm"
		};
		reloadAction = "GestureReloadBR55";
		model = "\OPTRE_Weapons\BR\BRHB";
		displayName = "[10th] BR55HB Battle Rifle";
		magazines[] = {
			"Tenthed_36Rnd_95x40_Mag",
			"Tenthed_36Rnd_95x40_Mag_Tracer",
			"Tenthed_36Rnd_95x40_Mag_Tracer_Yellow"
		};
		magazineWell[] = {};
		descriptionShort = "UNSC Battle Rifle";
		picture = "\OPTRE_weapons\br\icons\br.paa";
		recoil = "recoil_mx";
		baseWeapon = "OPTRE_BR55HB";
		cursor = "OPTRE_BR55";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_BR";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_BR";
		Eye = "OPTRE_EYE_HUD_AmmoCount_BR";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 36;
		class GunParticles {
			class EffectShotCloud {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 50;
			class MuzzleSlot : MuzzleSlot {
				compatibleitems[] =
				{
					"muzzle_snds_65_TI_blk_F",
					"OPTRE_MA5Suppressor"
				};
			};
			class CowsSlot : CowsSlot {
				compatibleitems[] = {
					"optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
					"OPTRE_M392_Scope",
					"OPTRE_BR55HB_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"OPTRE_BR45_Scope"
				};
			};
			class PointerSlot : PointerSlot {
				compatibleitems[] =
				{
					"acc_pointer_IR",
					"acc_flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot {
				compatibleitems[] = {};
			};
		};
		modes[] = {
			"Single",
			"Burst"
		};
		class Single : Mode_SemiAuto {
			sounds[] = {
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound : BaseSoundModeType {
				begin1[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-01.ogg",
					1,
					1,
					2000
				};
				begin2[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-02.ogg",
					1,
					1,
					2000
				};
				begin3[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-03.ogg",
					1,
					1,
					2000
				};
				begin4[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-04.ogg",
					1,
					1,
					2000
				};
				begin5[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-05.ogg",
					1,
					1,
					2000
				};
				begin6[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-06.ogg",
					1,
					1,
					2000
				};
				begin7[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-07.ogg",
					1,
					1,
					2000
				};
				begin8[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-08.ogg",
					1,
					1,
					2000
				};
				begin9[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-09.ogg",
					1,
					1,
					2000
				};
				begin10[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-10.ogg",
					1,
					1,
					2000
				};
				soundBegin[] =
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1,
					"begin5",
					0.1,
					"begin6",
					0.1,
					"begin7",
					0.1,
					"begin8",
					0.1,
					"begin9",
					0.1,
					"begin10",
					0.1
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] =
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432821,
					1,
					400
				};
				begin2[] =
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432821,
					1,
					400
				};
				begin3[] =
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[] =
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails {
					class TailInterior {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075000003;
			dispersion = 0.00075000001;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 300;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.050000001;
		};
		class Burst : Mode_Burst {
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound : BaseSoundModeType {
				begin1[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-01.ogg",
					1,
					1,
					2000
				};
				begin2[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-02.ogg",
					1,
					1,
					2000
				};
				begin3[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-03.ogg",
					1,
					1,
					2000
				};
				begin4[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-04.ogg",
					1,
					1,
					2000
				};
				begin5[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-05.ogg",
					1,
					1,
					2000
				};
				begin6[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-06.ogg",
					1,
					1,
					2000
				};
				begin7[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-07.ogg",
					1,
					1,
					2000
				};
				begin8[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-08.ogg",
					1,
					1,
					2000
				};
				begin9[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-09.ogg",
					1,
					1,
					2000
				};
				begin10[] =
				{
					"\OPTRE_Weapons\BR\Data\sounds\BattleRifle-10.ogg",
					1,
					1,
					2000
				};
				soundBegin[] =
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1,
					"begin5",
					0.1,
					"begin6",
					0.1,
					"begin7",
					0.1,
					"begin8",
					0.1,
					"begin9",
					0.1,
					"begin10",
					0.1
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] =
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432821,
					1,
					400
				};
				begin2[] =
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432821,
					1,
					400
				};
				begin3[] =
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[] =
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails {
					class TailInterior {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075000003;
			dispersion = 0.00085000001;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 300;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.050000001;
			soundBurst = 0;
			burst = 3;
		};
	};
}