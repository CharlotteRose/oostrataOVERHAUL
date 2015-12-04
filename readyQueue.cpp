#include "readyQueue.H"

readyQueue::readyQueue():
    info(0), next(0)
{
}
readyQueue::~readyQueue()
{
}
    void readyQueue::setInfo( int valueToSet )
    {
        info = valueToSet;
    }
    int readyQueue::getInfo()
    {
        return info;
    }
    void readyQueue::setNext( readyQueue* nextToSet )
    {
        next = nextToSet;
    }
    readyQueue* readyQueue::getNext()
    {
        return next;
    }
