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
    if( response == System ){
        std::cout << "System options"
    }
    std::cout << response;
}

void invoker::showUchoice()
{
	std::cout << uChoice << std::endl;
}

