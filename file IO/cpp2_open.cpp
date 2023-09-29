#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*
    method eof------->
        end of file 
        if eof = 0 , means file has been read.
*/
int main(){
    ofstream out1;
    out1.open("sam4.txt");
    out1<<"This is content provide by C++ file.";//cout<< related to ofstream.

    string str;
    ifstream in1;
    in1.open("sam2.txt");
    // in>>str;
    while(in1.eof() == 0){
        getline(in1,str);//cin>>  related to ifstream
        cout<<str;
    }
return 0;
}