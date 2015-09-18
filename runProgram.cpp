#include "runProgram.h"
#include "invoker.h"
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

	request newR; //new request is created
	int go = 0;
	while (go!= 77)
	{
		go = newR.getRequest(); //while the request does not return the value 77 we
                                //continue to run the program
        switchTask(newR.returnRequest());



        //std::cout << "task check ";
	};

	newR.~request();
	killProgram();
}


//WHERE REQUEST OBJECT GETS PASSED TO INVOKER CLASS!

void runProgram::switchTask(std::string response){
    invoker newI;
    newI.evaluateRequest(response);
}

void runProgram::killProgram(){
    if (programOn != 0 ){
        programOn = 0;
    }
    runProgram();

}

bool runProgram::getState(){
    return programOn;
}
