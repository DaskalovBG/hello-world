#include <iostream>
#include "Soldier.h"
#include <vector>
#include <algorithm>
#include <iterator>

std::string Answer(){
std::cout << "Successfully added a Soldier would you like to continue ? " << std::endl;
std::string answer;
std::cin >> answer;
return answer;
}

int checkSize(std::vector<Soldier> usedList) {
    int armySize = usedList.size();
    return armySize;
}

void ArmyVectorWarning(std::vector<Soldier> usedList) {
    if (usedList.size() >= 6) {
        std::cout << "Warning 2 spots left!\n" << std::endl;
    }
}

void SoldierDetails(std::vector<Soldier> usedList) {
    std::cout << "Choose soldier by index, for more details\n" << std::endl;
    int selectSoldier = 0;
    std::cin >> selectSoldier;
    if (selectSoldier > checkSize(usedList)) {
        std::cout << "Seleted soldier is not in this army" << std::endl;
    }

    else {
        std::cout << "Displaying info for soldier number " 
                  << selectSoldier << " from current army" << std::endl;
        std::cout << usedList[selectSoldier] << std::endl;
    }

}

int main()
{
    std::vector<Soldier> SoldierVector;
    std::string fname, lname, nname, secret;
    int phone;

    std::string WelcomeMSG = "Welcome to George Daskalov's small army!";
    std::cout << WelcomeMSG << '\n' << std::endl;
    while (true) {

        std::string MakeChoices = "Please choose options from the menu, available options are: ADD, SEARCH OR EXIT";
        std::cout << MakeChoices << '\n' << std::endl;

        std::string InputChoice;
        std::cin >> InputChoice;

        if (InputChoice == "ADD" || InputChoice == "add") {

            std::cout << "Fill in soldier attributes: \n" << std::endl;
            std::cout << "Enter soldier first name: ";
            std::cin >> fname;
            std::cout << "Enter soldier last name: ";
            std::cin >> lname;
            std::cout << "Enter soldier nick name: ";
            std::cin >> nname;
            std::cout << "Enter soldier phone number: ";
            std::cin >> phone;
            std::cout << "Enter soldier deepest secret: ";
            std::cin >> secret;
            // create check if we have 8 contacts 

            //push_back(Soldier) creates a copy
            //cannot hold more push_back() elements it will create
            //a copy of itself to auto-extend its capability and will create copy

            SoldierVector.emplace_back(fname, lname, nname, phone, secret);
 
            std::cout << "Army size: " << checkSize(SoldierVector) << std::endl;

            //continue building army if size allows it.

            if (Answer() == "yes" && checkSize(SoldierVector) <= 8) {

                ArmyVectorWarning(SoldierVector);
                continue;
            }
            else {
                std::cout << "Exiting from army creation\n" << std::endl;
                exit(0);
            }

            // implemen what to do if max size is reached
            // and ADD is chosen.
        }

        else if (InputChoice == "SEARCH" || InputChoice == "search") {

            for (auto i = 0; i < checkSize(SoldierVector); i++)
            {
                std::cout << i << ' ' 
                          << SoldierVector[i].getFullName() 
                          << ' ' 
                          << SoldierVector[i].getNickname() 
                          << ' ' 
                          << std::endl;
            }

            SoldierDetails(SoldierVector);
        }
        else if (InputChoice == "exit" || InputChoice == "EXIT" ) {

            exit(0);
        }
    }
}