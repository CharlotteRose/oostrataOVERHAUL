#ifndef INPUTVALIDATION_H
#define INPUTVALIDATION_H

#include <string>

class inputValidation
{
    public:
        inputValidation();
        virtual ~inputValidation();
        int validationType();
        bool checkString(std::string);
        bool checkInt(int);
        void validatePcbInfo(std::string, int, int, int, int);

    private:
    bool allPassed;
};

#endif // INPUTVALIDATION_H
