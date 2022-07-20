#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the last number: ";
    cin>>n2;
    cout<<"even numbers are: ";
    for (int i = n1; i <= n2; i++)
    {
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"odd numbers are: ";
    for (int i = n1; i <= n2; i++)
    {
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
return 0;
}