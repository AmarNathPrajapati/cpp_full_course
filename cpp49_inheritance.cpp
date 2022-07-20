#include<iostream>
using namespace std;
/*
syntax for derived class---
    class derived_class_name:visibility-mode base_class
    visibility mode - public ,private and protected.
    default visibility mode is private mode.

    Imp point--->
        (i) We can't inherite private member of base class.
        (ii)Private visibility mode---> in this mode public member of base class becomes private member of derived class.
        (iii)Public visibility mode----> in this mode public member of base class becomes public member of derived class.
*/ 
class Employee{
    public:
        int id;
        Employee(){};
        int salary = 500;
        Employee(int idn){
            id = idn;
        }
};
class Programmer:public Employee{
    int langCode = 5;
    public:
        Programmer(int idn){
            id = idn;
        }
};
int main(){
    Employee Amar(1),Chandan(2);
    cout << Amar.salary<<endl;
    cout << Chandan.salary<<endl;
    Programmer Golu(3);
    cout<<Golu.salary<<endl;
    cout<<Golu.id<<endl;
    

return 0;
}