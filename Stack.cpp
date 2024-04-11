#include "Stack.h"
#include <iostream>
using namespace std;


StackLL::StackLL() 
{
top = nullptr;
}
 

StackLL::~StackLL() 
{
    clear();
}

void StackLL::push(int num) 
{
    StackNode* newNode = new StackNode;
    newNode->value = num;
    
    if (isEmpty())
    {
        top = newNode;
        newNode->next=nullptr;
    }
    else
    {
        newNode->next= top;
        top = newNode;
    }
    
}

int StackLL::pop(int &num) 
{
   
    StackNode* temp = nullptr;
    if (isEmpty()) 
    {
       cout << " Stack is empty! ";
    }
    else
    {
num = top->value;
temp = top->next;
delete top;
temp = top;
    }
    return num;
}

bool StackLL::isEmpty() const 
{
    bool status;
    if (!top)
    {
        status = true;
    }
    else
    {
        status = false;

    }
    return status;
}

void StackLL::clear() 
{
   StackNode*nodePtr=nullptr;
   StackNode*nextPtr=nullptr;
   nodePtr=top;
    while (nodePtr!=nullptr) 
    {
        nextPtr=nodePtr->next;
        delete nodePtr;
        nodePtr = nextPtr;
    }
}

void StackLL::display() const 
{

    StackNode* current = top;
    while (current != nullptr)
     {
        cout << current->value;
        current = current->next;
    }
   
}