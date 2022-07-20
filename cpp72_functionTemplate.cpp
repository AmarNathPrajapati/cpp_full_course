#include<iostream>
using namespace std;
// by default exact match is always preffered.
float avg(int a, float b){
    float average = (a+b)/2.0;
    cout<<"The regular is called"<<endl;
    return average;
}
template <class T , class U>
//template<class Z> in cpp only one template declaration is possible.

float avg(T a, U b){
    float average = (a+b)/2.0;
    cout<<"The parameterized fucntion is called"<<endl;
    return average;
}
int main(){
    // int x = 4,y = 5;
    int x = 4; float y = 5.6;
    cout<<"The average of "<<x << " and "<<y << " is "<<avg(x,y);
return 0;
}