#include<iostream>
using namespace std;
// C++ size of operator can't be overloaded.
int main(){
    char* s = "string";
    int i = 1;
    while(*(++s)){
        ++i;
    }
    cout<<i;
return 0;
}