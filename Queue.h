#ifndef QUEUE_H
#define QUEUE_H

class QueueLL {
private:
    struct QueueNode {
        int value;
        QueueNode* next;
    };

    QueueNode* frontPtr;
    QueueNode* rearPtr;

public:
    QueueLL();
    ~QueueLL();

    void enqueue(int value);
    void dequeue(int &num);
    bool isEmpty() const;
    void clear();
    void display();
};

#endif 
