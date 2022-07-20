#include<iostream>
using namespace std;

class A{
    public:
        int x;
        static int y;// you have to use static keyword into only class.
        static void display(){// static function can access only static data member.
        cout<<"The value of the y is "<<y<<endl;
    }
};
int A::y = 10;// this is only method to assign value to the static variable.
// static data member share same variable to every objects.
int main(){
    A ob1 , ob2;
    ob1.display();
    cout<<ob1.y;
return 0;
}