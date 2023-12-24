#include "STACK.h"
#include <iostream>

Stack::Stack(int size) {
    lenght = size;
    top = NULL;
}

Stack::~Stack() {
    while (top != NULL) {
        int popped = top->item;
        Node* temp = top;
        top = top->p;
        delete temp;
        --count;
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
        std::cout << "The last element of stack has been deleted: " << temp->item << "\n";
        delete temp;
        --count;
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

int Stack::size() {
    //std::cout << "Stack is size of " << count << "\n";
    return count;
}

int Stack::copy(Stack& source) {
    if (source.empty()) {
        std::cout << "Stack is empty" << "\n";
    }
    else {
        int cnt = source.size();
        Stack temp(cnt); 
        Node* p = source.top;
        while (cnt > 0) {
            temp.push(p->item);
            p = p->p;
            --cnt;
        }
        delete p;
        cnt = source.size();
        Node* pp = temp.top;
        while (cnt > 0) {
            push(pp->item);
            pp = pp->p;
            --cnt;
        }
        delete pp;
        temp.~Stack();
    }
    return 0;
}

bool Stack::empty() {
    return top == NULL;
}