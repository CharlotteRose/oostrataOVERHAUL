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
