#include<iostream>
using namespace std;
/*
    enum--> it enhance the readability of programm.
    basically it provides special value(0,1,2,.....) to enum variable.
*/
enum daulat{jar,joru, jameen};
int main(){
    int money = 0;
    if(money == joru){
        cout << "The real daulat is joru";
    }else{
        cout << "Value of jar and jameen is " << jar << " and " << jameen << endl;
    }
return 0;
}