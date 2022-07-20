#include<iostream>
using namespace std;
/*
    dynamic memory allocation---->
        1.using new keyword we can declare variable at the run time.
        2.it return address of memory allocation.
        3.pointer declartion consumes stack memory.
        4.pointer initialization consumes heap memory.
*/
int main(){
    int *p = new int;// request memeory and we provide size of int to the pointer
    *p= 5;
    cout << *p <<endl;
return 0;
}