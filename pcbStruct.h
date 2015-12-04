#ifndef PCBSTRUCT_H
#define PCBSTRUCT_H
#include <string>

class pcbStruct{

public:
	pcbStruct();
	~pcbStruct();
	//we pass in (process name, class, priority, memory, state, next)
	void setInfo(std::string, int, int, int, int, pcbStruct*, pcbStruct* );
	void getInfo();
	pcbStruct* getHead();
	pcbStruct* getTail();

private:
	std::string processName;
	int processClass;
	int priorityOfProcess;
	int memoryNeeded;
	int stateOfProcess;
	pcbStruct* head;
	pcbStruct* tail;
};
#endif // PCBSTRUCT_H


/*
States: 0- Ready
        1- Running
        2- Blocked
        3- Suspended
        4- Not Suspended

The Lifetime of a Process:
1. Operating System needs to create a process.
So it calls SetupPCB with process info.

2. SetupPCB calls FindPCB to verify that no
process has the same name.

3. SetupPCB calls AllocatePCB which returns a
pointer to the new PCB

4. SetupPCB initializes all PCB attributes and
returns a pointer to the PCB.

5. Operating System calls InsertPCB to insert
the PCB into the correct Queue.

6. The process runs for awhile and then the
Operating System decides that the process needs terminated.
Operating System calls RemovePCB to remove the
PCB from the Queue that it’s currently in.

7. Operating System calls FreePCB to free the
memory held by the PCB, including the PCB itself.   */
