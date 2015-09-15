#ifndef PCBSTRUCT_H
#define PCBSTRUCT_H
#include <string>

class pcbStruct
{

public:
	pcbStruct();
	virtual ~pcbStruct();
	void setPName(std::string);
	void setPClass(int);
	void setPPriority(int);
	void setMemory(int);
	void setState(int);
	void setNext(pcbStruct*);
	void processInfo();

private:
	std::string processName;
	int processClass;
	int priorityOfProcess;
	int memoryNeeded;
	int stateOfProcess;
	pcbStruct* next;
};
#endif // PCBSTRUCT_H
