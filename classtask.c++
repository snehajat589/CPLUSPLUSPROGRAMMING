#include<iostream>
using namespace std;
class facebook{
    private:
    string username;
    int age;
    public:
    void justify(){
        cout<<"Enter username:";
        cin>>username;
        cout<<"enter age:";
        cin>>age;
        if(age>18){
            cout<<"login successfull";
        }
        else{
           cout<<"login failed";
        }
    }
    };
    int main(){
    facebook();
    facebook justify();
    return 0;
    }
