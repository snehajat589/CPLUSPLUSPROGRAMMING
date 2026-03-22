#include<iostream>
using namespace std;
float bill(int units = 0){
    float amount;

    if(units <= 100)
        amount = units * 1.5;
    else if(units <= 200)
         amount = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4;
    return amount;
}
int main(){
    int units;
    cout<<"Enter units:";
    cin >> units;
    cout<<"Bill = " << bill(units);

    return 0;
}