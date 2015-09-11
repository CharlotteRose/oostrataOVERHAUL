#include "request.H"
#include <iostream>
#include <string>

void ClearScreen();

int main(){
    //std::cout <<"Hello World" << std::endl;
    request newR;
    ClearScreen();
    int go = 0;
    while (go!= 77){
        go = newR.getRequest();
    }
    ClearScreen();

 return 0;
}


void ClearScreen()
    {
        std::cout << std::string( 1000, '\n' );
    }


/* Intended logical flow
>Menu controls user view
>users input selection criterion (handled by menuOption)
>Menu selection then offers specific options for selected class
>if an option is selected Menu internally creates and instance of the class
>If information is needed validation receives request and runs


id runProcess(int option){
    if(option == 1){
        std::string confirm = "";
        std::cout << "PCB creation requires input data: Name, Priority, Class. '\n'";
        std::cout << "Enter 'YES' to continue, 'NO' to exit.";
        std::cin>> confirm;
        if(confirm == "YES","Yes", "yes"){
                //get and validate information

        }
        else{
                std::cout <<"Now exiting.";
        }
    }
}
*/
