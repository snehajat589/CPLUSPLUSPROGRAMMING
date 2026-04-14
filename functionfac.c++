#include<iostream>
using namespace std;

int factorial(int n){   // function
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int main(){
    int result;

    result = factorial(6);   // function call

    cout << "Factorial of 6 is: " << result << endl;

    return 0;
}