/**
 * add two number using function template
 */
#include<iostream>
using namespace std;
template <class X, class Y>
void sum(X n1 , Y n2) {
    cout<<"The sum of given number is: "<<n1 + n2<<endl;
}
int main(){
    cout<<"Enter the two integer: "<<endl;
    int n1, n2;
    cin>>n1>>n2;
    cout<<"Enter the two floating value: "<<endl;
    double d1,d2;
    cin>>d1>>d2;
    sum(n1,n2);
    sum(n1,d1);
    sum(d1,n2);
    sum(d1,d2);
return 0;
}