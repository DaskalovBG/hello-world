#include "Peon.h"
#include "Sorcerer.h"
#include "Victim.h"
#include <iostream>

int main() {

	Sorcerer Kevin("Kevin", "graybeard");
	Victim Garnett("Garnett");
	Peon Durant("Durant");

    std::cout << static_cast<const std::string&>(Kevin) << "\n" 
		      << static_cast<const std::string&>(Garnett) << "\n"
		      << static_cast<const std::string&>(Durant) <<std::endl;
	Kevin.polymorph(Garnett);
	Kevin.polymorph(Durant);

}