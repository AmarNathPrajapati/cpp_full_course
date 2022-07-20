#include<iostream>
using namespace std;
/*
Single Inheritance
*/
class base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
};
void base::setData(){
    data1 = 10;
    data2 = 20;
}
int base::getData1(){
    return data1;
}
class derived : private base{
    int data3;
    public:
        void process();
        void display();
};
void derived :: process(){
    setData();
    data3 = data2 * getData1();
}
void derived :: display(){
    cout << "The value of data1 is " << getData1() <<endl;
    cout << "The value of data2 is " << data2 <<endl;
    cout << "The value of data2 is " << data3 <<endl;
}
int main(){
    derived d;
    // d.setData(); now this function is not accessible.
    d.process();
    d.display();
return 0;
}