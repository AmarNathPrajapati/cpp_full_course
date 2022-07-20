#include<iostream>
using namespace std;
//call by value
// void swap(int a , int b){
//     int temp = a;
//     a=b;
//     b=temp;
//     cout << "The value of a and b is " << a << " and " << b << endl;
// }
//call by reference using pointer
// void swap(int *a , int *b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }
// call by reference using reference variable
// void swap(int &a , int &b){
//     int temp = a;
//     a=b;
//     b=temp;
// }
// return reference variable
void swap(int &a , int &b){
    int temp = a;
    a=b;
    b=temp;
}

int main(){
    int a =10 , b=5;
    cout << "The value of a and b is " << a << " and " << b << endl;
    swap(a,b);
    cout << "The value of a and b is " << a << " and " << b << endl;
return 0;
}