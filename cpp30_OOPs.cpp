#include<iostream>
using namespace std;
// we has already studied about procedure oriented language.
/*
    why we can't use structure instead of classes
    1. Structures has not any method for data hiding.
    2. Structures doesn't provide any security for the data.
    3. Structures can't contain any method .
    4.if you want to only store data , use structure.
*/
// now we are going to learn oject oriented programming language 
class Employee{
    private:
        int salary , perOfSalGro;
    public:
        int id, houseNo;
        void set(int sal,int per); 
        void getData(){
            cout << "The salary of employee is " << salary<<endl;
            cout << "The perOfSalGro of employee is " << perOfSalGro<<endl;
            cout << "The id of employee is " << id<<endl;
            cout << "The houseNo of employee is " << houseNo<<endl;
        }
};
void Employee::set(int sal , int per){
    salary = sal;
    perOfSalGro = per;
}
int main(){
    Employee Chandan;
    Chandan.id=1;
    Chandan.houseNo=800;
    Chandan.set(100,10);
    Chandan.getData();
return 0;
}