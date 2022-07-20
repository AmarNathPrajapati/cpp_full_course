#include<iostream>
using namespace std;
class Person{
    public:
        Person(){
            cout<<"I am Person"<<endl;
        }
        ~Person(){
            cout<<"Person destroyed"<<endl;
        }
};
class Employee:public Person{
    public:
        Employee(){
            cout<<"I am Employee"<<endl;
        }
        ~Employee(){
            cout<<"Employee destroyed"<<endl;
        }
};
class Programmer: public Employee{// left to right evaluation
    public:
        Programmer(){
            cout<<"I am Programmer"<<endl;
        }
        ~Programmer(){
            cout<<"Programmer destroyed"<<endl;
        }
};
int main(){
    Programmer xyz;
return 0;
}