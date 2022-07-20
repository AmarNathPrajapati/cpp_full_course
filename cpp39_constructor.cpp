#include<iostream>
using namespace std;
/*
contstructor---------->

    1.is a special member function.
    2.name of constructor as same as class name.
    3.as soon as object is declare , constructor will be invoked.
    4.Constructor has not return type.
    
Constructor Characterstics----->
    1.It should be declare in the public section of the class.
    2.We can't refer their address.

Default constructor-------->
    constructor which not accept any parameter.
*/
class complex{
    int a,b;
    public:
        complex(void);
    void printData(){
        cout << "The complex number is " << a<< " + "<<b<<"i"<<endl;
    }
};
complex::complex(){
    cout<<"Constructor  called"<<endl;
    a=2;
    b=3;
}
int main(){
    complex c1 , c2, c3;
    // c1.printData();
    // c2.printData();
    // c3.printData();
return 0;
}