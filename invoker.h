#ifndef INVOKER_H
#define INVOKER_H
#include <string>
#include "pcbController.h"

class invoker
{

public:
	invoker();
	~invoker();
	int evaluateRequest(std::string);
	void showUchoice();

private:
	int uChoice;
};

#endif // INVOKER_H
