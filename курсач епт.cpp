#include <iostream>
#include <vector>

class Stack {
private:
    int value;
    int *values;
public:
    Stack(int size);
    ~Stack();

    void push();
    int pop();
    int remove();
    void print();
    int size();
    int copy();
};

Stack::Stack(int size) {
    values = new int[size];
}

Stack::~Stack() {
    delete[] values;
}

void Stack::push() {

}

int Stack::pop() {

}

int Stack::remove() {

}

void Stack::print() {

}

int Stack::size() {

}

int Stack::copy() {

}

class Node {

};

int main()
{
    setlocale(LC_ALL, "Rus");
    return 0;
}