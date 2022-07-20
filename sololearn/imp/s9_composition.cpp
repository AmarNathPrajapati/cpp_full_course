#include<iostream>
using namespace std;
class Birthday{
    private:
        int day;
        int month;
        int year;
    public:
        Birthday(int a , int b, int c):day(a),month(b),year(c){
        }
        void printDay(){
            cout<<"Person's Date of birth is: "<<day<<'/'<<month<<'/'<<year<<endl;
        }
};
class Person{
    private:
        string name;
        Birthday bd; // here on object is a private member of an class.
    public:
        Person(string n , Birthday b):name(n),bd(b){}
        void printInfo(){
            cout<<"The name of the person is : "<<name<<endl;
            bd.printDay();
        }
    
};
int main(){
    Birthday bd(5,7,2002);
    Person p("Chandan",bd);
    p.printInfo();
return 0;
}