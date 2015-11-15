#include "runProgram.h"
#include "invoker.h"
#include <string>

//initializes the private variable programOn to false
runProgram::runProgram():
    programOn(0)
    {
    }

//destructor
runProgram::~runProgram()
{
}

//forces changes the state of the program to true to run the simulator
void runProgram::startProgram(){
    if ( programOn != 1 ){
        programOn = 1;
    }
}

/*while programOn is true manageProgram acts
as a mediator to the request class updating the user
options/choices and serves to terminate
the program when prompted to do so by the user*/

void runProgram::manageProgram(){

	request newR;   //new request is created
	int go = 0;     //go is a variable used to control the user request loop
	while (go!=77){ //random value that go is only changed to from the Exit option
		go = newR.getRequest();             //go becomes set to the value returned from getRequest
        switchTask(newR.returnRequest());   //switchTask calls class & method for users choice, pass in rType from user
        //std::cout << "task check ";
	};
	newR.~request();
	killProgram();
}
/***********************************************************
        WHERE REQUEST OBJECT GETS PASSED TO INVOKER CLASS!
***********************************************************/

void runProgram::switchTask(std::string response){ //switchTask takes in rType as parameter
    invoker newI;  /* an instance of the invoker is created here. Since switchTask takes in rTypr as the parameter
                    rType (being a string) is then passed into the invoker. The string is evaluated within the
                    invoker class and from there the appropriate class will be called to execute the task (ie. pcbController)
                    */
    newI.evaluateRequest(response);
    newI.~invoker();
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
