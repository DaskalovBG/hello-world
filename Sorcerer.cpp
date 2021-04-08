#include "Sorcerer.h"

Sorcerer::Sorcerer(std::string SorcName, std::string SorcTitle)
	: name(SorcName), title(SorcTitle)
{
	announcer();
}

Sorcerer::~Sorcerer()
{
	std::string msg = "Concequences will never be the same";
	std::cout << name << " " << title << " is dead. " << msg << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& copySorcerer)
{
	std::cout << "Sorcerer was coppied" << std::endl;
	name = copySorcerer.name;
	title = copySorcerer.title;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& overloadSorcerer)
{
	// self-assignment guard
	if (this == &overloadSorcerer)
		return *this;

	// do the COPY
	name = overloadSorcerer.name;
	title = overloadSorcerer.title;
	
	// return the existing object so we can chain this operator
	return *this;
}

//std::ostream& operator<<(std::ostream& os, const Sorcerer& Sorc)
//{
//	// TODO: insert return statement here
//
//	os << "I am " << Sorc.GetName() << " " << Sorc.GetTitle() << " and I like dogs";
//	return os;
//}
