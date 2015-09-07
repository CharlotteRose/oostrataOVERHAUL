#include "pcbStruct.h"
#include <iostream>
#include <string>


int menuOption = 0;
void runProcess( int option );

int main(){

    std::cout << "Greetings this is a test" << std::endl;
    pcbStruct* newTestStruct = new pcbStruct();
    newTestStruct->processInfo();

 return 0;
}

