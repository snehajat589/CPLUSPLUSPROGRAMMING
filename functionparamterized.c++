#include<iostream>
using namespace std;

int add(int a ,float b); //function declaration
int add(int a, float b) // function defination
{  
  int c;
  //cout<<"enter th value of a and b ";
  //cin>>a>>b;
  c=a+b;
  cout<<"addition is  "<<c <<endl;
}


int main()
{
     add(15.0 , 20.0); //calling of function.......call by value
     
     return 0;

}