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
    cout<<"score 90% in c++"<<endl;
}
};
class exam:public teacher // derived class
{
    public:
    void marks(){
    cout<<"he study c++  with oops regulary"<<endl;
}
};
int main(){

    class exam s;
    s.marks();
    

    return 0;
}