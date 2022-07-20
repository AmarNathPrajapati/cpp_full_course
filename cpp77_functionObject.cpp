#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
/*
    function Object or functor-->
            function wrapped in class so that it available like an object.
            all function object are available in function in function object.
            eg. greater<int>()
*/
int main(){
    int arr[]={12,42,15,23,54};
    sort(arr,arr+3);// only three element will sort.
    sort(arr,arr+3,greater<int>());//here function object is used and sort in decreasing order.
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}