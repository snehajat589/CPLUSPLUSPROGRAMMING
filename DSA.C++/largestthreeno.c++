#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"Enter number:";
    cin >> a >> b >> c;
    if (a>b && a>c){
        cout<<"largest no is a";
    }
    else if (b>a && b>c){
        cout << "largest no is b";
    }
    else 
    cout << "largest no is c";
    return 0;
}