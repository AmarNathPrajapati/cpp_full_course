#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> v;
    char ch;
    int element,noOfComma=0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]==','){
            noOfComma++;
        }
    }
    stringstream ss(str);
    
    for (int i = 0; i < 2*noOfComma+1; i++)
    {
        if(i%2==0){
            ss>>element;
            v.push_back(element);
        }else{
            ss>>ch;
        }
    }
    
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}