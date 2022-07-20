#include<iostream>
using namespace std;

int main(){
    int  i = 3;
    while(i<7){//3<7 is right
        int i= 4;// local i
        i++;
    }
    cout<<i;
return 0;
}