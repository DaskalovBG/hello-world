#include <iostream>
#include "FragTrap.h"
#include "ScavTrap.h"
int main() {
	srand(time(NULL));

	FragTrap Emo("Emo");
	ScavTrap Acho("Acho");

	std::cout << Emo.meleeAttackDamage << std::endl;

	Emo.meleeAttack(Acho.GetName());
	std::cout << Acho.hitPoints << std::endl;

	return 0;
}