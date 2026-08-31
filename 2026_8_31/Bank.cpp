#include "Bank.h"
#include <iostream>

//Œ»Ý‚ÌŽc‚‚Ì“üŽè
double BankAccount::getBalance() const
{
    return balance;
}
//“ü‹àŠz‚ð•\Ž¦
void BankAccount::deposit(double amount)
{
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: " << amount << "\n";
    }
    else {
        //ŽG‰v
        cout << "Invalid deposit amount.\n";
    }
}
//o‹àŠz‚ð•\Ž¦
void BankAccount::withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "Withdrawn: " << amount << "\n";
    }
    else
    {
        //ŽG‘¹
        cout << "Invalid withdraw amount or insufficient funds.\n";
    }
}
//ŒûÀ–¼‹`‚Æ“–À—a‹à‚Ì•\Ž¦
void BankAccount::displayAccountInfo() const
{
    cout << "Account Holder: " << accountHolder << "\n"
        << "Current Balance: " << balance << "\n";
}