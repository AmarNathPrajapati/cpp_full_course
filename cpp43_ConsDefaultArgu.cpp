#include<iostream>
using namespace std;
// constructor with default argument.
// always remember declare constant argument at extreme right.
class complex{
    int a,b;
    public:
        complex(int x , int y=9){//here by default value of y is 9
            a= x;
            b= y;
        }
    void printData(){
        cout << "The complex number is " << a<< " + "<<b<<"i"<<endl;
    }
};
int main(){

    complex c2(3);
    c2.printData();

return 0;
}