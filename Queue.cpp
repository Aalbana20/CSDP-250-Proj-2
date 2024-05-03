#include "Queue.h"
#include <iostream>
using namespace std;


QueueLL::QueueLL() 
{ frontPtr = nullptr;
rearPtr = nullptr; 
}

QueueLL::~QueueLL() 
{
    clear();
}

void QueueLL::enqueue(int num) 
{
    QueueNode* newNode = new QueueNode;
    newNode->value = num;
    

    if (isEmpty())
     {
        frontPtr = newNode;
        rearPtr = newNode;
    } 
    else 
    {
        rearPtr->next = newNode;
        newNode->next = nullptr;
        rearPtr = newNode;
    }

    
}

void QueueLL::dequeue(int &num) 
{
    QueueNode *tempPtr = nullptr;
    if (isEmpty()) 
    {
       cout << "Queue is empty! ";
    }
else
{
num = frontPtr->value;
tempPtr = frontPtr;
frontPtr = frontPtr->next;
delete tempPtr;
}
   
}

bool QueueLL::isEmpty() const 
{
    return frontPtr == nullptr;
}

void QueueLL::clear() 
{
    int n;
    while (!isEmpty()) 

    {
        dequeue(n);
    }
}

void QueueLL::display() 
{
    QueueNode* nodePtr = frontPtr;
    while (nodePtr)
     {
        cout << nodePtr->value;
        nodePtr = nodePtr->next;
    }
    
}


