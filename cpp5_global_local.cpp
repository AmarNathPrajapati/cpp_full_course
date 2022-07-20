#include<iostream>
using namespace std;
int global = 50;
void sum(){
    cout<< "\nThe value of global variable is "<<global;
}
int main(){
    int local = 10;
    cout<<"the value of local variable is "<<local;
    cout<<"\nThe value of global variable is "<<global;
    int global = 25;
    cout<<"\nThe value of global variable is "<<global;
//NOTE----- local and globle variable can be same name, but local variable has greater precedence than global variable. 
// varible name should always start with alphabate or underscore or $ and must be alphanumeric 
    sum();
// if you want to use global variable in local then follow this syntax
    cout<< "\n the global variable in local area is "<< ::global;
return 0;
}       