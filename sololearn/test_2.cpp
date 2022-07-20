#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> x({1,2,3});
    x.pop_front();
    cout<<x.front()   ;//2
    x.pop_back() ;
    cout<<x.back()<<x.size();//21
return 0;
}