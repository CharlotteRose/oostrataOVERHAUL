#include "invoker.h"
#include <string>
#include <iostream>

invoker::invoker():
	uChoice(0)
{
}

invoker::~invoker()
{
}

int invoker::evaluateRequest(std::string response)
{
    if( response == "System" ){
        std::cout << "System options\n\n\n";
    }
    else if ( response == "PCB")
    {
        //create and instance of the pcbController class
        pcbController pcbAccessPoint;
        pcbAccessPoint.showChoice();
        pcbAccessPoint.allocatePCB();

    }
    else if ( response == "exit"){
        std::cout << "Thank you for choosing the no bells, no whistles, no bs OS oostra." <<
        std::endl;
    }
    //std::cout << response;
}

void invoker::showUchoice()
{
	std::cout << uChoice << std::endl;
}

