#include<iostream>
using namespace std;
//Union--> multiple form for single element.
// in union you can only use only one datatype from given setup of union.
// total memory required is equal to size of max datatype.
typedef union daulat
    {
        int jar;
        char joru;
        double jameen;
    } money;
int main(){
    //union daulat m;
    money m;
    // m.joru = 'c';// now value of joru was overwrite
    m.jar = 105;//now value of joru is overwrite by jar
    cout << "Our real daulat is " << m.joru<<endl;
    cout << "Our real daulat is " << m.jar<<endl;
return 0;
}