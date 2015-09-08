#include "pcbStruct.h"
#include <iostream>
#include <string>


int Menu(int);
void runProcess( int option );

int main(){
    int menuOption = 1;
    Menu(menuOption);

 return 0;
}




/* Intended logical flow
>Menu controls user view
>users input selection criterion (handled by menuOption)
>Menu selection then offers specific options for selected class
>if an option is selected Menu internally creates and instance of the class
>If information is needed validation receives request and runs
*/
int Menu(int menuOption){
    int currentOption = menuOption;
    while (currentOption!= 2){
        std::cout<< "Please choose from the following options: "<< std::endl;
        std::cout << "1. Create PCB'\n', 2. Exit'\n'" << std::endl;
        std::cin >> currentOption;
        runProcess(currentOption);

    }
}

void runProcess(int option){
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
