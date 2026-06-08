#include<iostream>
using namespace std;
class bank{
    public:
    void deposit(int amount){
        cout<<"amount Depostied= "<<amount<<endl;
    }
     void deposit(int amount , int balance){
        cout<<"amount  = "<<amount<<endl;
        cout<<"balance  = "<<balance<<endl;
    }
    void deposit(int amount , int balance , float interest){
        cout<<"amount "<<amount<<endl;
        cout<<"balance "<<balance<<endl;
        cout<<" interest"<<balance<<endl;
    }
};
int main(){
    bank b;
    b.deposit(5000);
    b.deposit(5000,1000);
    b.deposit(5000,15000,7.5);
      return 0;
    
}

   