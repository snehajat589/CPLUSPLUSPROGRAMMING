#include<iostream>
using namespace std;

   
class BankAccount {
private:
    float balance;

public:
    void setBalance(float b) {
        balance = b;
    }

    void deposit(float amount) {
        balance = balance + amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount) {
        if(amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance = balance - amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void display() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.setBalance(1000);   // initial balance

    acc.deposit(500);
    acc.withdraw(300);
    acc.withdraw(1500);     // insufficient case

    acc.display();

    return 0;
}