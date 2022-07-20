#include<iostream>
using namespace std;
/* fuction --> this help to follow DRY principle
    DRY- Do Not repeat yourself
*/
// function prototype- return_type   function_name(formal parameters with their type)
int sum(int a, int b);
int main(){
    int num1 = 10, num2 = 20;
    cout << "The sum of num1 and num2 is "<< sum(num1, num2);// here num1 and num2 are argument , argument are actual parameter.
return 0;
}
int sum (int a , int b){
    int c = a + b;
    return c;
}