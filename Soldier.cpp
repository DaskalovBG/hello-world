
#include<iostream>
#include"Soldier.h"

Soldier::Soldier(
	const std::string SoldierFirstName,
	const std::string SoldierLastName,
	std::string SoldierNickName,
	const int SoldierPhone,
	const std::string SoldierSecret
)
	:
	firstName(SoldierFirstName),
	lastName(SoldierLastName),
	nickName(SoldierNickName),
	phoneNumber(SoldierPhone),
	darkestSecret(SoldierSecret)
{
	//std::cout << "Soldier constructor initialized\n" << std::endl;
}

Soldier::Soldier(const Soldier& copySoldier) :
	firstName(copySoldier.firstName),
	lastName(copySoldier.lastName),
	nickName(copySoldier.nickName),
	phoneNumber(copySoldier.phoneNumber),
	darkestSecret(copySoldier.darkestSecret)
{
	//std::cout << "Soldier copy constructor initialized\n" << std::endl;
}

Soldier::~Soldier()
{
	//std::cout << "Soldier destructor initialized\n" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Soldier& sldr)
{
	out << "Soldier full name: " << sldr.getFullName() << '\n' 
		<< "Soldier nick name: " << sldr.getNickname() << '\n' 
		<< "Soldier phone number: " << sldr.getPhoneNbr() << '\n' 
		<< "Soldier's secret: " << sldr.getDarkestSecret() << '\n' 
	<< std::endl;
	return out;
}
