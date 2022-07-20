#include<iostream>
using namespace std;
/*
copy constructor---------->
    1.it create a copy of another object.
    2.whenever copy constructor not found,compile ek default copy constructor har ek class ko allocate karta hai.
    3.parameter of copy constructor must be have reference operator.
*/
class num{
    int a;
    public:
        num(){
            a=0;
        };
        num(int x){
            a = x;
        }
        //copy constructor
        num(num &obj){
            cout <<"Copy Constructor"<<endl;
            a = obj.a;
        }
        void display(){
            cout << "The value of a is "<<a<<endl;
        }
};
int main(){
    num n1,n2,n3(12),n5;
    // n1.display();
    // n2.display();
    // n3.display();
    num n4(n3);
    n4.display();
    n5=n3;// by this copy constructor will not be invoked.
    n5.display();
    num n6 = n3; // copy constructor will invoked.
    n6.display();
return 0;
}