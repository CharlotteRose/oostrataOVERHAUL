#ifndef PCBSTRUCT_H
#define PCBSTRUCT_H
#include <string>

class pcbStruct{

public:
    pcbStruct();
    ~pcbStruct();
    pcbStruct* allocatePCB();
    std::string freePCB(pcbStruct* );
    pcbStruct* setUpPCB(std::string pName, int priority, int pClass); //note the
    pcbStruct* findPCB(std::string pName);
    void addProcessName(std::string pName);
    void deleteProcessName(std::string pName);

private:
    std::string processName;
    std::string processClass;
    int priorityOfProcess;
    int memoryNeeded;
    bool stateOfProcess;
    pcbStruct* next;
};
#endif // PCBSTRUCT_H
