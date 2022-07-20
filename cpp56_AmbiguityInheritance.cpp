#include<iostream>
using namespace std;
/*
    what is ambiguity in inheritance?
       (i) if there is a function with same name in more than one base class , then which function will derive.
       (ii) if there is a function with same name in more than one base class and derived class ,then derive class's function will excute.
*/
class base1{
    public:
        void greet(){
            cout << "How are you?"<<endl;
        }
};
class base2{
    public:
        void greet(){
            cout << "How are you?"<<endl;
        }
};
class derived:public base1, public base2{
    //how to resolve this ambiguity
    public:
        void greet(){
            base1::greet();
        }
};
int main(){
    derived d;
    d.greet();
return 0;
}