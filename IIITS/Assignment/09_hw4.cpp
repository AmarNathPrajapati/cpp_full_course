/**
 * Decimal to binary
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
class DecimalToBinary{
    public:
        int n;
        DecimalToBinary(int n1){
            n = n1;
        }
        friend void decimalToBinary(DecimalToBinary o1);
};
void decimalToBinary(DecimalToBinary o1){
    int decimal = o1.n;
    while (decimal)
    {
        if(decimal%2==0){
            v.push_back(0);
            decimal/=2;
        }else{
            v.push_back(1);
            decimal/=2;
        }  
    }
    reverse(v.begin(),v.end());
    vector<int>:: iterator iter = v.begin();
    for (int i = 0; i < v.size(); i++)
    {
        cout<<*(iter+i);
    }
}
int main(){
    int n;
    cout<<"Enter The Decimal number: "<<endl;
    cin>>n;
    DecimalToBinary A(n);
    decimalToBinary(A);
return 0;
}