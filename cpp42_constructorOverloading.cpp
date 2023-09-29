#include<iostream>
using namespace std;
/*
constructor Overloading---->
    1.More than one constructor can be possible in a class.
*/
class complex{
    int a=0,b=0;
    public:
        complex(int x , int y){
            a= x;
            b= y;
        }
        complex(int x){
            a=x; // by default the vlaue of b is zero.
        }
        complex (){};// default constructor.
    void printData(){
        cout << "The complex number is " << a<< " + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1(1,2);
    c1.printData();

    complex c2(3);
    c2.printData();

    complex c3;
    c3.printData();
return 0;
}