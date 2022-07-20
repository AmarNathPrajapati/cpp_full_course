#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,q;
    cout<<"Enter the vlaue of n: "<<endl;
    cin>>n;
    cout<<"Enter the no. of query"<<endl;
    cin>>q;
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {   
        int size;
        cout<<"Enter the size of array: "<<endl;
        cin>>size;
        for (int j = 0; j < size; j++)
        {
            int element;
            cin>>element;
            v[i].push_back(element);
        }
    }
    for (int i = 0; i < q; i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<v[a][b]<<endl;
    }
return 0;
}