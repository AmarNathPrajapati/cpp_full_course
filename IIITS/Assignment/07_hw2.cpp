#include<iostream>
using namespace std;
class Person{
    public:
        Person(){
            cout<<"I am Person"<<endl;
        }
        void identity(int id){
            cout<<"I am person with with id"<<id<<endl;
        }
        ~Person(){
            cout<<"Destructuring object of class person "<<endl;
        }
};
class Employee:public Person{
    public:
        Employee(){
            cout<<"I am an Employee"<<endl;
        }
        Employee(int id){
            cout<<"I am Employee with id "<<id<<endl;
        }
        void identity(int id){
            cout<<"I am person with with id"<<id<<endl;
        }
        ~Employee(){
            cout<<"Destructuring object of the class Employee"<<endl;
        }
};
class Programmer:public Employee{
    public:
        Programmer(){
            cout<<"I am rider, provider and also Programmer"<<endl;
        }
        void identity(int id){
            cout<<"I am person with with id"<<id<<endl;
        }

};
int main(){
    Person A; 
    Employee B;
    Employee B1(5);
    Programmer C;
    A.identity(101);
    B.identity(1001);
    C.identity(10001);
return 0;
}