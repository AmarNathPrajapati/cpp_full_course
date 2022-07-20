//1. finc ASCII value of a character.
//2. Find all root of a quadratic equaction.
//3. Display Fibonacci number
//4. reverse a number using string method.
//5. Find the GCD number of the two number.
//6?. find the GCD of the given number.
//7. find LCM (lowest common multiplier) of two number.
//8. reverse a number using locgic
//9. important points
//10. display prime number between two integer.
//11. Display any number of sum of the two numbers.
//12. express a number by sum of two prime number.


#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

    /*
    void prime(int x, int y){// 12  25
        bool prime;
        for (int i = x; i <= y; i++)//i = 12
        {
            for (int j = 2; j < i; j++)
            {  
                if(i%j==0){//
                    prime = false;
                    break;
                }else{
                    prime = true;
                }
            }
                if(prime == true){
                    cout<<i<<" ";
                }
        }
        PROGRAM 10 COMPLETED
    }
    */

    void prime(int y , int x = 2){// 2
        bool prime;
        vector<int> v;
        for (int i = x; i <= y; i++)//i =2
        {
            if(i==2){
                // cout<<i<<" ";
            }
            for (int j = 2; j < i ; j++)
            {  
                if(i%j==0){//
                    prime = false;
                    break;
                }else{
                    prime = true;
                }
            }
                if(prime == true){
                    // cout<<i<<" ";
                    v.push_back(2);
                    v.push_back(i);
                }
        }
        for (int i = 0; i < v.size(); i++)
        {
            // 3 5 7 9 
            int diff = y - v[i];//9 7
            for (int j = i; j < v.size(); j++)//0 1
            {
                // cout<<v[j]<<" ";
                if(diff == v[j]){
                    cout<<y<<"="<<diff<<"+"<<y-v[j]<<endl;
                }
            }
            
            
        }
        
    }
    // PROGRAM 12 COMPLETED
    // */
    
int main(){
    /*
    char c;
    cout<< "Enter any character: ";
    cin>>c;
    printf("The ASCII value of the %c is %d.",c,c);  
    PROGRAM 1 COMPLETED
    Time complexity --> O(1)
    */
    /*
    int a,b,c;
    cout<<"Enter the value of a,b and c: ";
    cin>>a>>b>>c;
    float D;
    D = (pow(b,2)-(4*a*c));
    if(D<0){
        cout<<"Imaginary Root"<<endl;
    }else if(D==0){
        cout<<"Roots are equal"<<endl<<"Roots are "<<-(b/(2*a))<<"," <<-(b/(2*a))<<endl;   
    }else{
        cout<<"Roots are real"<<endl;
        int r1 = (-b+sqrt(D))/2;
        int r2 = (-b-sqrt(D))/2;
        cout<<"Roots are "<<r1 <<","<<r2<<endl;
    }
    PROGRAM 2 COMPLETED
    TIME COMPLEXITY - O(1);
    */
   /*
   int n;
   cout<<"Enter the lenght of the series : ";
   cin>>n;
   int a =1,b =1 ,next_term;
   //fibbonacci tn+1 = tn + tn-1;
   for (int i = 0; i < n; i++)
   {
        cout<<a<<" ";
        next_term = a + b;// getting next_term//2
        a=b;//1 
        b= next_term;// 2
   }
   PROGRAM 3 COMPLETED
   */
  /*
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  string str = to_string(n);
  reverse(str.begin(),str.end());
  cout<<str;
    PROGRAM 4 COMPLETED
  */
/*
 int a,b,gcd;
 cout<<"Enter the total number of the integer:";
 cin>>a>>b;
 for (int i = 1; i < max(a,b); i++)
 {
     if(a%i==0 && b%i==0){
         gcd = i;
     }
 }
 cout<<"The GCD of the numbers is : "<<gcd<<endl;
        PROGRAM 5 COMPLETED
 */
// int n,gcd;
// cout<<"Enter the total number of the integer: ";
// cin>>n;
// int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cout<<"Enter the "<<i+1<<" integer: ";
//     cin>>arr[i];
// }
// switch (n)
// {
// case 1:
//     gcd = arr[0];
//     break;
// case 2:
//     for (int i = 1; i <= arr[0]; i++)
//     {
//         if(arr[0]%i ==0 && arr[1] == 0){
//             gcd = i;
//         }
//     }
//     cout<<"The GCD of the numbers is : "<<gcd<<endl;
//     break;
// case 3:
//     for (int i = 1; i <= arr[0]; i++)
//     {
//         if(arr[0]%i ==0 && arr[1] == 0 && arr[2]==0){
//             gcd = i;
//         }
//     }
//     break;
// default:
//     break;
// }
/*
int a,b;
cin>>a>>b;
int n = max(a,b);
for (; n<100000000; n++)
{
    if(n%a==0 and n%b==0){
        cout<<"The LCM of "<<a<<" and "<<b<<" is "<<n;
        break;
    }
}
PROGRAM 7 COMPLETED
*/
/*    int n,remainder,reverseValue = 0;//123
    cout<<"Enter the value of the number: "<<endl;
    cin>>n;
    while(n!=0){
        // logic--> get last num and add that num such that next last num be last num of that num.
        remainder = n%10;//3-->2-->1
        reverseValue = reverseValue*10 + remainder;//3---> 30+2=32 --->320+1=321
        n=n/10;//12-->1
    }
    cout<<"The reverse value of the number is : "<<reverseValue<<endl;

PROGRAM 8 COMPLETED.
*/
/*  int a = 2;
    int *s = &a;
    printf("%u\n",s);// print unsigned value
    printf("%p\n",s);// print pointer value (full hexadecimal value) .it can be differ depending upon the complier.
    printf("%x\n",s);// print hexadecimal value
    cout<<s<<endl;
*/
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    prime(n);
return 0;
}   