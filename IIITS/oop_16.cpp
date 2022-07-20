#include<iostream>
using namespace std;
class Sum{
    public:
        int sum = 0;
        Sum(int n1, int n2){
            cout<<"Numbers divisible by 9 are: "<<endl;
            for (int i = n1; i <= n2; i++)
            {
                if(i%9==0){
                    cout<<i<<" ";
                    sum+=i;
                }
            }
        cout<<"sum of the numbers are: "<<sum<<endl;
        }
        ~Sum(){
            cout<<"Object Destroyed"<<endl;
        }
};
int main(){
    int n1,n2;
    cout<<"Enter the range : ";
    cin>>n1;
    cout<<"To ";
    cin>>n2;
    Sum A(n1,n2);
return 0;
}