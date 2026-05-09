#include<iostream>
#include<string>
using namespace std;
class university{
    private:
    string sageuniversitybhopal;
    public:
     void name(){
        cout<<"sage university "<<endl;
     }
};

class course : public university
{
    private:
    string btechcse;
    public:
     void subj(){
        cout<<"Data analaytics "<<endl;
     }
};

class faculty : public course
{
    private:
    string python;
    public:
     void teachername(){
        cout<<" umesh sir"<<endl;
     }
};

class student : public faculty
{
    private:
    string sneha;
    public:
     void studentname(){
        cout<<" sneha jat"<<endl;
     }
};
int main(){
    student s;
    s.name();
    s.subj();
    s.teachername();
    s.studentname();
    return 0;
}

