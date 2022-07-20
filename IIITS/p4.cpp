#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str = to_string(n);// converting into string
    int length = str.length();// getting lenght
    char* l =&str.at(length-1);// character at last
    int last = atoi(l);//conveting into int
    char ft = str.at(0);
    char* f = &ft;
    int first = atoi(f);
    cout<<"The sum of first and last digit is : "<<first+last<<endl;
return 0;
}   