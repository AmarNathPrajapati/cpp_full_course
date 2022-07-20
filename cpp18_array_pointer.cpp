#include<iostream>
using namespace std;
// array pointer --> pointer which points an array i.e. which store the address of array
int main(){
    int arr[]= {2,4,5,6,3};
    int *p = arr;// not required & operator.
    cout << "The value of P is "<<p<<endl;
    cout << "The vlaue of arr is "<<arr<<endl;
    // array traversal using pointer
    //pointer arithmatic--> pointer+1 = address + sizeof(datatype)
    for (int i = 0; i < 5; i++)
    {
        cout << "The value of marks using pointer is " <<*(p+i)<<endl;
    }
    
return 0;
}