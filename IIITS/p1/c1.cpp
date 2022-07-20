#include<iostream>
using namespace std;

int reverse(int n){
    while(n!=0){
        int remainder,reverseValue;
        // logic--> get last num and add that num such that next last num be last num of that num.
        remainder = n%10;//3-->2-->1
        reverseValue = reverseValue*10 + remainder;//3---> 30+2=32 --->320+1=321
        n=n/10;//12-->1
        return reverseValue;
    }
}
int main(){
    int n,remainder,reverseValue = 0;//123
    cout<<"Enter the value of the number: "<<endl;
    cin>>n;
    int rev = reverse(n);
    cout<<"The reverse value of the number is : "<<rev<<endl;
return 0;
}