#include <iostream>
#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called\n" << std::endl;
	int energyPoints = 50;
	int maxEnergyPoints = 50;
	int meleeAttackDamage = 20;
	int RangedAttackDamage = 15;
	int ArmorDamageReduction = 3;
}

ScavTrap::ScavTrap(const ScavTrap& copyScavTrap) : ClapTrap(copyScavTrap) {
	ScavName = copyScavTrap.ScavName;
	std::cout << "ScavTrap copy constructor called\n" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& OperOverScavTrap)
{
	std::cout << "ScavTrap operator= overload called\n" << std::endl;
	ScavName = OperOverScavTrap.ScavName;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n" << std::endl;
}

void ScavTrap::challangeNewCommer() {
	std::string challanges[] = { "PasswordChallange", "LookDumbChallange",
								 "BrokenPhoneChallange", "SisterChallange", "DickChallange"};

	for (int x = 0; x < 1; x++) {
		std::cout << challanges[rand() % 5] << std::endl;
	}
	std::cout << "CHALLANGE THE NEWCOMMER!\n" << std::endl;
}

