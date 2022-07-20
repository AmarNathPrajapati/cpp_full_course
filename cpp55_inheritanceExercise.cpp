#include<iostream>
#include<math.h>
using namespace std;

class simpleCalculator{
    protected:
        float a,b;
    public:
        void giveTwoNum(){
            cout<< "Enter the two numbers "<<endl;
            cin>>a>>b;
        }
        void sum(){
           cout<<"The sum of given two numbers is "<<a+b<<endl;
        }
        void sub(){
           cout<<"The subtraction of given two numbers is "<<a-b<<endl;
        }
        void mul(){
           cout<<"The multiplication of given two numbers is "<<a*b<<endl;
        }
        void div(){
           cout<<"The division of given two numbers is "<<a/b<<endl;
        }
};
class scientificCalculator:public simpleCalculator{
    public:
        void power(){
            cout<<"The a to the power b is "<<pow(a,b)<<endl;
        }
        void sina(){
            cout<<"The sin(a) is " <<sin(a)<<endl;
        }
        void cosa(){
            cout<<"The cos(a) is "<<cos(a)<<endl;
        }
        void maximum(){
            cout<<"The max between a and b is "<<max(a,b);
        }
};
int main(){
    scientificCalculator calc;
    calc.giveTwoNum();
    calc.sum();
    calc.sub();
    calc.mul();
    calc.div();
    calc.power();
    calc.sina();
    calc.cosa();
    calc.maximum();
return 0;
}