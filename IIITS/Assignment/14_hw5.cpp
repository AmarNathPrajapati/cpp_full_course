#include<iostream>
using namespace std;
template <class T>
void swap(T *n1 , T *n2){
    T temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main(){
    int n1,n2;
    cout<<"Enter the value of the n1: ";
    cin>>n1;
    cout<<"Enter the value of the n2: ";
    cin>>n2;
    swap(&n1,&n2);
    cout<<"value of n1 :"<<n1<<endl;
    cout<<"value of n2 :"<<n2<<endl;
return 0;
}