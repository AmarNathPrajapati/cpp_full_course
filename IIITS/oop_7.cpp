#include<iostream>
using namespace std;
class Bank{
    public:
        int getBalance(){
            return 0;
        }
};
class BankA: public Bank{
    public:
        int getBalance(int money){
            return money;
        }
};
class BankB: public Bank{
    public:
        int getBalance(int money){
            return money;
        }
};
class BankC: public Bank{
    public:
        int getBalance(int money){
            return money;
        }
};
int main(){
    BankA a;
    cout<<a.getBalance(500)<<endl;
    BankB b;
    cout<<b.getBalance(1500)<<endl;
    BankC c;
    cout<<c.getBalance(2000)<<endl;
return 0;
}