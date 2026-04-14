#include<iostream>
using namespace std;

int main() {

    int var[] = {10, 20, 0, 40, 50};
    int i = 0, sum = 0;
    int *pt;

    cout << "Pointer Example C++ Program : Sum of Integer Pointer and Array \n";

    pt = &var[0];  
    int size = 5;  

    while (i < size) {
        sum = sum + *pt;  
        pt++;             
        i++;            
    }

    cout << "Sum of Array : " << sum;

    return 0;
}