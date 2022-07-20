#include<iostream>
using namespace std;
/*
    1. if base and derived class both have constructor then base class's constructor will invoked first.
    2. In the multiple inheritance order is matter.
    3. In multilevel inheritance A-------->B--------->C (constructor invoked A then B then C );
    4. Virtual base class's constructor  will always invoked first.
    5.order of excution is important.
*/
class Base1{
    int data1;
    public:
        Base1(int d){
            data1=d;
            cout<<"Base1 class constructor was called"<<endl;
        }
        void print_data1(){
            cout<< "The value of data1 is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int d){
            data2=d;
            cout<<"Base2 class constructor was called"<<endl;
        }
        void print_data2(){
            cout<< "The value of data2 is "<<data2<<endl;
        }
};
class derived: public Base1 , public Base2{
    int data3;
    public:
        derived(int a, int b,int c):Base1(a),Base2(b){
            data3 = c;
            cout<<"derived class constructor called"<<endl;
        }
        void print_data3(){
            cout<<"The vlaue of data3 is "<<data3<<endl;
        }
        
};
int main(){
    derived d(1,2,3);
    d.print_data1();
    d.print_data2();
    d.print_data3();
return 0;
}