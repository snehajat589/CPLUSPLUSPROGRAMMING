#include<iostream>
#include<string>
using namespace std;
class teacher//base claass
{
   private:
   string name;
   public:
   void read(){
    cout<<"c++ oops"<<endl;
   }
};
class student:public teacher // derived class
{
    public:
    void sport(){
    cout<<"he study c++  with oops regulary"<<endl;
}
};
int main(){

    student s;
    s.sport();

    return 0;
}