#include<iostream>
using namespace std;
class Person{
    public:
        int x;
        static int y;
        void printDate(){
            cout<<"The value of the x and y is "<< x <<" and "<<y;
        }
};
int Person::y=10;
int main(){
    Person xyz;
    xyz.x=10;
    xyz.y=20;
    xyz.printDate();
return 0;
}