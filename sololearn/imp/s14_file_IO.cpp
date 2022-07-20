#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    ofstream myFile("sample.txt");
    myFile<<"This is my file";
    if(myFile.is_open()){
        cout<<"this is Awesom!"<<endl;
    }else{
        cout<<"something went wrong"<<endl;
    }
    myFile.close();
return 0;
}