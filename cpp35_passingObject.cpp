#include<iostream>
using namespace std;
// basically we can say an object is an user-defined data type and we can easily use like other data type .
class complex{
    int a;
    int b;
    public:
        void setData(int v1,int v2){
            a = v1;
            b = v2;
        }
        void setDataBySum(complex c1 , complex c2){// here we are passing a object.
            a = c1.a + c2.a;
            b = c1.b + c2.b;
        }
        void printData(){
            cout << "Complex number is " << a << " +i"<<b<< endl;
        }
};
int main(){
    complex c1,c2,c3;
    c1.setData(1,2);
    // c1.printData();

    c2.setData(5,6);
    // c2.printData();

    c3.setDataBySum(c1,c2);// passing an object.
    c3.printData();
return 0;
}