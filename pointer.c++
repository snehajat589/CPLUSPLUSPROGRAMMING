#include<iostream>
using namespace std;
int main(){
    int num = 10; //normal variable...
    int *ptr = &num; // pointer to int, storing addressss of num.
    cout << "value of num:" << num << endl; // print 10
    cout << "address of num:" << &num << endl; // print address of num.
    cout << "value of ptr:" << ptr << endl; // print address of num stored in pointer.
     cout<<"value at address stored by ptr: " << *ptr << endl;
     return 0;
} 

