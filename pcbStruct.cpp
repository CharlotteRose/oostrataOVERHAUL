#include "pcbStruct.H"
#include <iostream>
#include <string>
/*class pcbStruct{

public:sss
    pcbStruct();
    ~pcbStruct();
    pcbStruct* allocatePCB();
    int freePCB(pcbStruct* );
    pcbStruct* setUpPCB(std::string pName, int priority, int pClass); //note the
    pcbStruct* findPCB(std::string pName);


private:
    std::string processName;
    int processClass;
    int priorityOfProcess;
    int memoryNeeded;
    bool stateOfProcess;
    pcbStruct* next;
};*/

pcbStruct::pcbStruct():
     processName("Error"), processClass(0), priorityOfProcess(0),memoryNeeded(0),stateOfProcess(false), next(0)
    {}
pcbStruct::~pcbStruct()
    {}
void pcbStruct::getProcessInfo(){
    std::cout << "Process Name: " << processName << std::endl;
}

