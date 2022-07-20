/**
 * Write a program to enter a number and print it into words using Friend function.
 */
#include<iostream>
using namespace std;
class IIITSonepat{
    public:
        friend void required(int n);
};
void required(int n){
    string s1 = to_string(n);
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1.at(i)=='0'){
            cout<<"zero ";
        }
        if(s1.at(i)=='1'){
            cout<<"one ";
        }
        if(s1.at(i)=='2'){
            cout<<"two ";
        }
        if(s1.at(i)=='3'){
            cout<<"three ";
        }
        if(s1.at(i)=='4'){
            cout<<"four ";
        }
        if(s1.at(i)=='5'){
            cout<<"five ";
        }
        if(s1.at(i)=='6'){
            cout<<"six ";
        }
        if(s1.at(i)=='7'){
            cout<<"seven ";
        }
        if(s1.at(i)=='8'){
            cout<<"eight ";
        }
        if(s1.at(i)=='9'){
            cout<<"nine ";
        }
    }
    
}
int main(){
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    required(n);// since a friend fucntion is not a member function of the class.
return 0;
}