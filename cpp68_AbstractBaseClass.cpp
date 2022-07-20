#include<iostream>
using namespace std;
/*
Abstract base class and pure virtual function are inter-related.
    1.There must be a pure virtual function in abstract base class.
    2.there is no object of abstract class.
    
pure virtual fuction--->
    abstract class ka esa function ,jisko derived class me banana hee pade.

syntax of pure virtual function--->
    virtual void func_name() = 0; it is also called "do nothing function"
*/
class car{
    protected:
        int id;
        int price;
    public:
        virtual void musicSystem()=0;// now car become an abstract class
        virtual void radioSystem()=0;
        void run(){
            cout<<"Your car is running"<<endl;
        }

       virtual ~car(){
           cout<<"I am virtual destructor"<<endl;
       }
};
class Tesla_Car:public car{
    public:
        void musicSystem(){//if Tesla_car doesn't provide definiton of pureVirtual function, then it also become an abstract class.
            cout<<"Your music system is on"<<endl;
        }
        void radioSystem(){
            cout<<"your radio system is on"<<endl;
        }
};
int main(){
    Tesla_Car A;
    A.musicSystem();
    A.radioSystem();
    A.run();

return 0;
}