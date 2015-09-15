#include "request.H"
#include "validation.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

request::request():
	rType("None Set")
{
}

request::~request()
{
}

int request::getRequest()
{
	int currentOption = 0;
	while (currentOption == 0)
	{
		std::cout<< "Please choose from one of the following options:\n(Numeric values only) "<< std::endl;
		std::cout << " 1. System Information\n 2. PCB Settings\n 3. Exit\n" << std::endl;
		std::cin >> currentOption;
		/*while (!isdigit(currentOption))                         //Compliments of stack overflow user Commander Bubble
		{
			std::cout << "ERROR, enter a number" << std::endl;
			std::cin.clear();
			std::cin.ignore(256,'\n');
			std::cin >> currentOption;
		}*/
		if (currentOption == 1)
		{
			ClearScreen();
			rType = "System";
			return 1;
		}
		else if (currentOption == 2)
		{
			ClearScreen();
			rType = "PCB";
			return 2;
		}
		else if (currentOption == 3)
		{
			std::string confirmExit = "";
			std::cout << " Please type in 'Yes' to confirm exit of OOSTRTA.\n Press any key to return to Home menu\n\n" << std::endl;
			std::cin >> confirmExit;
			if(confirmExit == "YES"||confirmExit == "Yes"||confirmExit == "yes")
			{
				ClearScreen();
				std::cout << "\n\n\n\n";
				//std::cout <<"tito was gangster";
				return 77; //dummy value I can confidently say we will not reach in menu options
			}
			else
			{
				//std::cout <<"tito was a gangster";
				rType = "exit";
				return 3;
			}
		}
		else if(!isdigit(currentOption)){
            std::cout << "ERROR, please enter a valid response." << std::endl;
			std::cin.clear();
			std::cin.ignore(256,'\n');
            std::cout << "\n\n\n\n";
            currentOption =0;
		}
		else
		{
			std::cout << "Invalid Option\n\n\n\n";
			currentOption =0;
		}
	}
}

void request::displayRequest()
{
	std::cout << rType << std::endl;
}

void request::ClearScreen()
{
	std::cout << std::string( 1000, '\n' );
}
