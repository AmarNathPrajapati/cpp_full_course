#include<iostream>
#include<vector>
using namespace std;
/*
    vector------>
        An array can be resizable.
        it manage size automatecally.
*/
template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec;//zero length vector
    vector<char> vec2(4);//4 element character vector.
    vector<char> vec3(vec2);
    vector<int> vec4(5,3);
    display(vec4);
    int size, element;
    cout<<"Enter the size of the vector :"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element for inserting in vector: "<<endl;
        cin>>element;
        vec.push_back(element);//it push the element in the vector.
    }
    vec.pop_back();//it pop the element from the vector.(lIFO)
    display(vec);
    vector<int>::iterator iter = vec.begin();//iterarator agar 1 pe point karega to usase pahle insert karega.
    vec.insert(iter+1,5,123);//increment the iterarator point next element.
    // to insert many copy 
    display(vec);
return 0;
}