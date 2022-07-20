#include<iostream>
using namespace std;

int main(){

    int *p = new int;// request memory
    *p = 10; // store value 
    cout << "The value of p is " << *p <<endl;// use value
    delete p;//free memory
    cout << "The value of p is " << *p <<endl;// now p is dangling pointer.
    
return 0;
}   