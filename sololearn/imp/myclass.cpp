#include<iostream>
#include "Myclass.h"
using namespace std;
Myclass::Myclass(int a , int b):regVar(a),constVar(b){
    cout<<regVar<<endl;
    cout<<constVar<<endl;
}
int main(){
    Myclass c(2,3);
return 0;
}