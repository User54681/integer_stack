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
    void size();
    int copy();
    bool empty();
};

#endif // !STACK