#include<iostream>
using namespace std;
class complex{
 private:
 int real, imag ;
 public:
 void getdata(){
    cout<<"Enter real:";
    cin>>real;
    cout<<"Enter imag:";
    cin>>imag;
 }
 complex operator + (complex c){
    complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;

}
}; 