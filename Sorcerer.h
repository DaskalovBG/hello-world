#pragma once
#include<iostream>
#include "Victim.h"

class Sorcerer {
private:
	std::string name;
	std::string title;

public:

	/* Support Coplien form */

	Sorcerer(std::string SrcName, std::string SrcTitle);
	~Sorcerer();
	Sorcerer(const Sorcerer& copySorcerer);
	Sorcerer& operator=(const Sorcerer& overloadSorcerer);

	//friend std::ostream& operator << (std::ostream& os, const Sorcerer& Sorc);

	operator std::string() const {
		return "I am " + GetName() + " " + GetTitle() + " and I like wands";
	}

	std::string GetName() const { return name; }
	std::string GetTitle() const { return title; }

	void announcer() const {
		std::cout << GetName() << " " << GetTitle() << " is born" << std::endl;
	}

	void polymorph(Victim const& x) const
	{
		x.GetPolymorphed();
	}
};

//std::ostream& operator << (std::ostream& os, const Sorcerer& Sorc);
