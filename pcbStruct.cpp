#include "pcbStruct.H"
#include <iostream>
#include <string>

pcbStruct::pcbStruct():
	 processName(""), processClass(0), priorityOfProcess(0), memoryNeeded(0), stateOfProcess(0), head(0), tail(0)
{
}

pcbStruct::~pcbStruct()
{
}

void pcbStruct::setInfo(std::string pName, int pClass, int pPriority, int pMemory, int pState, pcbStruct* next, pcbStruct* last)
{
	processName = pName;
	processClass = pClass;
    priorityOfProcess = pPriority;
   	memoryNeeded = pMemory;
	stateOfProcess = pState;
	head = next;
    tail = last;
}

void pcbStruct::getInfo()
{
	std::cout << "Process Name: " << processName << std::endl;
	std::cout << "Process Class: " << processClass << std::endl;
	std::cout << "Process Priority: " << priorityOfProcess << std::endl;
	std::cout << "Process Memory: " << memoryNeeded << std::endl;
	std::cout << "Process State: " << stateOfProcess << std::endl;

	if (tail == 0){
		std::cout << "No next" << std::endl;
	}
	else{
        std::cout << "Next PCB: " << processName << std::endl;
	}
	if ( tail == 0 ){
        std::cout << "No tail" << std:: endl;
	}
	else{
        std::cout << "Last process: " << tail->processName << std::endl;
	}
}

pcbStruct* pcbStruct::getHead(){
    return head;
}

pcbStruct* pcbStruct::getTail(){
    return tail;
}
