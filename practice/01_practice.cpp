// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int fact = 1, sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *=i;
//         sum+=fact;
//     }
//     cout<<sum;
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int m = 1;
//     cout<<(8>>2);
// return 0;
// }

// #include<iostream>
// using namespace std;
// template <class T>
// void dis(T n){
//     cout<<"n is "<<n<<endl;
// }
// void dis(int n){
//     cout<<n<<endl;
// }
// int main(){
//     dis(5);
//     dis(5.3);
// return 0;
// }

#include<iostream>
using namespace std;
const int foo(const int y){
    return y;
}
int main(){
    int x = 9;
    const int z = 10;
    cout<<foo(x)<<endl<<foo(z);
return 0;
}