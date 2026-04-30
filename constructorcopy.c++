#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    int marks;
    string city;
    public:
    student(string n,int a,int m,string c){
        name = n;
        age = a;
        marks = m;
        city = c;
    }
    //copy constructor
    student(student &s){
        name  = s.name;
        age = s.age;
        marks = s.marks;
        city = s.city;
    }
    void display(){
        cout << name <<" "<< age <<" "<< marks <<" "<< city << endl;
    }

};
int main(){
    student s1 ("sneha",20,98,"harda");
    s1.display();
    return 0;
}