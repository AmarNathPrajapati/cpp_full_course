#include<iostream>
using namespace std;
// like malloc and calloc the "new" operator also returns pointer.
int main(){

    // int*p = new int;//request memory for int
    // *p = 4;
    // delete p;
    // cout<<"The value of a is :"<<*p<<endl;

    // int *p = new int(40);//request memory for int with value 40.
    // cout<<"The value of a is :"<<*p<<endl;

    int*arr = new int[5];//dynamic array of size of 5.
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 5;
    }
    // delete arr;
    for (int i = 0; i < 5; i++)
    {
        cout<<"The value of arr is : "<<arr[i]<<endl;
    }
    
return 0;
}   