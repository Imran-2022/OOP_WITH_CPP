#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int accNumber, string accHolder, double initialBalance) {
        accountNumber = accNumber;
        accountHolder = accHolder;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds or invalid withdrawal amount!" << endl;
        }
    }

    void checkBalance() const {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount(123456789, "John Doe", 1000.0);

    myAccount.checkBalance(); // Check initial balance
    myAccount.deposit(500); // Deposit money
    myAccount.withdraw(200); // Withdraw money
    myAccount.checkBalance(); // Check balance after transactions

    // myAccount.balance = 1000000; // Error: 'balance' is private and cannot be accessed directly

    return 0;
}