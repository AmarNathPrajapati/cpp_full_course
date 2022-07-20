/**
 * find largest function using function template
 */
#include<iostream>
using namespace std;
template <class T>
T maximun(T n1, T n2){
    if(n1>n2){
        return n1;
    }else{
        return n2;
    }
}
int main(){
    cout<<"Enter the two integer: "<<endl;
    int n1,n2;
    cin>>n1>>n2;
    cout<<"The max between given two integer is: "<< maximun(n1,n2)<<endl;
return 0;
}