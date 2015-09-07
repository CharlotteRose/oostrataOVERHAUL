#include "pcbStruct.H"
#include <iostream>
#include <string>

pcbStruct::pcbStruct()
    {}

pcbStruct::~pcbStruct()
    {}

void pcbStruct::setPName(std::string pName){
    processName = pName;
}

void pcbStruct::setPClass(int pClass){
    processClass = pClass;
}

void pcbStruct::setPPriority(int pPriority){
    priorityOfProcess = pPriority;
}

void pcbStruct::setMemory(int pMemory){
    memoryNeeded = pMemory;
}

void pcbStruct::setState(bool pState){
    stateOfProcess = pState;
}

void pcbStruct::setNext(pcbStruct* nextP){
    next = nextP;
}

    //pcbStruct* allocatePCB();
    //std::string freePCB(pcbStruct* );
    //pcbStruct* setUpPCB(std::string pName, int priority, int pClass); //note the
    //pcbStruct* findPCB(std::string pName);

void pcbStruct::processInfo(){
    std::cout << "Process Name: " << processName << std::endl;
    std::cout << "Process Class: " << processClass << std::endl;
    std::cout << "Process Priority: " << priorityOfProcess << std::endl;
    std::cout << "Process Memory: " << memoryNeeded << std::endl;
    std::cout << "Process State: " << stateOfProcess << std::endl;
    if (next== 0){
        std::cout << "No next" << std::endl;
    }
    else{
        std::cout << "Next PCB: " << next->processName << std::endl;
    }

}
