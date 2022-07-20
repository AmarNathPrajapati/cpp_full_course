#include<iostream>
using namespace std;
/*
    operator overloading-------->
        1.overloaded operator are function.
*/
class Myclass{
    public:
        int var;
        Myclass(){}
        Myclass(int a):var(a){}
        Myclass operator+(Myclass &obj){
            Myclass res;
            res.var = this->var+obj.var;
            return res;
        }
};
int main(){
    Myclass obj1(112),obj2(123);
    Myclass res = obj1 + obj2;
    cout<<res.var;
return 0;
}