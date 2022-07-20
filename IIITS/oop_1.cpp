#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int roll_no;
        int mark;
};
int main(){
    Student s;
    cout<<"Enter the name of the student: "<<endl;
    cin>>s.name;
    cout<<"Enter the roll_no of the student: "<<endl;
    cin>>s.roll_no;
    cout<<"Enter the mark of the student: "<<endl;
    cin>>s.mark;
    cout<<"The name of the student is "<<s.name<<"  , roll no of the student is "<<s.roll_no<<" and mark of the student is "<<s.mark<<endl;
return 0;
}