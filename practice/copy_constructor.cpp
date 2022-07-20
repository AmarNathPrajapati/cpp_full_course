#include<iostream>
using namespace std;
class Robot{
    public:
        int id;
        Robot(int id){
            this->id = id;
            cout<<"The id of the robot is "<<id<<endl;
        }
        Robot(Robot &obj){
            cout<<"The id of the referenced object is "<<obj.id<<endl;
        }
};
int main(){
    Robot r(5);
    Robot r2(r);
return 0;
}