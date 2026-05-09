#include<iostream>
using namespace std;
class A{   // base class
    public:
    void display(){
        cout<<"this is a classs A\n";
    }
};
class B : virtual public A  //derive class
{
    public:
    void displayB(){
        cout<<"this is a classs b\n";
    }
};
class C : virtual public A  //derive class
{
    public:
    void displayC(){
        cout<<"this is a classs C\n";
    }
};

class D : public B ,  public C  //Multiple inheritance
{
    public:
    void displayD(){
        cout<<"this is a classs D\n";
    }
};
int main(){
     D obj;
     //obj.displayA();
     obj.displayB();
     obj.displayC();
    obj.displayD();
 return 0;
}