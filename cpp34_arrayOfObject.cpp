// class -- ham ek naya custom datatype define kar dete hai.i.e. name of class act like int , float and other data type.
#include<iostream>
using namespace std;
// here I am going to use array of object
class Employee{
    int id;
    public:
        Employee(){
            cout<<"I am constructor of employee class"<<endl;
        }
        void setId(){
            cout << "Enter the Id " << endl;
            cin >> id;
        }
        void getId(){
            cout << "The id of the employee is " << id  << endl;
        }
};
int main(){
    Employee SN[5];
    for (int i = 0; i < 5; i++)
    {
        SN[i].setId();
        SN[i].getId();
    }
    
return 0;
}