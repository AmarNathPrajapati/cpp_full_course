#include<iostream>
using namespace std;
class AddAmount{
    int amount=50;
    public:
        AddAmount(){
            amount = 50;
        }
        AddAmount(int val){
            amount+=val;
        }
        void show(){
            cout<<"Your balance is: "<<amount<<endl;
        }
};
int main(){
    AddAmount b;
    b.show();
    int money;
    cout<<"Enter the initial money: ";
    cin>>money;
    AddAmount a(money);
    a.show();
return 0;
}