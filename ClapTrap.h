#pragma once
#include <iostream>
class ClapTrap
{
private:

	std::string TrapName;

public:

	int hitPoints = 100;
	int maxHitPoints = 100;
	int level = 1;
	int energyPoints;
	int maxEnergyPoints;
	int meleeAttackDamage;
	int RangedAttackDamage;
	int ArmorDamageReduction;

	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copyClap);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& OperOverClapTrap);

	std::string GetName() const { return TrapName; };
	void rangedAttack(const std::string& target);
	void meleeAttack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

