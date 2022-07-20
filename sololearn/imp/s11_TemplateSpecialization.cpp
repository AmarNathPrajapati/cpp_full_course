#include<iostream>
using namespace std;

template <class T>
class Myclass{
    public:
        Myclass(T x){
            cout<<"not a char"<<endl;
        }
};
template < >
class Myclass<char>{
    public:
        Myclass(char x){
            cout<<"is a char"<<endl;
        }
};
int main(){
    Myclass<int>ob1(42);
    Myclass<double>ob2(42.24);
    Myclass<char>ob3('a');
return 0;
}