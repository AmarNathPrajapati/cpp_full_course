#include<iostream>
using namespace std;

int main(){
    int no_passengers;
    cout<<"Enter the no. of the passengers on plateform "<<endl;
    cin>>no_passengers;
    // int time = no_passengers/50;
    // for (int i = 0; i < time; i++)
    // {
    //     no_passengers -=50;
    // }
    cout<<"The no. of vacant seats in last bus is "<<50-no_passengers%50<<endl;

    
return 0;
}   