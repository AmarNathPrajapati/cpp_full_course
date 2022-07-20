#include<iostream>
using namespace std;
// pointers--> it points other variables i.e. it store address of other datatypes
// pointer to pointers -->it points other pointer i.e. it store address of other pointers.
int main(){
    int a  = 10;
    int *b = &a;
    cout << "The address of a is "<<&a<<endl;
    cout << "The address of a using b is "<<b<<endl;
    cout << "The value of a is "<<a<<endl;
    cout << "The value of a through b is "<<*b<<endl;
    int **c = &b;
    cout << "The address of b is "<<&b<<endl;
    cout << "The address of b is "<<c<<endl;
    cout << "The value of b is "<<b<<endl;// address of a
    cout << "The value of b is "<<*c<<endl;
    cout << "The value of b is "<<*b<<endl;//value of a
    cout << "The value of b is "<<**c<<endl;

return 0;
}