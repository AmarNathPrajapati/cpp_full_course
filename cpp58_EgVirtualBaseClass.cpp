#include<iostream>
using namespace std;
/*
                            Test--------------->
    student--------------->                     >>>>>>>>>>>Result
                            Score-------------->
*/
class Student{
    protected:
        int roll_num;
    public:
        void set_roll_num(int a){
            roll_num = a;
        }
        void get_roll_num(){
            cout<<"Roll No. of the student is "<<roll_num<<endl;
        }
};
class Test:virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1 ,float m2){
            maths = m1;
            physics = m2;
        }
        void get_marks(){
            cout<<"The marks in Mathematics are "<<maths<<endl;
            cout<<"The marks in physics are "<<physics<<endl;
        }
};
class Sport:virtual public Student{
    protected:
        float score;
    public:
        void set_score(float s){
            score=s;
        }
        void get_score(){
            cout<<"Your Score in the Sport are "<<score<<endl;
        }
};
class Result:public Test,public Sport{
    protected:
        float total;
    public:
        void display(){
            get_roll_num();
            get_marks();
            get_score();
            cout<<"The total number is : "<<maths+physics+score<<endl;
        }
};
int main(){
    Result Amar;
    Amar.set_roll_num(1051);
    Amar.set_marks(98.0,96.0);
    Amar.set_score(8.5);
    Amar.display();
return 0;
}