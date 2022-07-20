//there are two types of header files in cpp
//1.System header files- it comes with the complier
#include<iostream>
//2.User defined header files- it is written by the programmer
#include "amar.h"
using namespace std;
int main(){
    cout<<  "this is user defined header file"<<endl;;
    Programmer Amar;
    Amar.slogan();
return 0;
}