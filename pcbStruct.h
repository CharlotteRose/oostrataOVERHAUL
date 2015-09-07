#ifndef PCBSTRUCT_H
#define PCBSTRUCT_H
#include <string>
#include <vector>

class pcbStruct{

public:
    pcbStruct();
    ~pcbStruct();
    pcbStruct* allocatePCB();
    std::string freePCB(pcbStruct* );
    pcbStruct* setUpPCB(std::string pName, int priority, int pClass); //note the
    pcbStruct* findPCB(std::string pName);
    void getProcessInfo();

private:
    std::string processName;
    int processClass;
    int priorityOfProcess;
    int memoryNeeded;
    bool stateOfProcess;
    pcbStruct* next;
};
#endif // PCBSTRUCT_H
