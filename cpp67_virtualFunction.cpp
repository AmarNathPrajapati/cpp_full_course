#include<iostream>
using namespace std;
/*
    rules of virtual function--->
        1.they can't be static.
        2.they are accessed by obj pointer.
        3.virtual function can be friend of another class.
        4.A fuction in base class might not be used.
        5.if a virtual fuction is defined in base class,and there is no function in derived class, then virtual function of base class automatelly invoked.
        6.basically it provide method to access derived class by base class.
*/
class base{
    public:
        int a=10;
        virtual void display(){//means derived class ke display ko run karna,ye sab runtime par hoti hai.
            cout<<"The value of a is "<<a<<endl;
        }
};
class derived:public base{
    public:
        int b=20;
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};
int main(){
    base b;
    derived d;
    base *base_ptr;
    derived*derived_ptr;
    base_ptr = &d;// focus on
    // base_ptr = &b;// focus on
    base_ptr->display();
return 0;
}