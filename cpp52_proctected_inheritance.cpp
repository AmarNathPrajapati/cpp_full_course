#include<iostream>
using namespace std;
/*
proctected members----->
    base class me private rahe and inherite bhee  ho jaye.

very importent concept of inheritance-------->

                            public derivation          private derivation       protected derivation
    1.private members       not inherited              not inherited            not inherited
    2.protected members     protected                  private                  protected
    3.public members        public                     private                  protected

*/
class base{
    protected:
        int a=10;
    private:
        int b;
};
class derived : protected base{
    public:
        void  getA(){
            cout << "The value of  a is "<< a <<endl;
        }
};
int main(){
    derived d;
    d.getA();
return 0;
}