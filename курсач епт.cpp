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
    stack.size();
    stack.print();
    stack.pop();
    stack.size();
    stack.print();
    return 0;
}