#include<iostream>
using namespace std;

int main(){
    int num[8];
    static int n;
    for (int i = 0; i < 8; i++)
    {
        cout<<"Enter the number in array : ";
        cin>>num[i];
    }
    for (int i = 0; i < 8; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl<<"Enter the number for the first position: "<<endl;
    cin>>n;
    num[0]= n;
    for (int i = 1; i < 8; i++)
    {
        n=n-1;
        num[i] = n;
    }
    for (int i = 0; i < 8; i++)
    {
        cout<<num[i]<<" ";
    }
return 0;
}   