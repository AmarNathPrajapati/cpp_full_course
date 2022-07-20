#include<iostream>
using namespace std;
/*
    Derived datatypes in cpp
    1.Array
    2.Structure
    3.Union
    4.enum
*/
// we can use 'typedef' key word to provide special name to 'structure'.
// total memory required equal to sizeof all datatype defined in structure.
typedef struct employee
{
    int id;
    int salary;
    string name;

}ep;// total memory = sizeof(int) + sizeo(int) + sizeof(string)

int main(){
    struct employee chandan;
    chandan.id = 1;
    chandan.salary=100;
    chandan.name="Amar Nath";
    cout << "The id of chandan is " << chandan.id<<endl;
    cout << "The name of chandan is " << chandan.name<<endl;
    ep golu;
    golu.id = 2;
    golu.salary=10;
    cout << "The salary of golu is "<< golu.salary;
return 0;
}