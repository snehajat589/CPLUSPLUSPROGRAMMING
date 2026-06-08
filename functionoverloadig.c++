#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c)
{
    return a + b + c;
}

// Function to add two floating-point numbers
float add(float a, float b)
{
    return a + b;
}

int main()
{
    cout << "Addition of two integers: " << add(10, 20) << endl;
    cout << "Addition of three integers: " << add(10, 20, 30) << endl;
    cout << "Addition of two floats: " << add(10.5f, 20.5f) << endl;

    return 0;
}