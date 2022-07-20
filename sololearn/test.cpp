#include<iostream>
using namespace std;

int main(){
    // char c = (24>25)?(58>49)?'A':'B':(42>40)?'C':'D';
    // cout<<c;
    int a,b,c;
    a = 5;
    b=55;
    c=555;
    cout<<c%b<<endl;
    cout<<c%a<<endl;
    int d = (c%b>c%a)?5:55;
    cout<<d;
return 0;
}   