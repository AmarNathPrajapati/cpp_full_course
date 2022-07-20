/**
 * abstract class-
 *      it must have a pure virtual fucntion.
 *      it's object is not possible.
 *  pure virtaul function
 *      1. it's return type always be void.
 *      2. syntax :
 *         virtual void func_name () = 0;
 *  child class of abstract class
 *      1.child class should be have definition of pure virtual function.
 *      2.if child class have not definition of pure virtual function it will become an abstract class.
 * Constructor of abstract class
 *      1.parameterized or default constructor invoke through inherite class
 *      2.syntax:
 *          derived_class(int i, int j): base(i)
 */
#include<iostream>
using namespace std;
class Person{
    public:
        Person(int a){
            cout<<"I am Person"<<endl;
            cout<<"The value of a is "<<a<<endl;
        }
        virtual void show() = 0;
        void display(){
            cout<<"in Person"<<endl;
        }
};
class Employee:public Person{
    public:
        Employee(int a):Person(a){
            cout<<"I am Employee"<<endl;
            cout<<"a is :"<<a <<endl;
        }
        void show(){
            cout<<"I am rider,provider"<<endl;
        }
};
class Programmer: public Employee{// left to right evaluation
    public:
        Programmer(int a):Employee(a){
            cout<<"I am Programmer"<<endl;
        }
        void show(){
            cout<<"I am coder,programmer"<<endl;
        }
};
int main(){
    // Employee emp(5);
    // emp.display();
    // emp.show();
    Programmer pr(5);
return 0;
}