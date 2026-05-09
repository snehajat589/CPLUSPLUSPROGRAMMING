#include<iostream>
using namespace std;
class A{
    
    public:
    void displayA(){
        cout<<"A"<<endl;
    }
};
class B :public A{
    public:
    void displayB(){
        cout<<"B"<<endl;
    }
};
class C :public A{
    
    public:
    void displayC(){
        cout<<"C"<<endl;
    }
};

int main(){
    B obj1;
    C obj2;
    obj1.displayA();
    obj1.displayB();
    obj2.displayA();
    obj2.displayC();

}