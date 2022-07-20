#include<iostream>
using namespace std;
template <class T>
T square( T a){
    T result;
    result = a *a ;
    return result;
}

int main(){
    int i = 5;
    int result = square<int>(i);
    cout<<result;
return 0;
}