/**
 * Sort the element of an array using function template.
 * here Insertion sort is being used to sort an array.
 */
#include<iostream>
using namespace std;
template <class T>

void insertion_sort(T*arr,T size){
    cout<<"Insertion sort is running"<<endl;
    for (int j = 1; j < size; j++)
    {
        int key = arr[j];
        int i = j - 1;
        while (i>=0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
    
}
void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<"\n";
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
    cout<<"Before sorting"<<endl;
    print_array(arr,size);
    insertion_sort(arr,size);
    cout<<"After sorting"<<endl;
    print_array(arr,size);
return 0;
}