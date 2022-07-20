#include<iostream>
using namespace std;
/*
template is a template for class, vaise hee jaise class is template for object.
    1. Sometimes template is known as "parameterized Class".
why template?
    1.Dry Principle must be implement in the code.
    2.for generic programming.
    3.Hamne ek data type ko pass kar diya hai.
    4.Template wali class is equivalent to many class.
*/
template <class T>
class vector{
    public:
        int size;
        T *arr;
        vector(int n){
            size = n;
            arr = new T[size];
        }
        T dotProduct(vector &v){
            T d=0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i]*v.arr[i];
            }
            return d;
        }
};
int main(){
    // vector v1(3);
    // v1.arr[0] = 1;
    // v1.arr[1] = 2;
    // v1.arr[2] = 3;
    // vector v2(3);
    // v2.arr[0]= 1;
    // v2.arr[1]= 0;
    // v2.arr[2]= 2;
    // cout<<"The dot product of two vector is "<<v1.dotProduct(v2)<<endl;
    vector<float> v1(3);
    v1.arr[0] = 1.5;
    v1.arr[1] = 2.8;
    v1.arr[2] = 3.2;
    vector<float> v2(3);
    v2.arr[0]= 1.4;
    v2.arr[1]= 0;
    v2.arr[2]= 2.5;
    cout<<"The dot product of two vector is "<<v1.dotProduct(v2)<<endl;
return 0;
}