#include<iostream>
using namespace std;
/*
    auto keyword---->
        using auto keyword you have to initialized variable at the time of declaration.
*/
int main(){
    auto a = 10;
    cout<< "The size of a is "<< sizeof(a)<<endl;
    auto b = 'c';
    cout << "The size of b is "<< sizeof(b)<<endl;
    auto c= true;
    cout << "The size of c is "<< sizeof(c)<<endl;
    auto d=23.121;
    cout << "The size of d is "<< sizeof(d)<<endl;
    auto e = "Chandan";
    cout << "The size of e is "<< sizeof(e)<<endl;
return 0;
}