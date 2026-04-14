#include<iostream>
using namespace std;

void swap(int &a, int &b){   // call by reference
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 5, y = 10;

    swap(x, y);   // calling

    cout << "After swapping:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}