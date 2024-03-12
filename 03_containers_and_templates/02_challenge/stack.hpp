#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename T, typename Container = std::deque<T>>
class Stack {
public:
    // コンストラクタ
    Stack() = default;

    // スタックに値をプッシュする
    void push(const T& value) {
        container.push_back(value);
    }

    // スタックから一番上の値をポップする
    void pop() {
        if (!container.empty()) {
            container.pop_back();
        }
    }

    // スタックの一番上の値を返す
    T top() const {
        if (!container.empty()) {
            return container.back();
        }
        // 仮の値を返す (エラー処理は省略)
        return T{};
    }

    // スタックが空かどうかを判定する
    bool is_empty() const {
        return container.empty();
    }

private:
    Container container;
};

