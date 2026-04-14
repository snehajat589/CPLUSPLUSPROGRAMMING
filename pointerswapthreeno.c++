#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20 , c=40;
    int *p= &a;
    int *q= &b;
    int *r= &c;
    //swapping the value///
    int temp=*p;
   *p= *q;
   *q= *r;
   *r= temp;
   cout<<"after swapping:"<<endl;
   cout << "a = " << *p << " b = " << *q << " c = " << *r << endl;
   return 0 ;
}