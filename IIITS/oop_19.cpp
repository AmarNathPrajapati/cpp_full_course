/**
 * pure virtual function-->
 *      1.which have only declartion in base class,
 *      2. return type will always void.
 *      3.class containing pure virtual function become abstract class.
 * syntax
 *      virtual void fucn_name () = 0;
 */
#include<iostream>
using namespace std;
class A {

    public:
        A(){
            
        }
        A(int a){
            cout<<"value of a is "<<a<<endl;
        }
        virtual void show() = 0;
};
class B : public A{
    public:
        
        B(){
            cout<<"in B"<<endl;
        }
        B(int a):A(a){

        }
        int a = 5;
        int b = 10;
};
class C: public B{
    public:
        int a= 20;
        int b=10;
        C(){
            cout<<"in C"<<endl;
        }
        void show(){
            cout<<"ab"<<endl;
        }
};
int main(){
    // B b1;
    C c;
    // C c1;
    // c1.show();
return 0;
}