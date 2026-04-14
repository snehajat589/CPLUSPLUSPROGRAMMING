#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int min;
    cout<<"enter 5 number:";
    
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    min = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<"smallest="<<min;
    return 0;

}
    