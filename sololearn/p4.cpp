#include<iostream>
#include<string>
using namespace std;

int main(){
    // int palindrom;
    // cout<<"Enter the palindrome number : "<<endl;
    // cin>>palindrom;
    // string str = to_string(palindrom);
    // cout<<"The palindrome is "<<str<<endl;
    // int len = str.length();
    // cout<<"The lenght of string is "<<len<<endl;
    // int n = len/2;
    // bool p = false;
    // for (int i = 1; i <= n; i++)
    // {
    //     if(str.at(i-1)==str.at(len-1)){
    //         cout<<"this is palindorme "<<endl;
    //         p = true;
    //         len--;
    //     }else{
    //         cout<<"This is not a palindrome" <<endl;
    //         p=false;
    //     }
    // }
    // cout<<p<<endl;
    int palindrome;
    cin>>palindrome;
    string str = to_string(palindrome);
    int len = str.length();
    int n = len/2;
    bool p = false;
    for (int i = 1; i <= n; i++)
    {
        if(str.at(i-1)==str.at(len-1)){
            p = true;
            len--;
        }else{
            p=false;
        }
    }
    if(p==true){
        cout<<palindrome<<" is a palindrome "<<endl;
    }else{
        cout<<palindrome<<" is not a palindrom"<<endl;
    }
    cout<<p<<endl;
    
return 0;
}