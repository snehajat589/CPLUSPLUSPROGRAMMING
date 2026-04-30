#include<iostream>
using namespace std;
class student{
    private:
   string name;
   int age;
   int marks;
   int rollno;
    
    public://constructor//
    student(){
        name ="sneha";
        age=20;

    }
    int display(){
        cout<<"name is "<<name;
        
        cout<<"age is"<<age;
    }
};
int main(){
    student s;
    s.display();
    return 0;


}