#include<iostream>
#include<string.h>
using namespace std;
class car{
    private:
    string carname ;
    int plateno;
    string model;
    string color;
    string brand;

    public:
    void input(){
        cout<<"Enter car name:";
        cin>>carname;
        cout<<"Enter plate number:";
        cin>>plateno;
        cout<<"Enter model:";
        cin>>model;
        cout<<"Enter color:";
        cin>>color;
        cout<<"Enter brand:";
        cin>>brand;
    }
    void display(){
        cout<<"\ncar name: "<<carname;
        cout<<"\nplateno: "<<plateno;
        cout<<"\nmodel: "<<model;
        cout<<"\ncolor: "<<color;
        cout<<"\nbrand: "<<brand;
    }

};
int main() {
    car obj();
    obj.input();
    obj.display();
    return 0;
}