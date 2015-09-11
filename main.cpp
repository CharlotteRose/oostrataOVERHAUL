#include "request.H"
#include <iostream>
#include <string>


int main(){
    //std::cout <<"Hello World" << std::endl;
    request newR;

    int go = 0;
    while (go!= 77){
        go = newR.getRequest();
    }
 return 0;
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
