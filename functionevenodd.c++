#include<iostream>

using namespace std;

//even adn odd using parametrized 

    int even(int x);
    int odd(int y);
          
    int even(int x)
    {
        if(x%2==0)
        cout<<"number is even"<<x;
    }

     int odd(int y)
    {
        if(y%2!=0)
        cout<<"number is odd"<<y;
    }
    
    int main()
    {
        even(12);
        odd(5);

        return 0;
    }