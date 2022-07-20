#include<iostream>
using namespace std;

class Student{
    private:
        string name , address;
        int age;
    public:
        Student() {
            name = "unknown";
            address ="not available";
            age = 0;
        }
    void setInfo (string name1, int age1){
        name = name1;
        age = age1;
    }
    void setInfo (string name1 , string address1,  int age1 ){
        name = name1;
        age = age1;
        address = address1;
    }
    void getData (){
        cout<< "The name of the student is "<< name<<" and the age of the student is "<<age<<" and the address of the student is "<<address <<endl;
    }
};
int main(){
    Student abc;
    string name,address;
    int age;
    cout<<"Enter the name  address  and age of the student  "<<endl;
    cin>>name>>address>>age;
    abc.setInfo(name,address,age);
    abc.getData();
    abc.setInfo("abcd","mars",10);
    abc.getData();

return 0;
}