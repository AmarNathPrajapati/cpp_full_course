#include<iostream>
using namespace std;

class Area{
    float l,b;
    public:
        void calcArea(float x, float y){
            l=x;
            b=y;
            cout<<"The area of the rectangle is : "<<l*b<<endl;
        }
        void calcArea(float x){
            l=x;
            b =x;
            cout<<"The area of the square is "<<l*b<<endl;
        }

};
int main(){
    float a,b;
    cout<<"Enter the value of length and breath :"<<endl;
    cin>>a,b;
    Area rect;
    rect.calcArea(a,b);
    Area sq;
    sq.calcArea(a);
return 0;
}