#include<iostream>
using namespace std;

class SurfaceArea{
    public:
        void SAcube(int a){
            cout<<"Area is"<<6*a*a;
        }
        void SAcube(int a, int b){
            cout<<"Area is "<<(6*a*a)+(6*b*b);
        }
};

int main(){
    SurfaceArea obj;
    int choice, a, b;
    cout<<"Enter number of cubes: ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter side 1: ";
            cin>>a;
            obj.SAcube(a);
            break;

        case 2:
            cout<<"Enter side 1: ";
            cin>>a;
            cout<<"Enter side 2: ";
            cin>>b;
            obj.SAcube(a,b);
            break;
    }
    return 0;
}
