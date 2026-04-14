#include<iostream>
using namespace std;
int main(){
    int a;
    int *pt;
    cout<<"pointer in c++ : increment dcrement integer\n";
    a = 10;
    pt = &a;
    (*pt)++;
    cout<<"\n[a]:increment value of A = "<<a;
    ++(*pt);
    cout<<"\n[a]:increment value of A = "<<a;
    (*pt)--;
    cout<<"\n[a]:decrement value of A = "<<a;
    --(*pt);
    cout<<"\n[a]:decrement value of A = "<<a;
}