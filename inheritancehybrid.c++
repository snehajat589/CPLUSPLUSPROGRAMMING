#include<iostream>
using namespace std;
class vehicle{
    private:
    string vechname;
    public:
    void start(){
        cout<<"start"<<endl;
    }
    void stop(){
        cout<<"stop"<<endl;
    }
    void fuel(){
        cout<<"petrol"<<endl;
    }
};
class car :public vehicle{
    private:
     string carname;
     public:
     int seats;
    void Ac(){
        cout<<"Ac"<<endl;
    }
     void boot(){
        cout<<"boot"<<endl;
    }
     void info(){
        cout<<"seats"<<endl;
    }
};