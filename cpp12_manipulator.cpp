#include<iostream>
#include<iomanip>
using namespace std;
// manipulator in cpp
int main(){
    int a=1,b=11,c=111,d=1111;
    cout<< "The value of a is "<<a<<endl;
    cout<< "The value of b is "<<b<<endl;
    cout<< "The value of c is "<<c<<endl;
    cout<< "The value of d is "<<d<<endl;

    // with manipulator

    cout<< "The value of a is setw"<<setw(6)<<a<<endl;
    cout<< "The value of b is setw"<<setw(6)<<b<<endl;
    cout<< "The value of c is setw"<<setw(6)<<c<<endl;
    cout<< "The value of d is setw"<<setw(6)<<d<<endl;

return 0;
}