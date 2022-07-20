#include<iostream>
using namespace std;
// mulptiple inheritane
class Person{
    public:
        Person(){
            cout<<"I am Person"<<endl;
        }
};
class Employee{
    public:
        Employee(){
            cout<<"I am Employee"<<endl;
        }
};
class Programmer: public Person,public Employee{// left to right evaluation
    public:
        Programmer(){
            cout<<"I am Programmer"<<endl;
        }
};
int main(){
    Programmer xyz;
return 0;
}