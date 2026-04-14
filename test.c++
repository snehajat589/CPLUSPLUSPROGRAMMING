#include<iostream>
using namespace std;
void fun(int a){
    cout<<"int";
}
void fun(float a){
    cout<<"float";
}
int main(){
    fun(5.5);
    
}