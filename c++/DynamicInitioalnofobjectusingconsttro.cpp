#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
private:
    string name;
    double balance;
public:
    Account(string n, double b) {
        name = n;
        balance = b;
    }
    string getName() {
        return name;
    }
    double getBalance() {
        return balance;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. Current balance: " << balance << endl;
    }
    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful. Current balance: " << balance << endl;
            return 1;
        }
        else {
            cout << "Insufficient funds." << endl;
            return 0;
        }
    }
};

class Bank {
private:
    vector<Account> accounts;
public:
    void addAccount(Account account) {
        accounts.push_back(account);
    }
    void removeAccount(Account account) {
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].getName() == account.getName()) {
                accounts.erase(accounts.begin() + i);
                cout << "Account removed." << endl;
                return;
            }
        }
        cout << "Account not found." << endl;
    }
    void printAccounts() {
        for (int i = 0; i < accounts.size(); i++) {
            cout << "Account name: " << accounts[i].getName() << ", Balance: " << accounts[i].getBalance() << endl;
        }
    }
};

int main() {
    Bank bank;
    Account account1("John Doe", 1000);
    Account account2("Jane Smith", 5000);
    bank.addAccount(account1);
    bank.addAccount(account2);
    bank.printAccounts();
    account1.withdraw(500);
    account2.deposit(2000);
    bank.printAccounts();
    bank.removeAccount(account1);
    bank.printAccounts();
   return 0;
}