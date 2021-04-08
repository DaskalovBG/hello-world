#include "Victim.h"

Victim::Victim(std::string VictimName)
	:
	name(VictimName)
{
	victimAnnouncer();
}

Victim::~Victim() {
	std::string msg = " just died for no apperant reason";
	std::cout << "Victim " << GetName() << msg << std::endl;
}

Victim::Victim(const Victim& copyVictim) {
	name = copyVictim.name;
}

Victim& Victim::operator=(const Victim& overloadVictim) {

	if (this == &overloadVictim)
		return *this;

	name = overloadVictim.name;

	return *this;
}