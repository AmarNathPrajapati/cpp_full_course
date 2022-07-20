#include<iostream>
using namespace std;
class employee{
    int id,salary;
    public:
        void setData(int a , int b){
            id = a;
            salary = b;
        }
        void getDate(){
            cout<<"The id of the employee is: "<<id<<endl;
            cout<<"The salary of the employee is: "<<salary<<endl;
        }
};
int main(){
    // employee chandan;-----> normal object
    employee*chandan = new employee;//dynamic object
    chandan->setData(1,100);
    // delete chandan;
    chandan->getDate();

    employee*ptr = new employee[3];//request memory for 3 object of employee
    ptr[0].setData(2,200);
    ptr[0].getDate();
    delete []ptr;// delete all objects
return 0;
}