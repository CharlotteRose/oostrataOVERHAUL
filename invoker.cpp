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

int invoker::evaluateRequest(int)
{
}

void invoker::showUchoice()
{
	std::cout << uChoice << std::endl;
}

