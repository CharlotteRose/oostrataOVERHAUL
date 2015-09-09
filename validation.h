#ifndef VALIDATION_H
#define VALIDATION_H
#include <string>

class validation{

public:
    validation();
    virtual ~validation();
    std::string getString();
    int getInt();

private:
    int passedAllChecks;
};

#endif // VALIDATION_H
