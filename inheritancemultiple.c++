#include<iostream>
#include<string> 
using namespace std;
class father{
    private:
    string fatherName;
    public:
    void name(){
        cout<<"Rambharoshjat"<<endl;
    }
};

class Mother: public father
{
    private:
    string MotherName;
    public:
    void mothername(){
        cout<<"daughter"<<endl;
    }
};

class daughter:public father,public Mother
{
    private:
        string daughtername;
    public:
    void childname(){
        cout<<"snehajat"<<endl;
    }

};
int main(){
    daughter d;
    d.mothername();
    d.childname();
    return 0;
}
