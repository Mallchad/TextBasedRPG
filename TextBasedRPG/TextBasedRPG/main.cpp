

#include <iostream>;
#include <string>;
#include <ctime>;
#include <algorithm>;
#include "equipment.h";


struct Weapon
{
	int baseDamage = 40;
	float multiplierDamage = 1.2;
	float multiplierMaxHitPoints = 1;
	float multiplierCritical = 1.5;
};

//Prints to console
void print(std::string text, bool newLine = true)
{
	if (newLine) { std::cout << text << std::endl; }
	else { std::cout << text; }
}

int main()
{
	std::string weapons[100] = { "Steel Broadsword","Wooden Staff","Steel Daggers" };
	bool isRunning = true;
	srand(time(0));

	while (isRunning)
	{

	}

	return 1;
}