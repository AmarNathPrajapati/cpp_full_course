#include<iostream>
using namespace std;
/*
    friend class ka koi bhi function apne friend ka private data access kar sakta hai.
*/
// forward declaration
class complex;
class calculator{
    public:
        int sumComplex(complex ,complex);// here you can't declare function
        int sumImgComplex(complex ,complex);// here you can't declare function
};

class complex{
    int a;
    int b;
    public:
        // indivisually declaration function as friend function.
        friend int calculator::sumComplex(complex c1,complex c2); // here we declare calculator's function as friend friend of complex.
        friend int calculator::sumImgComplex(complex c1,complex c2); // here we declare calculator's function as friend friend of complex.

        // aliter: declaring the entire class calculator as friend
        friend class calculator;

        void setData(int v1,int v2){
            a = v1;
            b = v2;
        }
        void printData(){
            cout << "Complex number is " << a << " +i"<<b<< endl;
        }
};
int calculator::sumComplex(complex c1,complex c2){
    return (c1.a+c2.a);
}
int calculator::sumImgComplex(complex c1,complex c2){
    return (c1.b+c2.b);
}
int main(){
    complex c1 , c2;
    c1.setData(1,2);
    c2.setData(2,3);
    calculator sum;
    int a = sum.sumComplex(c1,c2);
    int b = sum.sumImgComplex(c1,c2);
    cout << "the sum of the realValue is "<< a <<endl;
    cout << "the sum of the ImgValue is "<< b <<endl;
    
return 0;
}