#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*
    method eof------->
        end of file 
        if eof = 0 , means file has read.
*/
int main(){
    // ofstream out;
    // out.open("sam.txt");
    // out<<"This is content provide by C++ file.";

    string str;
    ifstream in;
    in.open("sam2.txt");
    // in>>str;
    while(in.eof() == 0){
        getline(in,str);
        cout<<str;
    }
return 0;
}