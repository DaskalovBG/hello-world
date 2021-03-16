#pragma once
#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap{
private:

	std::string ScavName = GetName();

public:

	//Coplien form begin
	ScavTrap(std::string ScavName);
	ScavTrap(const ScavTrap& copyScavTrap);
	ScavTrap& operator=(const ScavTrap& OperOverScavTrap);
	~ScavTrap();
	//Coplien form end


	void challangeNewCommer();
};