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
public:
    Stack();
    ~Stack();

    void push(int value);
    int pop();
    int remove();
    void print();
    int size();
    int copy();
    bool empty();
};

#endif // !STACK