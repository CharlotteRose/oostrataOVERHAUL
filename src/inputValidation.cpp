#include "inputValidation.h"
#include <string>
#include <iostream>

inputValidation::inputValidation()
{
    allPassed = false;
}

inputValidation::~inputValidation()
{}

bool inputValidation::checkString(std::string pName){
    std::cout << "Please enter Process Name" << std::endl;
    std::cin >> pName;
    while (std::string::npos != pName.find_first_of("0123456789")){
        std::cin.clear();
        std::cout << "Please enter a valid name. No digits." << std::endl;
        std::cin >> pName;
    }
    processName = pName;
}
