/**
 * write a program to concatenate two integers into one using friend function.
 */
#include<iostream>
using namespace std;

class IIITSonepat{
    public:
        friend void concate(int n); 
};

int concate(int n1,int n2){
    string s1 = to_string(n1);
    string s2 = to_string(n2); 
    string s= s1+s2;
    int n = stoi(s);
    return n;
}
int main(){
    cout<<"Enter the Two integer : ";
    int n1, n2;
    cin>>n1>>n2;
    cout<<"The concatinate number  for the given number is: "<<concate(n1,n2)<<endl;
return 0;
}