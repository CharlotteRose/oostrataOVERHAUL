#include <string>
#include "pcbController.h"

pcbController::pcbController():
    pcbOption(0)
{
    //std::cout << "created ";
}

pcbController::~pcbController(){
}

void pcbController::showChoice(){
    std::cout<< "last selection to recall: " << pcbOption << " .\n\n\n\n\n";
}

pcbStruct* pcbController::allocatePCB(){
    //create memory
    pcbStruct* head = new pcbStruct;
    if (head == 0){
        std::cout << "Error" << std::endl;
    }
    else{
        std::cout <<"new made" << std::endl;
        return head;
    }
}
void pcbController::freePCB(pcbStruct* toRemove){
    pcbStruct* finderPointer = head;
    pcbStruct* deleteNode = finderPointer->getHead();
    pcbStruct* trackRemoval = toRemove->getTail();
}
    void setupPCB(std::string, int, int);
    pcbStruct* findPCB(std::string);
    void insertPCB(pcbStruct* );
    void removePCB(pcbStruct* );

