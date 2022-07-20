#include<iostream>
using namespace std;
/*
In static variable - 
        you can initialize variable only once and variable can be only update
*/
int sum(int a , int b){
    static int c = 0;
    c++;
    return a+b+c;
}
int main(){
    cout << "The return from the function is " << sum(2,3)<< endl;
    cout << "The return from the function is " << sum(2,3)<< endl;
    cout << "The return from the function is " << sum(2,3)<< endl;
    cout << "The return from the function is " << sum(2,3)<< endl;
    cout << "The return from the function is " << sum(2,3)<< endl;
    cout << "The return from the function is " << sum(2,3)<< endl;
    cout << "The return from the function is " << sum(2,3)<< endl;
    cout << "The return from the function is " << sum(2,3)<< endl;
    cout << "The return from the function is " << sum(2,3)<< endl;
    cout << "The return from the function is " << sum(2,3)<< endl;
return 0;
}