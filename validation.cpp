#include "validation.h"
#include <iostream>

validation::validation()
{
}

validation::~validation()
{
}

std::string validation::getString()
{
	std::string pName;
	std::cout << "Please enter Process Name" << std::endl;
	std::cin >> pName;
	while (std::string::npos != pName.find_first_of("0123456789"))    //Please note this line was made possible thanks to black magic sorcery from Stackoverflow.
	{
		std::cin.clear();
		std::cout << "Please enter a valid name. No digits." << std::endl;
		std::cin >> pName;
	}
	uString = pName;
	return uString;
}

int validation::getInt()
{
	std::cout << uInt << std::endl;
	return uInt;
}
