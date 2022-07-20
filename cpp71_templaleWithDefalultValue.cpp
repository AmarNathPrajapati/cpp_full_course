#include<iostream>
using namespace std;

template <class t1 = int , class t2 = char ,class t3 = string>
class Employee{
    public:
        t1 a;
        t2 b;
        t3 c;
            Employee(t1 x , t2 y , t3 z):a(x),b(y),c(z){
                cout<<"The vlaue of a is "<<a<<endl;
                cout<<"The vlaue of b is "<<b<<endl;
                cout<<"The vlaue of c is "<<c<<endl;
            }
};
int main(){
    Employee<>Amar(11,'c',"Chandan");//use default value 
    Employee <char, int ,float>Golu('a',11,11.11);// set the data type to the template literals
return 0;
}