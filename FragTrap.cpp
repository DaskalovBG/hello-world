#include "FragTrap.h"
#include <iostream>

FragTrap::FragTrap(std::string initName) : name(initName)
{
	std::cout << "FragTrap constructor called\n" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copyFragTrap) {
	name = copyFragTrap.name;
	std::cout << "FragTrap copy constructor called\n" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called\n" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& FragTrapOprOverload)
{
	std::cout << "Assignment operator overload called\n" << std::endl;
	name = FragTrapOprOverload.name;
	return *this;
}


void FragTrap::takeDamage(unsigned int amount)
{
    hitPoints -=amount;
	std::cout << "Damage done: " << amount << std::endl;
	std::cout << "hitPoints left: " << hitPoints << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (hitPoints <= maxHitPoints) {
		hitPoints += amount;
	}

	else {
		hitPoints = maxHitPoints;
	}

	if (energyPoints <= maxEnergyPoints)
	{
		energyPoints += amount;
	}
	else {
		energyPoints = maxEnergyPoints;
	}


}

void FragTrap::rangedAttack(const std::string& target)
{
	
	if ((hitPoints - RangedAttackDamage) > 0)
	{
		std::cout << "Range attack begin\n" << std::endl;
		unsigned int attackDamage = RangedAttackDamage - ArmorDamageReduction;
		takeDamage(attackDamage);
	}

	else {
		std::cout << "hitPoints and energyPoints will be exceeded, range attack cancelled\n" << std::endl;
	}

}

void FragTrap::meleeAttack(const std::string& target)
{
	if ((hitPoints - meleeAttackDamage) > 0)
	{
		std::cout << "Melee attack begin\n" << std::endl;
		int attackDamage = meleeAttackDamage - ArmorDamageReduction;
		takeDamage(attackDamage);
	}

	else {
		std::cout << "hitPoints and energyPoints will be exceeded, melee attack cancelled\n" << std::endl;
	}
}

void FragTrap::vaulthunter_dot_exe(const std::string& target) {
	
	int cost = 25;
	std::string attackType;
	std::string attacks[] = { "HighKick", "LowKick", "Butthead", "Ballsqueze", "Eyegauge" };
	while ((energyPoints -= cost) >= 0) {
		
		for (int x = 0; x < 1; x++) {
			attackType = attacks[rand() % 5];
		}
		std::cout << "Attacking " << target << " with " << attackType << std::endl;
	}
	energyPoints = 0;
	std::cout << "Not enouhg energy to perform this kind of attack!\n" << std::endl;

}