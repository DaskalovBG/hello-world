#pragma once
#include <iostream>
#include "Victim.h"

class Peon : public Victim {

private:
	std::string PeonName;

public:
	Peon(std::string name) : Victim(name)
	{
		std::cout << "Zog zog" << std::endl;
	}
	~Peon();
	Peon(const Peon& copyPeon);
	Peon& operator=(const Peon& overloadPeon);

	operator std::string() const {
		return "I am " + GetName() + " " + " and I like otters!";
	}

	void GetPolymorphed() const override;
};