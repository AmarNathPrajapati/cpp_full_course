#include<iostream>
using namespace std;
/*
    there are three types loop in cpp
        while loop
        for loop
        do-while loop
*/
int main(){
    // int a = 1;
    // do{
    //     cout<< " I was angry before ";
    // }while(a>10);
    int num;
    cout<< "write number whose table you want ";
    cin>> num;
    int j = 1;
    for (int i = 1; i <= 10 ; i++)
    {
        cout <<num<< "X" <<i<< "="<<num*i<<endl;
    }
    
    

return 0;
}