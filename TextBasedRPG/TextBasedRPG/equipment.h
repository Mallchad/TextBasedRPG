#pragma once
#include <iostream>;
#include <string>;
#include <algorithm>;
class Character
{
	const int warriorHealthOffset = 200;
	const int mageHealthOffset = -300;
	const int rogueHealthOffset = -100;
	//Generic Stats
	int hitPoints = 100;		//Base Current Player Health
	const static int baseMaxHitPoints = 100;	//Max Player Health
	int currentMaxHitPoints = 100;
	bool isWeaponEquipped = false;
	short int weaponSlot = 0;	//Item ID of weapon equipped
	bool isArmourEquipped = false;
	short int armourSlot = 0;	//Item ID of armour equipped

	short int weaponsAvailable = 1;		//How many weapons are in the game
	short int armourAvailible = 1;

	short int currentClass = 0;
	//Class Specific Stats
	short int Mana = 0;		//Wizard Magical Energy
	int Rage = 0;		//Warrior Damage Redirection Energy
	int Energy = 0;		//Rogue Energy

	int DefenceType;

	//Public Interface
public:
	//Promts and sets Character Class
	void setClass()
	{
		std::string classSelection;
		std::cout << "Please Pick you're class Mage/Warrior/Rogue" << std::endl;
		std::cin >> classSelection;
		std::for_each(classSelection.begin(), classSelection.end(), [](char & c) { c = ::towlower(c); });
		//Validation
		if (classSelection == "mage")
		{
			currentClass = 0;
		}
		if (classSelection == "warrior")
		{
			currentClass = 1;
		}
		if (classSelection == "rogue")
		{
			currentClass = 2;
		}
		//Class Statistics
	}
	//Weapon Equipping
	void setItem(short int itemType, short int itemID)
	{
		if (itemType = 0)
		{
			if (itemID < weaponsAvailable - 1 || itemID > -1)
				{ weaponSlot = itemID; isWeaponEquipped = true; }
		}
		if (itemType = 1)
		{
			if (itemID > armourAvailible)
				{ armourSlot = itemID; isArmourEquipped = true; }
		}
	}
	int getItem(short int itemType)
	{
		if (itemType = 0)
			{ return weaponSlot; }
		if (itemType = 1)
			{ return armourSlot; }
	}
	int getHitPoints()
		{ return hitPoints; }
	int setHitPoints()
	
	//Leveling System
	int Leveling()
	{
		int Exp = 0;				//Player exp
		int playerLevel = 0;		//Player Level
		int expRequirement[100] = { 100 }; //Exp reqirement array 

		for (int i = 1; i > 0 && i < 101; i++)
		{
			expRequirement[i] = expRequirement[i - 1] * 2;
		}


		while (Exp >= expRequirement[playerLevel]) //While loop checking if the player has met the requirement to level up
		{
			++playerLevel;
		}
		return playerLevel;
	}
};
