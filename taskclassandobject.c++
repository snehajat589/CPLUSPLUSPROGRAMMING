#include<iostream>
using namespace std;
class swap{
    private:
    int a,b, temp;
    public:
    void input(){
        cout<<"Enter number";
        cin>>a>>b;
        temp = a;
        a = b;
        b = temp;
      void display(){
        cout<<"after swapping is";
      }
    }
}