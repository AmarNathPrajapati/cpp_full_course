#include<iostream>
using namespace std;
/*
Dynamic Initializing of object using constructors----------------->
        1.Runtime par pata chalega ki kaun sa constructor Run hoga.
        2.user ke input par depend karega.
*/
class bankDeposite{
    int principle;
    int years;
    float rate;
    int returnMoney;
    public:
        bankDeposite(int p,int y,float r){
            principle = p;
            years = y;
            rate = r;
            cout<<r<<endl;
            returnMoney = principle;
            for (int i = 0; i < y; i++)
            {
                returnMoney = returnMoney*(1+r);
                cout<<returnMoney<<endl;
            }
            cout << "Your money after "
            << years << " years is " <<returnMoney<<endl;
        }
        bankDeposite(int p,int y,int r){
            principle = p;
            years = y;
            rate = r;
            float ir = r/100;
            cout<<r<<endl;
            returnMoney = principle;
            for (int i = 0; i < y; i++)
            {
                returnMoney = returnMoney*(1+ir);
                cout<<returnMoney<<endl;
            }
            cout << "Your money after "
            << years << " years is " <<returnMoney<<endl;
        }
};

int main(){
    int p,y;
    float r;
    int R;
    cout << "Enter your money ,years and rate"<<endl;
    cin>>p>>y>>r;
    bankDeposite bd(p,y,r);
    cout << "Enter your money ,years and rate"<<endl;
    cin>>p>>y>>R;
    bankDeposite bd(p,y,r);
return 0;
}