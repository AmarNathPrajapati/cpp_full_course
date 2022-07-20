#include<iostream>
using namespace std;
/*
    CLASS TEMPLATE WITH MULTIPLE PARAMETER
    why?
     because at a time template can acquire only one data type.
*/
template <class X , class Y , class Z>
class employee{
    public:
        X name;
        Y age;
        Z salary;
        employee(X a , Y b ,Z c):name(a),age(b){
            salary = c;
        }
        void getData(){
            cout<<"The name of the employee is "<<name<<" and the age of the employee is "<<age<<endl
            <<"The salary of the employee is "<<salary<<endl;
        }
};
int main(){
    employee <string ,int ,double> Chandan("Amar Nath",20,100.5);
    Chandan.getData();
return 0;
}