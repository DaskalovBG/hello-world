#pragma once
#include <iostream>
#include "ClapTrap.h"
class FragTrap : public ClapTrap
{
private:
	std::string FragName = GetName();
public:

	int energyPoints = 100;
	int maxEnergyPoints = 100;
	int meleeAttackDamage = 30;
	int RangedAttackDamage = 20;
	int ArmorDamageReduction = 5;

	//Coplien form begin
	FragTrap(std::string Name); // constructor
	FragTrap(const FragTrap& copyFragTrap); // copy constructor
	~FragTrap();
	FragTrap& operator=(const FragTrap& FragTrapOprOverload);
	//Coplien form end

	void vaulthunter_dot_exe(const std::string& target);
};