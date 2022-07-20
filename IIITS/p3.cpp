#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    bool prime;
    cin>>n;
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0){
            prime = false;
            break;
        }else{
            prime = true;
        }
    }
    if(prime == false){
        cout<<"not prime";
    }else{
        cout<<"prime";
    }
    
return 0;
}