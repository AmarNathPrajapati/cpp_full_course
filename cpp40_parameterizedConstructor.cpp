#include<iostream>
using namespace std;
/*
parameterized constructor-------->
    1.it accept parameter.
There are mainly two method for passing argument to parameterized constructor.
    1.implict call.
    2.explict call.
*/
class complex{
    int a,b;
    public:
        complex(int , int );
    void printData(){
        cout << "The complex number is " << a<< " + "<<b<<"i"<<endl;
    }
};
complex::complex(int x , int y){
    a=x;
    b=y;
}
int main(){
    //inplict call
    complex c(1,2);
    c.printData();
    //explict call
    complex c1 = complex(2,3);
    c1.printData();

return 0;
}