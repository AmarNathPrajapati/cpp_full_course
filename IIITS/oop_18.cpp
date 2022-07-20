#include<iostream>
using namespace std;
// difference between  late and early binding.
class A{
    public:
        void show(){// late binding --  at run time
            cout<<"A's show is running"<<endl;
        }
};
class B:public A{
    public:
        void show(){
            cout<<"B's show is running"<<endl;
        }
};
class C:public B{
    public:
        void show(){
            cout<<"C's show is running"<<endl;
        }
};
int main(){
    A a;
    B b;
    C c;
    a.show();
    b.show();
    c.show();
    // A *pa;
    // B *pb;
    // C *pc;
    // pb = &a;
    pa = &a;
    pa->show();// early binding
    pa = &b;
    pa->show();
    pa = &c;
    pa->show();

return 0;
}