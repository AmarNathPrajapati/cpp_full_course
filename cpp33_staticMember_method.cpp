#include<iostream>
using namespace std;
/*  ******static member**********
    1.here I want to declare a variable "which is same for all the object".
    because as we know "class ka har ek variable different class ke liye different value le sakta hai."
    so, solve this problem we use static variable.
    
    2.default value of static variable is always zero.
    3.static variable is shared by all object.
    4.lifetime of static variable -"till termination of the program"

    **********static method*************
    1.static member function only can access static member.
    2.static member ko value class ke bahar scope resolution operator ki help se assign kare.
*/
class Employee{
    int id;
    //int count; "using this count varible is not changing for different object"
    // now count is the static data member of the class employee.
    static int count;
    public:
        void setData(){
            cout << "Enter the id of employee "<<endl;
            cin  >> id;
            count++;
        }
        void getData(){
            cout << "The id of The "<< count << " Employee is " << id <<endl;
        }
        static void getCount(){
            //cout << id // throw an error.
            cout << "The value of the count is "<< count << endl;
            // cout<<"The employee id is "<<id<<endl;// error : due to id is not a static member.
        }
};
int Employee :: count;//Only here we can provide count's value , by default value is zero.
int main(){
    Employee Amar, Chandan, Golu;
    Amar.setData();
    Amar.getData();
    Employee::getCount();

    Chandan.setData();
    Chandan.getData();
    Employee::getCount();

    Golu.setData();
    Golu.getData();
    Employee::getCount();
return 0;
}