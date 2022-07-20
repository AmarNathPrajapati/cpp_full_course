#include<iostream>
using namespace std;
class Car;// forward declarition
class Automobile{
    public:
        bool running;
        void run(Car);
};
class Car{
    public:
        string name;
        friend void friendFunc(Car);
        friend void Automobile::run(Car);
};
void run(Car c){
    cout<<"The car is running";
}
void friendFunc(Car c){
    cout<<"The name of the car is "<<c.name<<endl;
}
int main(){
    Car c;
    c.name = "Inova";
    friendFunc(c);
    run(c);
return 0;
}