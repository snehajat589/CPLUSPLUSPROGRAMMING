#include<iostream>
using namespace std;
void fun(int a){
    cout<<"int";
}
void fun(float a){
    cout<<"float";
}
int main(){
    fun(a);
    cout<<a;
    return 0;
}