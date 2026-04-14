#include<iostream>
#include<string>
using namespace std;

int main(){
    string name = "Sneha";

    int len = name.length();

    for(int i = len - 1; i >= 0; i--){
        cout << name[i];
    }

    return 0;
}