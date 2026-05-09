#include<iostream>
#include<string>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    void getpersondata (){
         cout<<"sneha"<<endl;
         cout<<"20"<<endl;
}
};

class Doctor : public person{
    private:
    string name;
    string specialization;
    public:
    void doctordata (){
         cout<<"Rahul"<<endl;
         cout<<"MBBS"<<endl;
}
};

class patient : public person{
    private:
    string diseases;
   
    public:
    void getpatientdata (){
         cout<<"fever"<<endl;
       
}
};
class surgeon : public Doctor{
      private:
      int surgeriesperformed;
      public:
      void surgendata(){
        cout<<"surgeriesperformed"<<endl;
      }
};
int main(){
    

    Doctor d;
    patient p;
    surgeon s;

    d.getpersondata();
    d.doctordata();

    p.getpersondata();
    p.getpatientdata();

    s.getpersondata();
    s.doctordata();
    s.surgendata();

    return 0;
}

