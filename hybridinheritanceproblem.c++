#include<iostream>
using namespace std;
class person {
    private:
    string name;
   
    public:
    void getdata(){
        cout<<"snehajat";
       
    }
};
class student : public person {
    private:
    string studentname;
    
    string address;
    public:
    void stname(){
        cout<<"khushijat";
    }
    
    void stadr(){
        cout<<"harda";
    }
};
class employee : public person{
         private:
         string employename;
         string degree;
         string companyname;
         string skill;
         public:
         void getname(){
            cout<<"rahul";
         }
          void getdeg(){
            cout<<"btech cse";
         }
          void getcomp(){
            cout<<"google";
         }
          void getsk(){
            cout<<"fullstack developer";
         }
};
class workingstudent: public student ,  public employee{
    private:
    string currentskill;
    public:
    void getinfo(){
        cout<<"manage database system";
    }
};
int main(){
        workingstudent w;
        w.stname();
        w.stadr();
        w.getname();
        w.getdeg();
        w.getcomp();
        w.getsk();
        w.getinfo();
        return 0;
}