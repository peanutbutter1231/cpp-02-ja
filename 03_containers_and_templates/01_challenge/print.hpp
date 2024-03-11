#include <string>
#include <iostream>

// コンテナの要素を出力する関数テンプレート
template <typename Container>

void print_elements(const Container& container) {
    for (const auto& element : container) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}
