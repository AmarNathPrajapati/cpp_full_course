#include<iostream>
using namespace std;

class Base{
    public:
        void display(){
            cout<<"I am base Class" <<endl;
        }
};
class Derived : public Base{
    public:
        void display(){
            cout<<"I am derived class"<<endl;
    
        }
};
int main(){
   Base b;
   b.display() ;
   Derived d;
   d.display();
return 0;
}