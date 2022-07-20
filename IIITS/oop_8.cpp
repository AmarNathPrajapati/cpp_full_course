#include<iostream>
using namespace std;
class Circle{
    private:
        double radius = 1.0;
        string color = "red";
    public:
        Circle(){};
        Circle(double r){
            radius = r;
        }
        double getRadius(){
            return radius;
        }
        double getArea(){
            return 3.14*radius*radius;
        }
};
int main(){
    Circle A;
    Circle C(5);
    cout<<"radius of the circle is "<<A.getRadius()<<endl;
    cout<<"area of the circle is "<<A.getArea()<<endl;
    cout<<"radius of the circle is "<<C.getRadius()<<endl;
    cout<<"area of the circle is "<<C.getArea()<<endl;
return 0;
}