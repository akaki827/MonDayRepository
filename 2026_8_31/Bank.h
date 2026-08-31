#pragma once
#include <iostream>
#include <string>

using namespace std;
class BankAccount
{
private:
    std::string accountHolder; // 口座名義人
    double balance;            // 残高

public:

    BankAccount(const string& holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) {}

    /// <summary>
    /// 現在の当座預金金額の取得
    /// </summary>
    /// <returns></returns>
    double getBalance() const;

    /// <summary>
    /// 入金処理
    /// </summary>
    /// <param name="amount">入金額</param>
    void deposit(double amount);

    /// <summary>
    /// 出金処理
    /// </summary>
    /// <param name="amount">出金額</param>
    void withdraw(double amount);

    /// <summary>
    /// 口座名義と当座預金の表示
    /// </summary>
    void displayAccountInfo() const;
};