#include "Bank.h"

int main() {

    //口座名義　アリス　：　当座預金　5000円（少ない）
    BankAccount account("Alice", 5000.0);

    account.displayAccountInfo();

    account.deposit(1000.0);
    account.withdraw(2000.0);
    account.withdraw(5000.0); // 残高不足で失敗

    account.displayAccountInfo();

    return 0;
}