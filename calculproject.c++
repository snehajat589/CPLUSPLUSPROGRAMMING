#include<iostream>
using namespace std;
int main(){
    int a,b,choice;
    cout <<"enter two numbers:";
    cin >> a >> b;
    cout <<"1.add\n 2. sub\n 3.multi\n 4.div\n";
    cout <<"Enter your choice:";
    cin >> choice;
// switch case//
switch(choice){
    case 1:
          cout <<"sum =" << a+b;
          break;
    case 2:
          cout <<"sub =" << a-b;
          break;
    case 3:
          cout <<"multi =" << a*b;
          break;
    case 4:
          cout <<"div =" << a/b;
          break;
           
    default:
          cout <<"Invalid choice:" ;
}
return 0;
}