#pragma once
#include <iostream>


class Victim {
private:
	std::string name;
public:

	Victim(std::string vicName);
	~Victim();
	Victim(const Victim& copyVictim);
	Victim& operator=(const Victim& overloadVictim);

	std::string GetName() const { return name; }

	operator std::string() const {
		return "I am " + GetName() + " " + " and I like otters!";
	}

	void victimAnnouncer()
	{
		std::cout << "Some random victim called " << GetName() << " just popped!" << std::endl;
	}

	virtual void GetPolymorphed() const {

		std::string polyMsg = " has been turned into a cute little sheep";
		std::cout << GetName() << polyMsg << std::endl;
	
	};
};