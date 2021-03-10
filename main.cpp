#include <iostream>
#include "FragTrap.h"

int main() {
	srand(time(NULL));

	FragTrap Emo("Emo"), Acho("Acho");
	Emo.meleeAttack(Acho.GetName());
	Acho.rangedAttack(Emo.GetName());

	Emo.vaulthunter_dot_exe(Acho.GetName());

	std::cout << "Health left in Emo: " << Emo.hitPoints << std::endl;
	std::cout << "Energy left in Emo: " << Emo.energyPoints << std::endl;

	Emo.beRepaired(8);

	std::cout << "Health left in Emo after repair: " << Emo.hitPoints << std::endl;
	std::cout << "Energy left in Emo after repair: " << Emo.energyPoints << std::endl;

	return 0;
}