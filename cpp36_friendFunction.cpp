#include<iostream>
using namespace std;
/*
    1.friend function can access private data of the class
    2.friend function class ka member function nahi hota hai.
    3.properties of friend function
        (i) can be invoked without the help of any object.
        (ii) usually contains the objects as argument.
        (iii) can be declare public and private section of the class
    4. syntax of friend fucntion
        friend return_type fucntion_name(fucntion's formal parameters);
    5. declaration of friend fucntion.
        delaration should be done outside of the class function without using :: operator.
        

*/
class complex{
    int a;
    int b;
    public:
        void setData(int v1,int v2){
            a = v1;
            b = v2;
        }
        friend complex sumComplex(complex c1, complex c2);//friend function
        void printData(){
            cout << "Complex number is " << a << " +i"<<b<< endl;
        }
};
complex sumComplex(complex  c1, complex c2){ // this syntax for only friend function
    complex c3;
    c3.setData((c1.a+c2.a),(c1.b+c2.b));
    return c3;
}
int main(){
    complex c1,c2,sum;
    c1.setData(1,2);
    c1.printData();

    c2.setData(5,6);
    c2.printData();
    //c2.sumComplex---------> not allowed

    sum = sumComplex(c1,c2);
    sum.printData();

return 0;
}