#include<iostream>
using namespace std;
/*
    pointer to derived class----->
        1. pointer of base class can point derived class.
*/
class base{
    public:
        int a;
        void display(){
            cout<<"The value of a is "<<a<<endl;
        }
};
class derived:public base{
    public:
        int b;
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
    // base_ptr->a = 10;
    // base_ptr->display();
    // derived_ptr = &b;//you can't assign address of base class to derived class pointer.
    
    derived_ptr->a = 10;
    derived_ptr->b=20;
    derived_ptr->display();
return 0;
}