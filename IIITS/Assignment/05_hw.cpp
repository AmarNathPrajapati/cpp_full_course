#include<iostream>
using namespace std;
class Shape{
    public:
        void func(){
            cout<<"This is a shape"<<endl;
        }
};
class Polygon:public Shape{
    public:
        void func(){
            cout<<"Polygon is a Shape"<<endl;
        }
};
class Rectangle:public Polygon{
    public:
        void func(){
            cout<<"Rectangle is a polygon"<<endl;
        }
};
class Triangle:public Polygon{
    public:
        void func(){
            cout<<"Triangle is a polygon"<<endl;
        }
};
class Square:public Rectangle{
    public:
        void func(){
            cout<<"Square is a rectangle"<<endl;
        }
};
int main(){
    Shape S;
    S.func();
    Polygon P;
    P.func();
    Rectangle R;
    R.func();
    Triangle T;
    T.func();
    Square Sq;
    Sq.func();
return 0;
}