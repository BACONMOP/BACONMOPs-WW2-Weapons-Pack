class CfgPatches
{
 class bm_smg_ThompsonM1A1						
 {
	requiredaddons[] = {};
	requiredversion = 0.1;
	units[] = {};
	weapons[] = {"bm_smg_ThompsonM1A1"};
	magazines[] = {"BM_30Rnd_45ACP_Mag"};				
 };
};
/*external*/ class Mode_SemiAuto;
/*external*/ class Mode_Burst;
			 class Mode_FullAuto;
			 class FullAuto;

class CfgWeapons {
	class WEAPON_base {
		author = "BACONMOP";
		access = 3;
		afmax = 0;
		aidispersioncoefx = 4;
		aidispersioncoefy = 5;
		airateoffire = 0.5;
		airateoffiredistance = 500;
		ammo = "";
		autofire = 1;
		autoreload = 0;
		backgroundreload = 0;
		ballisticscomputer = 0;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01.wav", 0.1, 1, 15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02.wav", 0.01, 1, 15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03.wav", 0.01, 1, 15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04.wav", 0.01, 1, 15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02.wav", 0.1, 1, 15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03.wav", 0.177828, 1, 15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04.wav", 0.177828, 1, 15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01.wav", 0.1, 1, 15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02.wav", 0.1, 1, 15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03.wav", 0.1, 1, 15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04.wav", 0.1, 1, 15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01.wav", 0.01, 1, 15};
		candrop = 1;
		canlock = 0;
		canshootinwater = 0;
		cartridgepos = "nabojnicestart";
		cartridgevel = "nabojniceend";
		changeFiremodeSound[] = {"A3\Sounds_f\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
		count = 0;
		cursor = "arifle";
		cursoraim = "CursorAim";
		cursoraimon = "";
		cursorsize = 1;
		cmimmunity = 1;
		descriptionshort = "Thompson M1A1 <br />Caliber: 45 ACP ";
		detectrange = 0;
		dexterity = 1.64;
		discretedistance[] = {100};
		discretedistanceinitindex = 1;
		dispersion = 0.0001;
		displayname = "Thompson M1A1";
		disposableweapon = 0;
		distancezoommax = 300;
		distancezoommin = 300;
		drysound[] = {"A3\sounds_f\arsenal\weapons\SMG\Vermin\Dry_Vermis.wav",0.501187,1,10};
		emptysound[] = {"", 1, 1};
		enableattack = 1;
		ffcount = 3;
		fffrequency = 11;
		ffmagnitude = 0.5;
		fireanims[] = {};
		fireLightAmbient[] = {0,0,0};
		firelightDiffuse[] = {0.937,0.631,0.259};
		firelightduration = 0.05;
		firelightintensity = 0.012;
		firespreadangle = "3.0f";
		flash = "gunfire";
		flashsize = 0.5;
		forceoptics = 0;
		handanim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\Anim\mmg02.rtm"};
		hiddenselections[] = {};
		hiddenselectionstextures[] = {};
		hiddenunderwaterselections[] = {};
		hiddenunderwaterselectionstextures[] = {};
		htmax = 600;
		htmin = 1;
		inertia = 0.4;
		initspeed = 900;
		irdistance = 0;
		irdotintensity = 0.001;
		irlaserend = "laser dir";
		irlaserpos = "laser pos";
		laser = 0;
		lockacquire = 1;
		lockedtargetsound[] = {"\A3\sounds_f\dummysound", 0.000316228, 6};
		lockingtargetsound[] = {"\A3\sounds_f\dummysound", 0.000316228, 2};
		magazinereloadtime = 0;
		magazines[] = {"BM_30Rnd_45ACP_Mag"};							
		maxleadspeed = 23;
		maxrange = 500;
		maxrangeprobab = 0.04;
		maxrecoilsway = 0.008;
		memorypointcamera = "eye";
		mfact = 1;
		mfmax = 0;
		midrange = 150;
		midrangeprobab = 0.58;
		minrange = 1;
		minrangeprobab = 0.3;
		model = "BaconWeapons\Thompson\Mesh\Thompson";					
		modelmagazine = "";
		modeloptics = "-";
		modelspecial = "";
		modes[] = {"FullAuto"};
		multiplier = 1;
		muzzleend = "konec hlavne";
		muzzlepos = "usti hlavne";
		muzzles[] = {"this"};
		namesound = "rifle";
		optics = 0;
		opticsdisableperipherialvision = 0.67;
		opticsflare = 0;
		opticsid = 0;
		opticsppeffects[] = {};
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		picture = "\BaconWeapons\Thompson\Tex\gear_Thompson_x_CA.paa";
		primary = 10;
		recoil = "recoil_mxc";
		recoilprone = "assaultRifleBase";
		reloadaction = "GestureReloadMX";							
		reloadmagazinesound[] = {"A3\sounds_f\arsenal\weapons\rifles\MX\Reload_MX.wav",1,1,10};
		reloadsound[] = {"", 1, 1};
		reloadtime = 0.15;
		scope = 0;
		selectionfireanim = "zasleh";
		showaimcursorinternal = 1;
		showempty = 1;
		shownunderwaterselections[] = {};
		showswitchaction = 0;
		showtoplayer = 1;
		simulation = "Weapon";
		sound[] = {};
		soundbegin[] = {"sound", 1};
		soundbeginwater[] = {"sound", 1};
		soundbullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
		soundburst = 1;
		soundclosure[] = {"sound", 1};
		soundcontinuous = 0;
		soundend[] = {"sound", 1};
		soundloop[] = {"sound", 1};
		swaydecayspeed = 2;
		tbody = 100;
		texturetype = "default";
		type = 1;
		uipicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		useaction = 0;
		useactiontitle = "";
		useasbinocular = 0;
		usemodeloptics = 1;
		value = 4;
		weaponinfotype = "RscWeaponZeroing";
		weaponlockdelay = 0;
		weaponlocksystem = 0;
		weaponpoolavailable = 1;
		weaponsoundeffect = "";
		weight = 0;
		class Library {
			libtextdesc = "LONG DETAILED WEAPON DESCRIPTION HERE";
		};
		class GunClouds {
			access = 0;
			cloudletaccy = 0;
			cloudletalpha = 0.3;
			cloudletanimperiod = 1;
			cloudletcolor[] = {1, 1, 1, 0};
			cloudletduration = 0.05;
			cloudletfadein = 0;
			cloudletfadeout = 0.1;
			cloudletgrowup = 0.05;
			cloudletmaxyspeed = 100;
			cloudletminyspeed = -100;
			cloudletshape = "cloudletClouds";
			cloudletsize = 1;
			deltat = 0;
			initt = 0;
			interval = -0.02;
			size = 0.3;
			sourcesize = 0.02;
			timetolive = 0;
			class Table {
				class T0 {
					color[] = {1, 1, 1, 0};
					maxt = 0;
				};
			};
		};
		class WeaponSlotsInfo {
			allowedslots[] = {901};
			mass = 40;
			class MuzzleSlot {};
			class CowsSlot {};
			class PointerSlot {};
		};	
		class GunParticles {
			class FirstEffect {
				directionname = "Konec hlavne";
				effectname = "RifleAssaultCloud";
				positionname = "Usti hlavne";
			};
		};
		
		
		class FullAuto: Mode_FullAuto /// Pew-pew-pew-pew-pew
		{
			sounds[] = {		/// the new parameter to distinguish muzzle accessories type
				StandardSound, // default zvuk
			};

			class BaseSoundModeType
			{

				weaponSoundEffect  = "DefaultRifle"; /// custom made sounds

				closure1[]={"A3\sounds_f\arsenal\weapons\Machineguns\Zafir\Closure_Zafir_01",0.562341,1,10}; /// custom made sounds
				closure2[]={"A3\sounds_f\arsenal\weapons\Machineguns\Zafir\Closure_Zafir_02",0.562341,1,10}; /// custom made sounds
				soundClosure[]={closure1,0.5, closure2,0.5}; /// custom made sounds
			};

			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_short_01",1.77828,1,1200}; /// custom made sounds
				begin2[] = {"A3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_short_01",1.77828,1,1200}; /// custom made sounds
				begin3[] = {"A3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_short_03",1.77828,1,1200}; 
					closure1[]={"A3\sounds_f\arsenal\weapons\Machineguns\Zafir\Closure_Zafir_01",0.562341,1,10}; /// custom made sounds
					closure2[]={"A3\sounds_f\arsenal\weapons\Machineguns\Zafir\Closure_Zafir_02",0.562341,1,10}; /// custom made sounds
				soundBegin[] = {begin1,0.33, begin2,0.33, begin3,0.34}; /// custom made sounds
					soundClosure[]={closure1,0.5, closure2,0.5};
			};

			reloadTime = 0.096;
			dispersion = 0.00087;
			
			recoil = "recoil_auto_trg";
			recoilprone = "recoil_auto_prone_trg";
			
			minRange = 0; minRangeProbab = 0.9;
			midRange = 15; midRangeProbab = 0.7;
			maxRange = 30; maxRangeProbab = 0.1; 
			
			aiRateOfFire = 0.000001;
		};
		
		class fullauto_medium: FullAuto /// Pew, pew, pew only for AI
		{
			showToPlayer = 0;
			burst = 3;
			
			minRange = 2; minRangeProbab = 0.5;
			midRange = 75; midRangeProbab = 0.7;
			maxRange = 150; maxRangeProbab = 0.05; 
			
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		
	};
	class WEAPON : WEAPON_base {
		scope = 2;
	};
};

class CfgMagazines
{
	class Default;

	class BM_Magazine;

	class BM_30Rnd_45ACP_Mag: BM_Magazine 
	{
		scope = 1; /// or 2, to be precise
		displayName = "45ACP 30Rnd Box Magazine";
		displayNameShort = "45ACP 30Rnd Box Magazine";
		descriptionShort = "Caliber: .45 ACP<br />Rounds:30<br />Used in Thompson SMGs";
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa"; /// just some icon
		ammo = BM_45ACP_Ammo;
		count = 30; /// 30 rounds is enough
		initSpeed = 795; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 4; /// tracers to track low ammo
		magazineGroup[]	= {"BM_Thompson"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
		mass = 10;
	};
};

class CfgAmmo
{
	class BulletBase;
	class BM_45ACP_Ammo: BulletBase
	{
		hit = 10;indirectHit = 0;indirectHitRange = 0; /// seems like standard 6.5mm round
		cartridge = "FxCartridge_9mm"; /// seems like standard 6.5mm round
		visibleFire = 5; /// how big does the shooter seem to be for AI to take notice after he shoots
		audibleFire = 8; /// how big does the shooter seem to be for AI to take notice after he shoots
		cost = 1.2; /// pretty cheap to fire at anything, comes into shoot efficiency calculation mentioned in the weapon
		airLock = true; /// allows to be fired upon air targets
		typicalSpeed = 820;
		caliber = 2.6; /// caliber 1 equals 6.5mm round

		model = \A3\Weapons_f\Data\bullettracer\tracer_red; /// just for tracer
		tracerScale = 1.0; /// how big is the flying tracer
		tracerStartTime = 0.05; // seconds
		tracerEndTime = 1; // seconds
		airFriction = -0.00096;
		/* z:
			air friction value was set carefully to match RL ballistic table with high fidelity
			source: http://www.shootingtimes.com/wp-content/blogs.dir/11/files/6-5mm-grendel-the-round-the-military-ought-to-have/6-5mm-grendel_009.jpg
		*/
		
		dangerRadiusBulletClose 		= 8;	/// defines how far the AI gets alerted by the projectile's impact or explosion. Default value -1 makes this distance be automatically derived from the hit and indirectHit properties.
		dangerRadiusHit 				= 12;	/// defines how far the AI gets alerted by the bullet's pass. Default value -1 disables the detection. (works only for bullets, no other projectiles)
		suppressionRadiusBulletClose 	= 6;	/// defines the max. distance at which the AI becomes suppressed by the projectile's impact or explosion. Default value -1 disables the suppressive effect
		suppressionRadiusHit 			= 8;	/// defines the max. distance at which the AI becomes suppressed by the bullet's pass. Default value -1 disables the suppressive effect (works only for bullets, no other projectiles)
		shootDistraction 				= 10;	/// -1 by default to be computed from visibleFire and audibleFire, describes how much does the shoot distract the shooter
		
		class CamShakeFire /// doesn't cause any camera shake
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire /// doesn't cause any camera shake
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		
	};
};