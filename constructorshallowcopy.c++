#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }

    // No copy constructor written → default will be used
};

int main() {
    Student s1("Sneha", 20);
    Student s2 = s1;   // SHALLOW COPY

    cout << s1.name << " " << s1.age << endl;
    cout << s2.name << " " << s2.age << endl;

    s2.name = "Riya";
    s2.age = 25;

    cout << "After change:" << endl;
    cout << s1.name << " " << s1.age << endl;
    cout << s2.name << " " << s2.age << endl;

    return 0;
}