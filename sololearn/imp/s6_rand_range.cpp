#include<iostream>
#include<cstdlib>
using namespace std;
/*
    random number between a to b is 
    in for loop (a+rand()(b-a));
*/
int main(){
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<(1+rand()%6)<<endl;//range of random function 1 to 6;
    // }
    for (int i = 0; i < 10; i++)
    {
        cout<<(1000+rand()%9000)<<endl;//range of random function 1 to 6;
    }
    
return 0;
}