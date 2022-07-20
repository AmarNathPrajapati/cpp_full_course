#include<iostream>
using namespace std;
// if we assign value in constructor then there is no need of default constructor.
class Test{
    private:
        int x,y;
    public:
        Test(int x = 1 , int y = 1 ){
            this->x = x;
            this->y = y;
            cout<<x<<" "<<y<<endl;
        }
        static void foo(){
            cout<<"Inside foo";
        }
};
int main(){
    Test obj;
    obj.foo();
return 0;
}