#include<iostream>
using namespace std;

class SAinput{
    public: int side1;
    public: 
        void input(){
            cout<<"Enter the side of square: ";
            cin>> side1;
        }
};

class SAperform: public SAinput{
    public:
        void perform(){
            input();
            cout<<"The Surface Area of cube is "<<6*side1*side1;
        }
};

int main()
{
    SAperform obj;
    obj.perform();
    return 0;
}