#include "ClapTrap.h"
ClapTrap::ClapTrap(std::string name) : TrapName(name)
{
	std::cout << "ClapTrap constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copyClap)
{
	TrapName = copyClap.TrapName;
	std::cout << "Clap Trap Copy constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap Trap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ClapTrapOperOverload) {
	std::cout << "ClapTrap operaor overload called" << std::endl;
	TrapName = ClapTrapOperOverload.TrapName;
	return *this;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	std::cout << "Damage done: " << amount << std::endl;
	std::cout << "hitPoints left: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	while (hitPoints <= maxHitPoints)
	{
		hitPoints += amount;
		std::cout << "Replenished life: " << hitPoints << std::endl;
	}

	while (energyPoints <= maxEnergyPoints)
	{
		energyPoints += amount;
		std::cout << "Replenished energy: " << hitPoints << std::endl;
	}
	hitPoints = maxHitPoints;
	energyPoints = maxEnergyPoints;
}

void ClapTrap::rangedAttack(const std::string& target)
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

void ClapTrap::meleeAttack(const std::string& target)
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