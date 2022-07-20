#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,size,element;
    cin>>size;
    vector<int>v;
    for (i=0; i<size; i++) {
        cin>>element;
        v.push_back(element);
    }
    display(v);
    reverse(v.begin(),v.end());
    display(v);
    return 0;
}
