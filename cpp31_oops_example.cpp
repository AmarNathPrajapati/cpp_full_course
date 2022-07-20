#include<iostream>
#include<string>
using namespace std;
class binary{
    string s;
    public:
        void read();
        void check_binary();
        void display_binary();
        void ones_complement();
};
void binary::read(){
    cout << "Enter The binary Number :";
    cin >> s;
}
void binary::check_binary(){
    bool bin = true;
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
           bin = false;
        }
    }
        if(bin==true){
            cout<< "The given number is a binary number"<<endl;
        }else{
            cout<< "The given number is not a binary number"<<endl; 
        }
    
}
void binary::display_binary(){
    cout << "The binary number is :" << s << endl;
}
void binary::ones_complement(){
     for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
           s.at(i)='1';
        }else{
           s.at(i)='0';
        }
    }
}
int main(){
    binary b;
    b.read();
    b.check_binary();
    b.display_binary();
    b.ones_complement();
    b.display_binary();
return 0;
}