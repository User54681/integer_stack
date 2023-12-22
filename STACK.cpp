#include "STACK.h"
#include <iostream>

Stack::Stack(int size) {
    lenght = size;
    top = NULL;
}

Stack::~Stack() {
    while (top != NULL) {
        pop();
    }
}

void Stack::push(int value) {
    if (count > lenght) {
        std::cout << "Stack is overflow" << "\n";
    } 
    else {
        Node* new_node = new Node;
        new_node->item = value;
        new_node->p = top;
        top = new_node;
        ++count;
    }
}

int Stack::pop() {
    if (empty()) {
        std::cout << "Stack is empty" << "\n";
        return -1;
    }
    else {
        int popped = top->item;
        Node* temp = top;
        top = top->p;
        delete temp;
        --count;
        std::cout << "The last element of stack has been deleted" << "\n";
        return 0;
    }
}

void Stack::remove() {
    while (!empty()) {
        pop();
    }
}

void Stack::print() {
    if (empty()) {
        std::cout << "Stack is empty" << "\n";
    }
    else {
        int cnt = count;
        Node* p = top;
        while (cnt != 0) {
            std::cout << p->item << "\t";
            p = p->p;
            --cnt;
        }
        std::cout << "\n";
        delete p;
    }
}

void Stack::size() {
    std::cout << "Stack is size of " << count << "\n";
}

int Stack::copy() {
    return 0;
}

bool Stack::empty() {
    return top == NULL;
}