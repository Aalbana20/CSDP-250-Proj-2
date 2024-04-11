#ifndef STACK_H
#define STACK_H

class StackLL
 {
private:
    struct StackNode 
    {
        int value;
        StackNode* next;
    };

    StackNode* top;

public:
    StackLL();
    ~StackLL();

    void push(int value);
    int pop(int &num);
    bool isEmpty() const;
    void clear();
    void display()const;
};

#endif 
