#include "runProgram.h"
#include <iostream>
#include <string>

int main()
{
	runProgram myProgram;
	myProgram.startProgram();
	while (myProgram.getState()){
        myProgram.manageProgram();
	}
	return 0;
}


/* Intended logical flow
>Menu controls user view
>users input selection criterion (handled by menuOption)
>Menu selection then offers specific options for selected class
>if an option is selected Menu internally creates and instance of the class
>If information is needed validation receives request and runs
*/

