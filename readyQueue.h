#ifndef readyQueue_H
#define readyQueue_H

class readyQueue
{
public:
    readyQueue();
    ~readyQueue();
    void setInfo( int );
    int getInfo();
    void setNext( readyQueue* );
    readyQueue* getNext();

private:
    int info;
    readyQueue* next;
};
#endif // readyQueue
