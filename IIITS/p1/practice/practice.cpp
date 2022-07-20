#include<iostream>
using namespace std;
//1. program for summation of 1+2!+3!+.....n 
/*2. program for following pattern
0
10
010
1010
01010
*/
//3. write a program to find given number prime or not.
//4. write a program to sum first and last integer of given number
int main(){
    /*
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int fact =1,sum = 0;
    for (int i = 1; i <=n; i++)
    {
        fact = fact*i;
        sum += fact;
    }
    cout<<"The factorial of the number is : "<<fact<<endl;
    cout<<"The required summation of the number is : "<<sum<<endl;/* program 1 is Completed*/

    /*
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {           
            if((i+j)%2==0){
                cout<<"0";
            }else{
                cout<<"1";
            }
        }
        cout<<endl;
    }/*Program 2 completed*/

/*
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;
    bool prime ;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            prime = false;
            break;//imp
        }else{
            prime = true;
        }
    }
    if(prime == true){
        cout<<"Prime number";
    }else{
        cout<<"Not a Prime number";
    }//program 3 is completed*/
    
    /*
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;
    int last = n%10;
    while(n>9){
        n = n/10;
    }
    int first = n;
    cout<<"The sum of first and last integer are: "<<first+last;// Program 4 completed */
    
return 0;
}