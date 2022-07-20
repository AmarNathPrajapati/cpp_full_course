#include<iostream>
using namespace std;
/*
    recursion means fuction call itself;
    work like loop ;
    termination is important;
*/
// recursive algorithm for factorial
int fac(int n){
    if(n==1){
        return 1;
    }else{
        return n*fac(n-1);
    }
}
// recursive algorithm for fibbonacci series
int fib(int n){
    if(n<2){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}
int main(){
    int num;
    cout << "Write the integer whose factorial you want ";
    cin>>num;
    // int value = fac(num);
    // cout << "The value of factorial " << num << " is " <<value <<endl;
    int value1 = fib(num);
    cout << "The value of  " << num+1<< "th fibbonacci number is " <<value1 <<endl;
    
    
return 0;
}