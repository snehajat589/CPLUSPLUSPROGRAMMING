#include<iostream>
using namespace std;
 

 class virat  
 {
    
    public:
     void perfomance(int t20_match, int fifity , int hundred);//member functions
     void perfomance(char odi_match, int fifity );
     void perfomance(char test_match, int fifity , int hundred){

       cout<<"t20_match";
       cout<<"odi_match";
       cout<<"test_match";
     } 

    
 };
int main(){
       virat v;
       v.perfomance(50,20,55);
       v.perfomance(10,3,50);
       v.perfomance(100,60,7);
       return 0;


}

