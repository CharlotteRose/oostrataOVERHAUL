#ifndef PCBCONTROLLER_H
#define PCBCONTROLLER_H
#include "pcbStruct.h"
#include <iostream>

class pcbController{

public:
    pcbController();
    ~pcbController();
    void showChoice();


private:
    int pcbOption;
};
#endif // PCBCONTROLLER_H
