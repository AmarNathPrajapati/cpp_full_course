#include<iostream>
using namespace std;
/*
multilevel inheritance------->
    eg.A------------>B-------------->C this is called inheritance path.
    1. A is the base class of B and B is the base class of C.
*/
class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number();
};
void student::set_roll_number(int r){
    roll_number = r;
}
void  student::get_roll_number(){
    cout << "The roll number of the student is " << roll_number << endl;
}

class exam :public student{
    protected:
        float math;
        float physics;
    public:
        void set_marks(float ,float );
        void get_marks();
};
void exam::set_marks(float m1,float m2){
    math = m1;
    physics = m2;
}
void exam::get_marks(){
    cout << "The marks in Math are "<<math<<endl;
    cout << "The marks in Physics are "<<physics<<endl;
}

class result:public exam{
    protected:
        float percentage;
    public:
        void display();
};
void result::display(){
    get_roll_number();
    get_marks();
    cout<< "Your percentage is "<<(math+physics)/2<<"%"<<endl;
}
int main(){
    result Amar;
    Amar.set_roll_number(3273607);
    Amar.set_marks(97,89);
    Amar.display();
return 0;
}