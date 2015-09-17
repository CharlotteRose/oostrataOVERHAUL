#ifndef REQUEST_H
#define REQUEST_H
#include <string>
#include <iostream>

class request
{
//an instance of this object is created when the program begins
public:
	request();
	~request();
	int getRequest();
	void displayRequest();
    void ClearScreen();
    std::string returnRequest();
private:
	std::string rType;
};


#endif REQUEST_H
