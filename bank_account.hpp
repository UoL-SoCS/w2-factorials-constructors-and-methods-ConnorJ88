#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Default constructor
    BankAccount() : accountNumber(""), accountHolderName(""), balance(0.0) {}

    // Parameterized constructor
    BankAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance)
        : accountNumber(accNumber), accountHolderName(accHolder), balance(initialBalance) {}

    // Deposit method
    void Deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: £" << amount << std::endl;
        } else {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }

    // Withdraw method
    void Withdraw(double amount) {
        if (amount <= 0) {
            std::cout << "Withdrawal amount must be positive." << std::endl;
        } else if (amount > balance) {
            std::cout << "Withdrawal amount cannot exceed balance." << std::endl;
        } else {
            balance -= amount;
            std::cout << "Withdrawn: £" << amount << std::endl;
        }
    }

    // Display account information
    void DisplayAccountInfo() const {
        std::cout << "\n--- Account Information ---\n";
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Balance: £" << balance << std::endl;
        std::cout << "---------------------------\n";
    }

    // Getter for balance
    double GetBalance() const {
        return balance;
    }
};



