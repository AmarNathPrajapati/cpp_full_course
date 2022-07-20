#include<iostream>
using namespace std;
// referance variable --> it means referance variable points the actual variable i.e. it store the data of actual variable.
// simple language --> variable ek naam anek
int main(){
    int x=10;
    int &y=x;//now y is the x i.e. any change in y can change the vlaue of the x.
    y=11;
    cout<< "the vlaue of x is "<<x<<endl;
    cout<< "the vlaue of y is "<<y<<endl;

    int x1=101;
    int *y1=&x1;
    cout<< "the vlaue of x is "<<x1<<endl;
    cout<< "the vlaue in y is "<<*y1<<endl;
    
    // string s = "chandan";
    // string s1 ="golu";
    // string &name = s;
    // // &name = s1;// can't be modified once it intialized
    // cout<<"The name of the employee is "<<name<<endl;
    // // importance of the reference variable
    // int a= 10, b= 5;
    // int &a1 = a;
    // a1 = b;
    // cout<<"The value of the a is "<<a;
return 0;
}