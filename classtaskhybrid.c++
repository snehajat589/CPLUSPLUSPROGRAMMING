#include<iostream>
using namespace std;
class Person{   // base class
    public:
    void displayperson(){
        cout<<"this is a classs A\n";
    }
};
class student : virtual public Person //derive class
{
    public:
    void displaystu(){
        cout<<"this is a classs b\n";
    }
};
class Employee : virtual public Person  //derive class
{
    public:
    void displayemploy(){
        cout<<"this is a classs C\n";
    }
};

class workingstudent : public student ,  public Employee //Multiple inheritance
{
    public:
    void displayworking(){
        cout<<"this is a classs D\n";
    }
};
int main(){
       workingstudent w ;
     //obj.displayA();
     w .displaystu();
    w .displayemploy();
    w.displayworking();
 return 0;
}