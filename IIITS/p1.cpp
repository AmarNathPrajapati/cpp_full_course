#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b>>c;
    int g = max(a,b);
    if(g>c){
        cout<<"The greatest integer is "<<g<<endl;
    }else{
        cout<<"The greatest integer is "<<c<<endl;
    }
return 0;
}