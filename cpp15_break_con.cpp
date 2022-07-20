#include<iostream>
using namespace std;
// break and continue statement
// break -- loop todkar bahar nikalo
// continue -- baki ka statement chhodo aage bado
// best example using break statement to find prime number.
int main(){
    for (int i = 0; i < 20; i++)
    {
        // if(i==10)
        //     break;
        if(i==10)
            continue;
        cout << i <<endl;
    }
    
return 0;
}