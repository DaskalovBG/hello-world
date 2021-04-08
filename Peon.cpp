#include "Peon.h"

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon& copyPeon) : Victim(GetName())
{
	PeonName = copyPeon.PeonName;
}

Peon& Peon::operator=(const Peon& overloadPeon)
{
	// TODO: insert return statement here
	if (this == &overloadPeon)
		return *this;
	
	PeonName = overloadPeon.PeonName;
	return *this;
}

void Peon::GetPolymorphed() const
{
	std::string polyMsg = " has been turned into a pink pony";
	std::cout << GetName() << polyMsg << std::endl;
}


