#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        string course;
        string batch;
        int roll_no;
        int semester;
        void inputInfo(string name1, string course1, string batch1, int roll_no1,int sem){
            name = name1;
            course = course1;
            batch = batch1;
            roll_no = roll_no1;
            semester = sem;
        }
        void getInfo(){
            cout<<"The name of the student is "<<name<<endl
            <<"The course of the student is "<<course<<endl
            <<"The batch of the sudentt is "<<batch<<endl
            <<"roll number of the student is "<<roll_no<<endl
            <<"semester of the student is "<<semester<<endl;
        }
};
class Attendance : public Student{
    public:
        double totalTheory;
        double totalAttend;
        void inputAttendInfo(double theory , double attend){
            totalTheory = theory;
            totalAttend = attend;
            double per = totalAttend/totalTheory;
            cout<<"Total attendence's percentage is "<<(totalAttend/totalTheory)*100<<endl;
        }
};
class ExamCriteria : public Attendance{
    public:
        int attendPercentage;
        string status;
        void claDebStatus(double theory, double attend){
            totalAttend = theory;
            totalAttend = attend;
            attendPercentage = (totalAttend/totalTheory)*100;
            cout<<attendPercentage<<endl;
            if(attendPercentage<75){
                status = "debarred";
            }else{
                status = "notDebarred";
            }
        cout<<status;
        }
        void showAllDebRecord(){
            if(status == "debarred"){
                cout<<"";
            }else{
                cout<<"Not any debarred student"<<endl;
            }
        }  
        void showStudentRecord(){
            if(status == "notDebarred"){
                cout<<"Taylor is notDebarred"<<endl;
            }
        }
};
int main(){
    Student abc;
    abc.inputInfo("Taylor","CSE","First",1000,4);
    abc.getInfo();
    Attendance Taylor;
    Taylor.inputAttendInfo(50,40);
    ExamCriteria forTaylor;
    forTaylor.claDebStatus(50,40);
    forTaylor.showAllDebRecord();
    forTaylor.showStudentRecord();
return 0;
}