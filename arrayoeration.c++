#include<iostream>
using namespace std;
class arrayoperation{
    private:
    int n;
    int arr[100];
    public:
    void insertelements(){
        cout<<"Enter the elements:";
        cin>>n;
        cout<<"Enter the elements:";
        for(int i=0 ; i<n;i++){
            cin>>arr[i];
        }
    }
    void array(){
   
    int max = arr[0];
    for(int i = 1; i<n; i++){
       if(arr[i] > max){
        max = arr[i];
       }
       
    }
      cout << max;
      
    }
    
    
void sorting()
       {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << "Array in decreasing order: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    arrayoperation a;

    a.insertelements();
    a.array();
    a.sorting();

    return 0;
}