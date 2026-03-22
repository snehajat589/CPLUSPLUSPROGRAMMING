#include<iostream>
using namespace std;
float bank(float balance = 1000,float deposit = 0){
    return balance + deposit;
}

int main(){
    float deposit;
    cout<<"Enter amount to deposit:";
    cin>> deposit;

    float total = bank(1000, deposit);
    cout<<"Total balance =" << total;
    return 0;
}