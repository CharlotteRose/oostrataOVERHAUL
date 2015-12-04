
#ifndef NODE_H
#define NODE_H

class Node
{
public:
    Node();
    ~Node();
    void setInfo( int );
    int getInfo();
    void setNext( Node* );
    Node* getNext();

private:
    int info;
    Node* next;
};
#endif // NODE

#include "Node.H"

Node::Node():
    info(0), next(0)
{
}
Node::~Node()
{
}
    void Node::setInfo( int valueToSet )
    {
        info = valueToSet;
    }
    int Node::getInfo()
    {
        return info;
    }
    void Node::setNext( Node* nextToSet )
    {
        next = nextToSet;
    }
    Node* Node::getNext()
    {
        return next;
    }


