#ifndef INVOKER_H
#define INVOKER_H

class invoker{

public:
        invoker();
        ~invoker();
        int evaluateRequest(int);
        bool isSystemRequest(int);
        bool isPCBRequest(int);

private:
    int uChoice;
};

#endif // INVOKER_H
