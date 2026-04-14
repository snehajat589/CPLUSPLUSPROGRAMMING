#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    int *c = &a;
    int *d = &b;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<*c<<endl;
    cout<<*d<<endl;
    cout<<"addition="<<*c+*d ;
    return 0;



}