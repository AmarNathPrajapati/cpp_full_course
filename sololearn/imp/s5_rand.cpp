#include<iostream>
#include<cstdlib>
using namespace std;
/*
    to generate random number we used rand fucntion.
    To implement rand function , you have to include <cstdlib>header file.
*/
int main(){
    cout<<rand()<<endl;//it generate same number all time.
    for (int  i = 0; i < 10; i++)
    {
        cout<<rand()<<endl;//here rand function generate different random random.
    }
return 0;
}