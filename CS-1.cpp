//Case Study 1
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Account {
private:
    int accountNumber;
    string name, address;
    double balance;

public:
    Account(int accNo, string accName, string accAddress, double initialBalance)
            : accountNumber(accNo), name(accName), address(accAddress), balance(initialBalance) {}

    int getAccountNumber() const { return accountNumber; }

    void displayDetails() const {
        cout << "Account Number: " << accountNumber << ", Name: " << name
             << ", Address: " << address << ", Balance: $" << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " successfully. New Balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << " successfully. Remaining Balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance.\n";
        }
    }

    void checkBalance() const {
        cout << "Current Balance: $" << balance << endl;
    }
};

class Bank {
private:
    vector<Account> accounts;

public:
    void openAccount(int accNo, string name, string address, double initialDeposit) {
        accounts.emplace_back(accNo, name, address, initialDeposit);
        cout << "Account opened successfully.\n";
    }

    void findAccount(int accNo) const {
        for (const auto& account : accounts) {
            if (account.getAccountNumber() == accNo) {
                account.displayDetails();
                return;
            }
        }
        cout << "Account not found.\n";
    }

    void depositToAccount(int accNo, double amount) {
        for (auto& account : accounts) {
            if (account.getAccountNumber() == accNo) {
                account.deposit(amount);
                return;
            }
        }
        cout << "Account not found.\n";
    }

    void withdrawFromAccount(int accNo, double amount) {
        for (auto& account : accounts) {
            if (account.getAccountNumber() == accNo) {
                account.withdraw(amount);
                return;
            }
        }
        cout << "Account not found.\n";
    }

    void showAllAccounts() const {
        if (accounts.empty()) {
            cout << "No accounts to display.\n";
            return;
        }
        for (const auto& account : accounts) {
            account.displayDetails();
        }
    }
};

int main() {
    Bank bank;
    int choice, accNo;
    string name, address;
    double amount;

    do {
        cout << "\nBank Management System\n";
        cout << "1. Open Account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Display All Accounts\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Account Number, Name, Address, Initial Deposit: ";
                cin >> accNo >> name >> address >> amount;
                bank.openAccount(accNo, name, address, amount);
                break;
            case 2:
                cout << "Enter Account Number and Deposit Amount: ";
                cin >> accNo >> amount;
                bank.depositToAccount(accNo, amount);
                break;
            case 3:
                cout << "Enter Account Number and Withdrawal Amount: ";
                cin >> accNo >> amount;
                bank.withdrawFromAccount(accNo, amount);
                break;
            case 4:
                cout << "Enter Account Number to Check Balance: ";
                cin >> accNo;
                bank.findAccount(accNo);
                break;
            case 5:
                bank.showAllAccounts();
                break;
            case 6:
                cout << "Exiting system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
