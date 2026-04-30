#include<iostream>
using namespace std;

class Bank {
private:
    string username;
    int accountNo;
    double balance;

public:
  
    Bank(string n, int a, double b) {
        username = "snehajat";
        accountNo = 237464238432;
        balance = 100000;
    }

    
    void credit(double amount) {
        balance += amount;
        cout << "Amount Deposited: " << amount << endl;
    }


    void debit(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
        }
    }

  
    void display() {
        cout << "username: " << username << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    Bank obj("Sneha", 12345, 5000);

    obj.display();

    obj.credit(2000);  
    obj.debit(1000);    

    obj.display();

    return 0;
}