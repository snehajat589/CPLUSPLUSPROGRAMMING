#include<iostream>
using namespace std;
class car{
    private:
    string brand;
    float price;
    string color;

    public:
    car(){
            brand="BMW";
            price=500000;
            color="black";
    }
   
    void display(){
        cout<<"brand"<<brand<<endl;
         cout<<"price"<<price<<endl;
          cout<<"color"<<color<<endl;
    }

};
int main(){
    car c;
   c. display();
    return 0;

}