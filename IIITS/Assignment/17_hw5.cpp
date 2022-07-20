/**
 * find the sum of the all element of an array using function template 
 */
#include<iostream>
using namespace std;
template <class T>
void sum(T*arr,T size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    cout<<"The sum of the element is :"<<sum<<endl;
    
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element in the array:";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    sum(arr,size);
    
return 0;
}