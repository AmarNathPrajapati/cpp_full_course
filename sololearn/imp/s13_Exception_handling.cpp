#include<iostream>
using namespace std;
// to catch any type of exception ,use catch(...){}
int main(){
    try{
        int x,y;
        cout<<"Enter a number:"<<endl;
        cin>>x;
        cout<<"Enter another number"<<endl;
        cin>>y;
        if(y==0){
            throw 0;
        }
        cout<<"The vlaue of x/y is :"<<x/y<<endl;
    }catch(int x){
        cout<<"division by "<<x<<" is not define"<<endl;
    }
return 0;
}   