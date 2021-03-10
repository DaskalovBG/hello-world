#pragma once
#include <iostream>
class FragTrap
{
private:

	std::string name;

public:
	int hitPoints = 100;
	int maxHitPoints = 100;
	int energyPoints = 100;
	int maxEnergyPoints = 100;
	int level = 1;
	int meleeAttackDamage = 30;
	int RangedAttackDamage = 20;
	int ArmorDamageReduction = 5;


	//Coplien form begin
	FragTrap(std::string Name); // constructor
	FragTrap(const FragTrap& copyFragTrap); // copy constructor
	~FragTrap();
	FragTrap& operator=(const FragTrap& FragTrapOprOverload);
	//Coplien form end

	std::string GetName() const { return name; };

	bool is_hp_exceeded(int hitPoints);
	bool is_energy_exceeded(int energyPoints);
	void rangedAttack(const std::string& target);
	void meleeAttack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(const std::string& target);

};

