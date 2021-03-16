#include "FragTrap.h"
#include <iostream>

FragTrap::FragTrap(std::string initName) : ClapTrap(initName)
{
	std::cout << "FragTrap constructor called\n" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copyFragTrap) : ClapTrap(copyFragTrap) {
	FragName = copyFragTrap.FragName;
	std::cout << "FragTrap copy constructor called\n" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called\n" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& FragTrapOprOverload)
{
	std::cout << "Assignment operator overload called\n" << std::endl;
	FragName = FragTrapOprOverload.FragName;
	return *this;
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