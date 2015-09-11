#ifndef REQUEST_H
#define REQUEST_H
#include <string>
#include <iostream>

class request{

public:
    request();
    ~request();
    int getRequest();
    void displayRequest();
private:
    std::string rType;
};


#endif REQUEST_H
