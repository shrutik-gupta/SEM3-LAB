#include<iostream>
using namespace std;

class SurfaceArea{
    public: 
        int area;
        SurfaceArea(int a){
            area= 6*a*a;
        }
        SurfaceArea(int a, int b){
            area= (6*a*a)+(6*b*b);
        }
        void calculateArea(){
            cout<<area<< endl;
        }
};

int main(){
    SurfaceArea o(0);
    SurfaceArea o1(0,0);
    int choice, a, b;
    cout<<"Enter number of cubes: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter side of cube 1: ";
        cin>>a;
        o = SurfaceArea(a);
        o.calculateArea();
        break;
    
    case 2:
        cout<<"Enter side of cube 1: ";
        cin>>a;
        cout<<"Enter side of cube 2: ";
        cin>>b;
        o1 = SurfaceArea(a,b);
        o1.calculateArea();
        break;
    
    default:
        break;
    }
    return 0;
}