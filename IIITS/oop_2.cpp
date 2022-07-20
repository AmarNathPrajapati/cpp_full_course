#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        Student(){
            cout<<"Unknown"<<endl;
        }
        Student(string str){
            name=str;
            cout<<"the name of the student is:  "<<name<<endl;
        }
};
int main(){
    string s;
    cout<<"Enter the name of the student: "<<endl;
    getline(cin,s);
    // Student A(s);
    if(s==""){
    Student a;
    }else{
    Student b(s);
    }
return 0;
}