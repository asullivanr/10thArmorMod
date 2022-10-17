class CfgPatches {
    class Tenthed_ammo {
        author = "Silver, Kodiak, Crow, Akira";
        name = "10th ODST: Ammo";
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgAmmo {
	class B_338_Ball;
	class Tenthed_SC_338_NM_Ball : B_338_Ball {
		hit = 14;
	};

	class B_127x99_Ball;
	class Tenthed_B_127x99_Ball_Tracer_Yellow : B_127x99_Ball {
		hit = 30;
	};

	class B_762x51_Ball;
	class Tenthed_B_95x40_Ball : B_762x51_Ball {
		hit = 13;
		typicalSpeed = 600;
		caliber = 4;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class Tenthed_B_95x40_Tracer : Tenthed_B_95x40_Ball {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class Tenthed_B_95x40_Tracer_Yellow : Tenthed_B_95x40_Tracer {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
};
class CfgMagazines {
	class 130Rnd_338_Mag;
	class Tenthed_SC_200Rnd_338_Mag : 130Rnd_338_Mag {
		scope = 2;
		displayName = "[10th] 200Rnd .338 Magazine";
		picture = "\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";
		count = 200;
		ammo = "Tenthed_SC_338_NM_Ball";
		tracersEvery = 3;
		lastRoundsTracer = 20;
		descriptionshort = "Rounds: 200<br/>Used in: PKMP";
		mass = 75;
	};

	class 100Rnd_127x99_mag;
	class Tenthed_100Rnd_127x99_mag_Tracer_Yellow : Tenthed_SC_200Rnd_338_Mag {
		scope = 2;
		displayName = "[10th] 100Rnd 127x99 mag Tracer Yellow";
		picture = "\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";
		count = 100;
		ammo = "Tenthed_B_127x99_Ball_Tracer_Yellow";
		tracersEvery = 3;
		lastRoundsTracer = 20;
		descriptionShort = "Rounds: 200<br/>Used in: [10th] HMG";
		displaynameshort = "100Rnd 127x99";
		mass = 75;
	};

	class 20Rnd_762x51_Mag;
	class Tenthed_36Rnd_95x40_Mag : 20Rnd_762x51_Mag
	{
		dlc = "OPTRE";
		model = "\OPTRE_Weapons\Ammo\BR55Ammo.p3d";
		displayname = "36Rnd 9.5x40mm Magazine";
		displaynameshort = "9.5x40mm";
		ammo = "Tenthed_B_95x40_Ball";
		count = 36;
		initspeed = 925;
		picture = "\OPTRE_weapons\br\icons\magazine.paa";
		descriptionshort = "36 Round Magazine<br>9.5x40mm";
		mass = 8;
		tracersEvery = 0;
		lastRoundsTracer = 6;
	};
	class Tenthed_36Rnd_95x40_Mag_Tracer : Tenthed_36Rnd_95x40_Mag {
		dlc = "OPTRE";
		displayname = "36Rnd 9.5x40mm Magazine (Tracers)";
		displaynameshort = "9.5x40mm Tracer";
		ammo = "Tenthed_B_95x40_Tracer";
		descriptionshort = "36 Round Magazine<br>9.5x40mm<br>Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 36;
	};
	class Tenthed_36Rnd_95x40_Mag_Tracer_Yellow : Tenthed_36Rnd_95x40_Mag_Tracer {
		dlc = "OPTRE";
		displayname = "36Rnd 9.5x40mm Magazine (Tracers Yellow)";
		ammo = "Tenthed_B_95x40_Tracer_Yellow";
	};
}
