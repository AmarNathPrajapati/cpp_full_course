#include<iostream>
using namespace std;
class Student{
    public:
        int a;
        Student(int num){
            this->a = num;
        }
        void operator()(Student temp){
            cout<<this->a - temp.a<<endl;
        }
        void operator*(Student B){
            cout<<this->a + B.a<<endl;
        }
};
int main(){
    Student A(10);
    Student B(5);
    B(A);
    B*A;
return 0;
}