#include<iostream>
using namespace std;

int main(){
    int *p = NULL;
    p= new int[20];//request memory for 20 size of int.
    for (int i = 0; i < 20; i++)
    {
        p[i] = i;
        cout << "The value of p" <<i <<" is "<<p[i]<<endl;
    }
    delete []p;
return 0;
}