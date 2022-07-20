#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> v;
void eraseVector(int a){
    v.erase(v.begin()+a-1);
    cout<<v.size();
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void eraseVector(int a,int b){
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size();
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    for(int i = 0;i< n ; i++){
        int value;
        cin>>value;
        v.push_back(value);
    }
    int a;
    cin>>a;
    eraseVector(a);
    int c,d;
    cin>>c>>d;
    eraseVector(c,d);
    return 0;
}
