#include <iostream>
#include "FragTrap.h"

int main() {
	srand(time(NULL));

	FragTrap Emo("Emo"), Acho("Acho");
	Emo.meleeAttack(Acho.GetName());
	Acho.rangedAttack(Emo.GetName());
	Emo.vaulthunter_dot_exe(Acho.GetName());

	return 0;
}