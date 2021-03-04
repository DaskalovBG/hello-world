#pragma once
#include<iostream>

class Soldier {
private:
	const std::string firstName, lastName, darkestSecret;
	std::string nickName;
	const int phoneNumber;

public:

	Soldier(std::string firstName,
		    std::string lastName,
		    std::string nickName,
		    int phoneNumber,
		    std::string darkestSecret
	);

	~Soldier();
	Soldier(const Soldier& copySoldier);

	friend std::ostream& operator<<(std::ostream& out, const Soldier& sldr);

	std::string getFullName() const { return firstName + ' ' + ' ' + lastName; }
	std::string getNickname() const { return nickName; }
	std::string getDarkestSecret() const { return darkestSecret; }
	int getPhoneNbr() const { return phoneNumber; }

};