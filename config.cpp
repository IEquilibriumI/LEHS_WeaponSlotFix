class CfgPatches 
{
	class LEHS_WeaponSlotFix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Characters",
			"TombstoneBM", //TombstoneBasicMap
			"ns_dayz_gear_lehs",
			"namalsk_survival",
			"clothing_a" //TacticalFlava
		};
	};
};
class cfgWeapons
{
	class RifleCore;
	class Rifle_Base: RifleCore
	{
		inventorySlot[] +=
		{
			"LEHS_Firearm", //NamalskSurvival
			"kuroakitaGUN1", //Munghard
			"kuroakitaGUN2", //Munghard
			"kuroakitaGUN3", //Munghard
			"kuroakitaGUN4", //Munghard
			"kuroakitaGUN5", //Munghard
			"kuroakitaGUN6", //Munghard
			"kuroakitaGUN7", //Munghard
			"kuroakitaGUN8", //Munghard
			"kuroakitaGUN9", //Munghard
			"kuroakitaGUN10", //Munghard
			"kuroakitaGUN11", //Munghard
			"kuroakitaGUN12", //Munghard
			"Shoulder",
			"Melee",
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Shoulder8",
			"Shoulder9",
			"Shoulder10",
			"Shoulder11",
			"Shoulder12",
			"Shoulder13",
			"Shoulder14",
			"Shoulder15",
			"Shoulder16",
			"Shoulder17",
			"Shoulder18",
			"Shoulder19",
			"Shoulder20",
			"Shoulder21",
			"Shoulder22",
			"Shoulder23",
			"Shoulder24",
			"Shoulder25",
			"Shoulder26",
			"Shoulder27",
			"Shoulder28",
			"Shoulder29",
			"Shoulder30"
		};
	};	
};
