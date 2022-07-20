#include<iostream>
using namespace std;

int main(){

        int a,b ;
        cout<<"Enter the number for a/b: ";
        cin>>a>>b;
    try{
        // int motherAge = 39;
        // int chileAge = 40;
        // if(chileAge>motherAge){
        //     throw 10;
        int res = a/b;
        cout<<res<<endl;
        }
    catch(e)
    {
        cout<<"wrong statement ";
    }
return 0;
}   