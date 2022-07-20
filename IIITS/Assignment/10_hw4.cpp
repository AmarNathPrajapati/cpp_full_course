/**
 * represent a number into sum of two prime numbers.
 */
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

class Prime{
    public:
        int n;
        Prime(int n1){
            n = n1;
        }
        friend void prime(Prime o1);

};
void prime(Prime o1){
        int x = 2;
        int y = o1.n;
        bool prime;
        vector<int> v;
        for (int i = x; i <= y; i++)
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
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    cout<<"Representing a number sum of two prime number:"<<endl;
    Prime A(n);
    prime(A);
return 0;
}   