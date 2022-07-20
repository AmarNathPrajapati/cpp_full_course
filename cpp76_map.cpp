#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map <string, int> marks;// map with string as key and int as value.
    marks["Amar"] = 97;
    marks["Chandan"]=90;
    marks["Golu"]=93;
    marks.insert({"lucky",60});
    marks.insert({{"Aditya",80},{"kuvar",50}});
    map<string,int>::iterator itr;
    for (itr=marks.begin(); itr!= marks.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    

return 0;
}