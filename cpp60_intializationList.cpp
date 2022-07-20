#include<iostream>
using namespace std;
/*
    1.main use of member initialization operator to assign value a constant variable.
    2.jo variable pahale declare hota hai, vo pahle intialize hoti hail
*/
class Text{
    int const a;
    int b;
    public:
        // Text(int i, int j):a(i),b(j)
        // Text(int i, int j):a(i),b(a+j)
        // Text(int i, int j):b(j),a(i)
        Text(int i, int j):a(i)
        // Text(int i, int j):b(j),a(i+b)//////// desired o/p is not shown
        {
            b=j;
            cout<<"The vlaue of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }

};
int main(){
    Text(2,3);
return 0;
}