#include<iostream>
using namespace std;
// by default all floating point number are 'double'
// if you want to declare floating point number as 'float' , you have to used 'f' with number.
// to declare floating point number for safe zone you have to declare "double" keyword.
int main(){
// size of variables ---------------->  sizeof()
    float a = 10.5f;
    double b= 10.7;
    long double c = 10.0l;
    cout<< "size of a " << sizeof(a) <<endl; 
    cout<< "size of b " << sizeof(b) <<endl;
    cout<< "size of c " << sizeof(c) <<endl;
    //typecasting in cpp
    cout<< "the value of d is " <<int(a)<<endl;
    cout<<"The value of the string is "<<int(b)<<endl;
    
return 0;
}