#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int ages[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> ages[i];
    }
    int totalRs = 50;
    // to find youngest age 
    int a= min(ages[0],ages[1]);
    int b= min(a,ages[2]);
    int c= min(b,ages[3]);
    float youngest = min(c,ages[4]);
    cout<<"The younges person's age is "<<youngest<<endl;
    float discount = (50*youngest)/100;
    cout<<"the discount is "<<discount<<endl;
    cout<<totalRs-discount<<endl;

    
return 0;
}   