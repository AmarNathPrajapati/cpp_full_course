#include<iostream>
using namespace std;
/*
    this keyword-->
        1.it is a pointer.
        2.it represent object which invoke a member fuction.
        3."this",provide only way to return object.
*/
class student{
    int roll_num;
    public:
        // void setRollNum(int roll_num){
        //     this->roll_num = roll_num;
        // }
        
        // return  a object
        student &setRollNum(int roll_num){
            this->roll_num = roll_num;
            return *this;
        }
        void getRollNum(){
            cout<<"The roll no. of the student is "<<roll_num<<endl;
        }
};
int main(){
    student Amar;
    Amar.setRollNum(1051).getRollNum();
    // Amar.getRollNum();
return 0;
}