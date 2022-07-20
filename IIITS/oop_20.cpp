#include<iostream>
using namespace std;

class Shape{
    public:
        virtual void draw(){
            cout<<"In shape"<<endl;
        }
};
class Circle:public Shape{
    public:
        void draw(){
            cout<<"In circle"<<endl;
        }
};
class Square:public Shape{
    public:
        void draw(){
            cout<<"In square"<<endl;
        }
};
class Triangle:public Shape{
    public:
        void draw(){
            cout<<"In triangle"<<endl;
        }
};
int main(){

    Shape *s[4];
    Shape s1;
    Circle c;
    Square sq;
    Triangle t;
    s[0] = &s1;
    s[1] = &c;
    s[2] = &sq;
    s[3] = &t;
    for (int i = 0; i < 4; i++)
    {
        s[i]->draw();
    }
    
    
    
return 0;
}