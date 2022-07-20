#include<iostream>
using namespace std;
//const argument never be change
// it is only significant for referecne variable and pointer.
int moneyReturn(int money , const float rate = 1.04){
    return money*rate;
}
int main(){
    int money = 100000;
    cout << "The total money for normal candidate "<<moneyReturn(money)<< endl;
    cout << "The total money for VIP candidate "<< moneyReturn(money,1.1) <<endl;


return 0;
}