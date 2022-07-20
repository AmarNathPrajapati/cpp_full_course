#include<iostream>
using namespace std;

int main(){
    int a,b,ans=0;
    a =2;
    b = a*2;
    for (int i = 1; i <= 3; i++)
    {
        b*i;
        ans = ans+b;
    }
    cout<<ans;
return 0;
}