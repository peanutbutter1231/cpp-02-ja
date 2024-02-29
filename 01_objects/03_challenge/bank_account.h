class BankAccount {
private:
    double balance;

public:
    // コンストラクタ
    BankAccount(double initialBalance);

    // 入金
    void deposit(double amount);

    // 出金
    void withdraw(double amount);

    // 現在の残高を取得
    double get_balance();
};