#ifndef PCBSTRUCT_H
#define PCBSTRUCT_H
#include <string>

class pcbStruct{

public:
    pcbStruct();
    ~pcbStruct();
    void setPName();
    void setPClass(int pClass);
    void setPPriority(int pPriority);
    void setMemory(int pMemory);
    void setState(int pState);
    void setNext(pcbStruct*);

    pcbStruct* allocatePCB();
    std::string freePCB(pcbStruct* );
    pcbStruct* setUpPCB(std::string pName, int priority, int pClass); //note the
    pcbStruct* findPCB(std::string pName);

    void processInfo();

private:
    std::string processName;
    std::string processClass;
    int priorityOfProcess;
    int memoryNeeded;
    int stateOfProcess;
    pcbStruct* next;
};
#endif // PCBSTRUCT_H
