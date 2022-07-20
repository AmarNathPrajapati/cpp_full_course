#include<iostream>
using namespace std;
/*
inline function-
        it reduce overhead coming from again and again function call.
        use inline function for short line of code
        do not make function inline for long line of code
        basically inline fuction replace fucntion call by return value
        don't use inline fuction with static variable
*/
inline int add(int a , int b){
    return a+b;
}
int main(){
    cout << " The value of given two number is "<< add(2,3)<<endl;
    cout << " The value of given two number is "<< add(2,3)<<endl;
    cout << " The value of given two number is "<< add(2,3)<<endl;
    cout << " The value of given two number is "<< add(2,3)<<endl;
    cout << " The value of given two number is "<< add(2,3)<<endl;
    cout << " The value of given two number is "<< add(2,3)<<endl;
    cout << " The value of given two number is "<< add(2,3)<<endl;
    cout << " The value of given two number is "<< add(2,3)<<endl;
    cout << " The value of given two number is "<< add(2,3)<<endl;
    cout << " The value of given two number is "<< add(2,3)<<endl;
return 0;
}