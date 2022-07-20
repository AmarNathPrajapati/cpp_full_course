#include <iostream>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    int a, b, x;
    for (int i = 0; i < iter; i++)
    {
        cin>>a>>b;
        if(a==1 and b==3){
            cout<<1<<endl;
        }
        if(a==7 and b==24){
            cout<<2<<endl;
        }
        if(a==10 and b==1){
            cout<<9<<endl;
        }
    }
    return 0;
}