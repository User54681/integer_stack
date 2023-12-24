#pragma once
#ifndef STACK
#define STACK

struct Node {
    int item;
    Node* p;
};

class Stack {
private:
    Node* top;
    int count = 0;
    int lenght;
public:
    Stack(int size);
    ~Stack();

    void push(int value);
    int pop();
    void remove();
    void print();
    int size();
    int copy(Stack& source);
    bool empty();
};

#endif // !STACK