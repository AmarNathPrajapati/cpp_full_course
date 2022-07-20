#include<iostream>
using namespace std;

int main(){
    cout<< "tell me your age ";
    int age;
    cin>>age;
    if(age>18){
        cout << "you are allowed"<<endl;
    }else if(age==18){
        cout<< "Wait Babu"<<endl;
    }else{
        cout << "not allowed"<<endl;
    }
    switch (age)
    {
    case 18:
        cout << "wait Babu"<<endl;
    case 20:
        cout << "you are allowed"<<endl;
    default:
        cout << "What are you doing"<<endl;
        break;
    }
return 0;
}