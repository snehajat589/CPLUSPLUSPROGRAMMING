#include<iostream>
using namespace std;

class S {
public:
    void name() {
        char str1[] = "snehaa";
        char str2[] = "Jat";

        
        for(int i = 0; str1[i] != '\0'; i++) {
            cout << str1[i];
        }
        cout << endl;

        
        for(int i = 0; str2[i] != '\0'; i++) {
            cout << str2[i];
        }
        cout << endl;
    }
};

int main() {
    S s;
    s.name();
    return 0;
}