#include "runProgram.h"
#include "pcbController.h"
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

void runProgram::switchTask(std::string response){
    if(response == "System"){
            std::cout << "task check ";
            //do stuff for uncreated menu thing
    }
    else if (response == "PCB"){
        //std::cout << "task check ";
            pcbController newPCB;
            newPCB.showChoice();
    }
    else{
       //std::cout << "A crash has occurred. Please contact you local administrator, build a bear workshop, or necromancer.\n\n";
    }

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
