#include "runProgram.h"
#include <string>

runProgram::runProgram():
    programOn(0)
    {
    }

runProgram::~runProgram()
{
}

void runProgram::startProgram(){
    if ( programOn != 1 ){
        programOn = 1;
    }
}

void runProgram::manageProgram(){
    std::cout <<"Hello World" << std::endl;
	request newR; //new request is created
	int go = 0;
	while (go!= 77)
	{
		go = newR.getRequest(); //while the request does not return the value 77 we
	};                          //continue to run the program

	newR.~request();
}

void runProgram::killProgram(){
    if (programOn != 0 ){
        programOn = 0;
    }

}

bool runProgram::getState(){
    return programOn;
}
