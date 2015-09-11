#ifndef VALIDATION_H
#define VALIDATION_H
#include <string>

// I am using uName to identify User input of type (name).

class validation{

public:
    validation();
    virtual ~validation();
    std::string getString();
    int getInt();

private:
    std::string uString;
    int uInt;
};

#endif // VALIDATION_H
