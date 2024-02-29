#include <iostream>
#include "bank_account.h"

int main()
{
    BankAccount bank_account(10.0);
//    bank_account.get_balance();
//    bank_account.deposit(50);
//    bank_account.withdraw(30);
//    bank_account.withdraw(30);
//    bank_account.withdraw(150);
//    std::cout << "Current balance: $" << bank_account.get_balance() << std::endl;

    bank_account.withdraw(-15.0);
    bank_account.get_balance();

    return 0;
}