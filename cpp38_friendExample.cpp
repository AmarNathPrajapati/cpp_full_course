#include<iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
        friend void sum (X,Y);
        void setData(int val){
            data = val;
        }
};

class Y{
    int value;
    public:
        friend void sum (X,Y);
        void setValue(int val){
            value = val;
        }
};

void sum(X o1,Y o2){
    cout<<"The sum of the values is "<< (o1.data + o2.value);
}
int main(){
    X o1;
    o1.setData(3);

    Y o2;
    o2.setValue(9);

    sum(o1,o2);
return 0;
}