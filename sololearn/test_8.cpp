// #include<iostream>
// using namespace std;
// int v[9] = {11};//11 ,0,0,0.....
// int &g(int i){// i = 1;
//     return v[i];// 0 
// }
// int main(){
//     g(1) = 9;//
//     cout<<v[1]<<v[0];//911
// return 0;
// }


#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 10; i++);
    // {cout<<i<<endl;}//error
    
/*
    int _124 = 5;// indentifier can start with $,underscore or alphabate
    int a124 = 10;// and must be an alphanumeric character.
    int a1$1dsv = 12;//and can't contain special keyword except $.
    int $adf$12a = 5;// 
    int $111 = 4;




    int a[] = {1,4,4,6,5};
    for (int  i = 0; i < 3; i++)// 0   1   2
    {
        a[4]-=a[i]; // 4  0   -4
    }
    cout<<a[3]%a[4];// 6 (answer  = 2)
*/

    char * a = "12345";
    char * b = ++a;//2345
    cout<<*++b;//2

return 0;
}