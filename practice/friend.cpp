#include<iostream>
using namespace std;
class B;//forward declaration
class A{
    int a,b;
    friend void getData(A,B);
    public:
        void setData(int a1 , int b1){
            a = a1;
            b = b1;
        }
};
class B{
    int a,b;
    friend void getData(A,B);
    public:
        void setData(int a1 , int b1){
            a = a1;
            b = b1;
        }
};
void getData(A o1 ,B o2 ){
    cout<<"The value of a in class A is "<<o1.a<<endl;
    cout<<"The value of b in class A is "<<o1.b<<endl;
    cout<<"The value of a in class B is "<<o2.a<<endl;
    cout<<"The value of b in class B is "<<o2.b<<endl;
}
int main(){
    A obj;
    B obj1;
    obj.setData(2,3);
    obj1.setData(4,5);
    getData(obj,obj1);
return 0;
}