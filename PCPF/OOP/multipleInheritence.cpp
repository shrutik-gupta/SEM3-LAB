#include<iostream>
using namespace std;

class A{
    private: 
        int rollNo;
        char name[25];
    public:
        void getInfo(){
            cout<<"Enter roll number of student: ";
            cin>>rollNo;
            cout<<"Enter name of student: ";
            cin>>name;
        }
        void printInfo(){
            cout<<"Roll number of student is: "<<rollNo<<endl;
            cout<<"Name of student is: "<<name<<endl;
        }
};

class B{
    private: 
        int grNo;
        char city[25];
    public:
        void readInfo(){
            cout<<"Enter G.R. number of student: ";
            cin>>grNo;
            cout<<"Enter city of student: ";
            cin>>city;
        }
        void showInfo(){
            cout<<"G.R. number of student is: "<<grNo<<endl;
            cout<<"City of student is: "<<city<<endl;
        }
};

class C: public A, public B{
    private: 
        int m1,m2;
    public:
        void readMarks(){
            cout<<"Enter marks 1 of student: ";
            cin>>m1;
            cout<<"Enter marks 2 of student: ";
            cin>>m2;
        }
        void showMarks(){
            cout<<"Marks 1 of student is: "<<m1<<endl;
            cout<<"Marks 2 of student is: "<<m2<<endl;
            cout<<"Total marks of student is: "<<m1+m2<<endl;
        }
};

int main(){
    C obj;
    obj.getInfo();
    obj.readInfo();
    obj.readMarks();
    obj.printInfo();
    obj.showInfo();
    obj.showMarks();
    return 0;
}