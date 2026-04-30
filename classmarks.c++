#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    void setData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.setData();   // private data ko indirectly set kar rahe
    s1.display();

    return 0;
}