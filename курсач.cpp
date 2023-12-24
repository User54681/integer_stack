#include "STACK.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    int len;
    std::cout << "Введите максимальную длину стека: " << "\n";
    std::cin >> len;

    Stack stack(len-1);
    stack.push(3);
    stack.push(4);
    stack.push(35);
    stack.push(6);
    stack.push(8);
    stack.push(1);
    std::cout << "Stack is size of " << stack.size() << "\n";
    stack.print();
    stack.pop();
    std::cout << "Stack is size of " << stack.size() << "\n";
    stack.print();
    Stack stack2(len-1);
    stack2.copy(stack);
    std::cout << "The copied stack: "; 
    stack2.print();
    return 0;
}