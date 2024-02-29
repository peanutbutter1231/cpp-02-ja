#include <iostream>
#include <cmath>
#include "bank_account.h"

// コンストラクタの実装
BankAccount::BankAccount(double initialBalance)
{
    balance = initialBalance;
    std::cout << "Current balance: $" << balance << std::endl;
}

// 入金の実装
void BankAccount::deposit(double amount)
{
    if (amount < 0)
    {
        std::cout << "Current balance: $" << balance << std::endl;
    }
    else
    {
        balance += amount;
    }
    std::cout << "Current balance: $" << balance << std::endl;
}

// 出金の実装
void BankAccount::withdraw(double amount)
{
    if (balance >= abs(amount))
    {
        balance = balance - abs(amount);
        std::cout << "Current balance: $" << balance << std::endl;
    }
    else
    {
        std::cout << "Insufficient balance!" << std::endl;
    }
}

// 現在の残高を取得する関数の実装
double BankAccount::get_balance()
{
    return balance;
    std::cout << "Current balance: $" << balance << std::endl;
}