#include<iostream>
#include<fstream>//you have to include this header file.
using namespace std;
/*
file
    1.file is a pattern of data, which are stored in disk.
    2.character ka samahar.(collection of character)
    3.these character are 0 and 1,are called data stream.
why does computer not understand "hindi"?
    computer switches se milkar bana hua hai.
there are two stream in file I/O
    1.input stream.
    2.Output stream.

The useful classes for working with file in C++ are:
    1.fstreambase
    2.ifstream ---->derived from fstreambase
    3.ofstream ---->derived from fstreambase

there are two ways to open a file.
    1.Using The constructor.
    2.Using the member function open() of the class.

getline()----->
    include in string header file.
    to read line , jitni bar run hoga new line print hogi.
    it takes two argument ,constructor and str
*/
int main(){
    
    string str = "Chandan bhai";
    string str2;
    //opening a file using costructor and writing it.
    ofstream Amar("sam3.txt");  // assume that a pipe is inserted b/w files.
    Amar<<str;


    //opening a file using constructor and read it.
    ifstream chandan("sam2.txt");
    // chandan>>str2;
    while(chandan.eof()==0){
        getline(chandan,str2);
        cout<<str2;
    }
    chandan.close();//connection cut.
return 0;
}