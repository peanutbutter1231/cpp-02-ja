#include <iostream>
#include <vector>
#include <list>
#include <deque>

#include "print.hpp"

int main() {
    // std::vectorの例
    std::vector<int> vec = {1, 2, 3, 4, 5};
    print_elements(vec);

    // std::listの例
    std::list<std::string> lst = {"apple", "banana", "cherry"};
    print_elements(lst);

    // std::dequeの例
    std::deque<double> dq = {3.14, 2.71, 1.62};
    print_elements(dq);

    return 0;
}