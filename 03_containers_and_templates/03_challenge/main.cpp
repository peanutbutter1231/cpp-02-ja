#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <chrono>
#include <typeinfo>

template <typename Container>
void measure_stack_operations()
{
    Container stack;

    // プッシュ操作の時間の計測
//    auto start_push = std::chrono::high_resolution_clock::now();
    std::chrono::high_resolution_clock::time_point start_push = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; ++i)
    {
        stack.push_back(i);
    }
    auto end_push = std::chrono::high_resolution_clock::now();

    // ポップ操作の時間の計測
    auto start_pop = std::chrono::high_resolution_clock::now();
    while (!stack.empty())
    {
        stack.pop_back();
    }
    auto end_pop = std::chrono::high_resolution_clock::now();

    // 実行時間を計算
    auto push_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_push - start_push).count();
    auto pop_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_pop - start_pop).count();

    std::cout << "Container type: " << typeid(stack).name() << std::endl;
    std::cout << "Push time: " << push_time << " ms" << std::endl;
    std::cout << "Pop time: " << pop_time << " ms" << std::endl;
}

int main()
{
    measure_stack_operations<std::vector<int>>();
    measure_stack_operations<std::list<int>>();
    measure_stack_operations<std::deque<int>>();

    return 0;
}