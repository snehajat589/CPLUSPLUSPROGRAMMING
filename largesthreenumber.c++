#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 15;

    if(a >= b && a >= c)
        cout << "Largest = " << a;
    else if(b >= c)
        cout << "Largest = " << b;
    else
        cout << "Largest = " << c;

    return 0;
}
   