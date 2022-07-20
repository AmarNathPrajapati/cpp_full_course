#include<iostream>
using namespace std;
class Bank{
    public:
        int getBalance(){
            return 0;
        }
};
class BankA:public Bank{
    public:
        int money;
        BankA(int num){
            money = num;
        }
        int getBalance(){
            return money;
        }
};
class BankB:public Bank{
    public:
        int money;
        BankB(int num){
            money = num;
        }
        int getBalance(){
            return money;
        }
};
class BankC:public Bank{
    public:
        int money;
        BankC(int num){
            money = num;
        }
        int getBalance(){
            return money;
        }
};
int main(){
    int a,b,c;
    cout<<"Deposite money in BankA: "<<endl;
    cin>>a;
    cout<<"Deposite money in BankB: "<<endl;
    cin>>b;
    cout<<"Deposite money in BankC: "<<endl;
    cin>>c;
    BankA boy(a);
    BankB boy1(b);
    BankC boy2(c);
    cout<<"Your Balance in BankA is :"<<boy.getBalance()<<endl;
    cout<<"Your Balance in BankB is :"<<boy1.getBalance()<<endl;
    cout<<"Your Balance in BankC is :"<<boy2.getBalance()<<endl;

return 0;
}