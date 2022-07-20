#include<iostream>
using namespace std;

int main(){
    int movie =1;
    switch(movie<<(2+movie)){
        default:
            cout<<"a";
        case 4:
            cout<<"S";
        case 5:
            cout<<"D";
        case 8:
            cout<<"B";
    }
return 0;
}