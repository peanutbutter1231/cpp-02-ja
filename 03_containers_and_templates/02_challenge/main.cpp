#include <iostream>
#include <vector>
#include <list>
#include <deque>

#include "stack.hpp"

int main() {
    // std::vectorを基底としたスタック
    Stack<int, std::vector<int>> int_stack;
    int_stack.push(10);
    int_stack.push(20);
    std::cout << "Top element: " << int_stack.top() << std::endl;
    int_stack.pop();

    // std::listを基底としたスタック
    Stack<std::string, std::list<std::string>> string_stack;
    string_stack.push("apple");
    string_stack.push("banana");
    std::cout << "Top element: " << string_stack.top() << std::endl;

    return 0;
}