#include "runProgram.h"
#include <iostream>
#include <string>

/* Intended logical flow
>Menu controls user view
>users input selection criterion (handled by menuOption)
>Menu selection then offers specific options for selected class
>if an option is selected Menu internally creates and instance of the class
>If information is needed validation receives request and runs
*/

//void fullscreen();



int main()
{
//    fullscreen();
	runProgram myProgram;  //creates instance of runProgram class to start simulator
	//myProgram.testProgram();
	myProgram.startProgram(); //calls start program to run the simulator
	while (myProgram.getState()){  //reads the value getState which is updated in the request class
        myProgram.manageProgram();  //while the getState value is true manageProgram is ran
	}
	return 0;
}

/*following code nabbed from dreamincode.net; contributor New D.I.C head
void fullscreen(){
keydb_event(12,0x38,0,0,); //equivalent of pressing alt
keybd_event(VK_RETURN,0x1c,0,0); //equivalent of pressing enter

keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0); //key release alt
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0); //key release enter
}*/

