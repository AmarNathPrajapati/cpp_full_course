#include<iostream>
using namespace std;
// object will distroy only when there is no work of object.
class Cube{
    public:
        int x;
        Cube(int n){
            cout<<"The cube of the given number is "<<n*n*n<<endl;;
        }
        ~Cube(){
            cout<<"Cube of given Number has Calculated"<<endl;
        }
};
int main(){
    Cube A(5) ;
    A.x = 10;
    cout<<A.x;
return 0;
}