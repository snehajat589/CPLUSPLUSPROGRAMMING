#include<iostream>
using namespace std;
class calculator{
    private://access specifier
       int a;//data member//(private)
       int b;
       int c;
       //memberfunctions(public)
     public:
       int add(){
        cout<<"enter the element a and b";
        cin>>a>>b;
        c=a+b;
        cout<<"addition is "<<c;
       }
       int sub(){
        cout<<"enter the element a and b";
        cin>>a>>b;
        c=a-b;
        cout<<"subtraction is "<<c;
       }
       
};
int main(){
       calculator c; //created object of calculator class
       c.add();
       c.sub();
       return 0;
}
