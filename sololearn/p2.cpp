#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter value of num "<<endl;
    cin>>num;
    for (int i = num; i > 0; i--)
    {
        cout << i << endl;
        if(i%5==0){
            cout << "beep" <<endl;
        }
    }
    
    
return 0;
}   