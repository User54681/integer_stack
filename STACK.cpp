#include "STACK.h"

Stack::Stack() {
    top = NULL;
}

Stack::~Stack() {
    while (top != NULL) {
        pop();
    }
}

void Stack::push(int value) {
    Node* new_node = new Node;
    new_node->item = value;
    new_node->p = top;
    top = new_node;
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
    }
}

int Stack::remove() {

}

void Stack::print() {

}

int Stack::size() {

}

int Stack::copy() {

}

bool Stack::empty() {
    return top == NULL;
}