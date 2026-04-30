#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter numbers:";
    cin >> n;
    if(n>0){
        cout <<"positive no";
        
    }
    else if(n<0) {
        cout << "Negative no:";

    }
    else {
        cout << "zero:";
    }
    return 0;
}