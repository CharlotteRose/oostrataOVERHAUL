#ifndef RUNPROGRAM_H
#define RUNPROGRAM_H
#include <iostream>
#include "invoker.h"
#include "request.H"
//#include "handler.h"


class runProgram{

public:
    runProgram();
    ~runProgram();
    void startProgram();
    void manageProgram();
    void killProgram();
    bool getState();

private:
    bool programOn;
};




#endif // RUNPROGRAM_H



