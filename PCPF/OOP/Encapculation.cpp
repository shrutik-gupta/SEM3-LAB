#include<iostream>
using namespace std;

class Adder{
    int total=0;
    public:
        Adder(){

        }

        void add(int price){
            total= total+price;
        }

        int getTotalEarning() {
            return total;
        }
};

int main(){
    Adder obj;
    int chocolate = 600, butterscotch= 750, vanilla= 300, choice=0;
    while(choice!=5){
        cout<<"Welcome to cake shop"<<endl;
        cout<<"1.Chocolate"<<endl;
        cout<<"2. Butterscotch"<<endl;
        cout<<"3. Vanilla"<<endl;
        cout<<"4. Get total earning"<<endl;
        cout<<"5. Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            obj.add(chocolate);
            break;
        
        case 2:
            obj.add(butterscotch);
            break;
        
        case 3:
            obj.add(vanilla);
            break;
        
        case 4:
            cout<<"Total earning is "<<obj.getTotalEarning()<<endl;
            break;

        case 5:
            cout<<"Exiting the program...";
            break;
        
        default:
            break;
        }
    }
    return 0;
}