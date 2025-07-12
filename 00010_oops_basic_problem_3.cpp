// Create a `BankAccount` class with attributes `account_holder` and `balance`. Add methods `deposit(amount)` and `withdraw(amount)`. Ensure the balance doesn't go negative on withdrawal.

#include<iostream>

using namespace std;

class BankAccount {
public:
    string account_holder;
    int balance;

    void deposit(int amount)
    {
        cout << "Successful deposit of amount " << amount << "\t";
        balance += amount;
        cout << "Balance = " << balance << endl;
    }

    void withdraw(int amount)
    {
        cout << "Processing withdrawl request of Rs. " << amount << "..." << endl;

        if (amount <= balance)
        {
            cout << "Amount " << amount << " withdrawn" << "\t";
            balance -= amount;
            cout << "Balance = " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance ! Withdrawl request rejected. Balance = " << balance << endl;
        }
    }
};

int main()
{
    BankAccount ananda;

    ananda.account_holder = "Ananda";
    ananda.balance = 5000;

    ananda.deposit(5000);

    ananda.withdraw(2000);

    ananda.withdraw(10000);

    return 0;
}