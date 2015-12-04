#ifndef PCBCONTROLLER_H
#define PCBCONTROLLER_H
#include "pcbStruct.h"
#include <iostream>

class pcbController{

public:
    pcbController();
    ~pcbController();
    void showChoice();
    pcbStruct* allocatePCB();
    void freePCB(pcbStruct*);
    void setupPCB(std::string, int, int);
    pcbStruct* findPCB(std::string);
    void insertPCB(pcbStruct* );
    void removePCB(pcbStruct* );

private:
    int pcbOption;
    pcbStruct* head;
    pcbStruct* tail;
};
#endif // PCBCONTROLLER_H
