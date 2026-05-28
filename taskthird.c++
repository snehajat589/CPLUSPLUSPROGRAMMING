#include<iostream>
using namespace std;

class NumberChecker {
    double num;
    
public:
    void setNumber(double n) {
        num = n;
    }

    void checkNatural() {
        // Natural numbers: 1, 2, 3, 4, ... (positive integers)
        if (num > 0 && num == (int)num)
            cout << num << " is a Natural Number" << endl;
        else
            cout << num << " is NOT a Natural Number" << endl;
    }

    void checkWhole() {
        // Whole numbers: 0, 1, 2, 3, ... (non-negative integers)
        if (num >= 0 && num == (int)num)
            cout << num << " is a Whole Number" << endl;
        else
            cout << num << " is NOT a Whole Number" << endl;
    }

    void checkReal() {
        // Real numbers: any number (integers, fractions, decimals)
        cout << num << " is always a Real Number" << endl;
    }

    void checkAll() {
        cout << "\n--- Checking for number: " << num << " ---" << endl;
        checkNatural();
        checkWhole();
        checkReal();
    }
};

int main() {
    NumberChecker obj;
    double n;

    cout << "Enter a number: ";
    cin >> n;

    obj.setNumber(n);
    obj.checkAll();

    return 0;
}