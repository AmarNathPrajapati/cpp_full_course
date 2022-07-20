#include<iostream>
using namespace std;
/*
<< is called insertion operator 
>> is called extraction operator
*/
int main(){
    int m1,m2,m3,m4,m5,m6;
    cout<< "Enter the marks in Subject m1\n ";
    cin>>m1;
    cout<< "Enter the marks in Subject m2\n ";
    scanf("%d",&m2);
    cout<< "Enter the marks in Subject m3\n ";
    cin>>m3;
    cout<< "Enter the marks in Subject m4\n ";
    cin>>m4;
    cout<< "Enter the marks in Subject m5\n ";
    cin>>m5;
    cout<< "Enter the marks in Subject m6\n ";
    cin>>m6;
    float avg = (m1+m2+m3+m4+m5+m6)/6.0;
    cout<<"\n The percentage of your marks is "<<avg;

return 0;
}