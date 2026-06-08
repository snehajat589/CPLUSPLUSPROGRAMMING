#include<iostream>
using namespace std;
 //example of function overloading 

 class demo_funoverloading  //class name
 {
    private:  // access specifier
               //data members 
    public:
     int add(int a,int b) //member functions
     {
      cout<<"addition is =\n"<<a+b;
     }
     int add(double a, double b)  //formal arguments
     {
        cout<<"addition of another function \n"<<a+b;
     }
 };
int main(){
       demo_funoverloading d;  // create object
       d.add(10,20);  //actual arguments
       d.add(10.5,20.9);
       return 0;


}

