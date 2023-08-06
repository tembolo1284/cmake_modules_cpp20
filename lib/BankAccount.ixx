#include <stdexcept>
export module BankAccount;

export class BankAccount {
    double balance;

public:
    BankAccount(double initial_balance)
        : balance(initial_balance)
    {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        }
        else {
            throw std::runtime_error("Insufficient funds");
        }
    }

    double get_balance() const {
        return balance;
    }
};
