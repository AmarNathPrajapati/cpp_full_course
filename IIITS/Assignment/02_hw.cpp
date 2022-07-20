#include<iostream>
using namespace std;

class Rectangle{
    int l,b,area;
    public:
        Rectangle(){
            l=0;
            b=0;
           
        }
        Rectangle(int x){
            l=x;
            b=x;
           
        }
        Rectangle(int x ,int y){
            l=x;
            b=y;
           
        }
        int calcArea(){
            area = l*b;
            return area;
        }
        
};
int main(){
    int a,b;
    cout<<"Enter the length and breath of the rectangle: ";
    cin>>a>>b;
    Rectangle A;
    Rectangle B(a);
    Rectangle C(a,b);
    cout<<"The area of Rectangle A of lenght 0 is: "<<A.calcArea()<<endl;
    cout<<"The area of square B is: "<<B.calcArea()<<endl;
    cout<<"The area of Rectangle C is: "<<C.calcArea()<<endl;
return 0;
}