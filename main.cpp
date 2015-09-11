#include "request.H"
#include <iostream>
#include <string>

void ClearScreen();

int main(){
    //std::cout <<"Hello World" << std::endl;
    request newR;
    int go = 0;
    while (go!= 77){
        go = newR.getRequest();
    }
    invoker newI;
    newI.uChoice(newR->rType);

 return 0;
}


/* Intended logical flow
>Menu controls user view
>users input selection criterion (handled by menuOption)
>Menu selection then offers specific options for selected class
>if an option is selected Menu internally creates and instance of the class
>If information is needed validation receives request and runs
*/
