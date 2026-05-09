#include<iostream>
#include<string>
using namespace std;
class bank
{
    private:
    string name;
    int accountno;
    long balance;
    public:
    void sbi(){
        cout<<"access account"<<endl;
    }

};
class sbi: public bank 
{
    public:
    void details(){
        cout<<"details of customer"<<endl;
    }
};
class accountaccess: public sbi
{
    public:
    void account(){
        cout<<"account n"<<endl;
    }
};

int main(){
    accountaccess a;
    a.details();
    a.account();
    return 0;

}
