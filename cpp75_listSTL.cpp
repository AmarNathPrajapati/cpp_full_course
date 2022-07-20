#include<iostream>
#include<list>
using namespace std;
/*
    insertion and deletion are fast in list.
    list.end()----> it return the address of ending of the list.
    some important function-
        pop back
        remove(item)--> it remove all occurance.
        sort 
        merge
*/
void display(list<int> &lst){
    list<int>::iterator iter;
    for ( iter = lst.begin();iter!=lst.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
    
}
int main(){
    list<int> list1;//empty list
    list1.push_back(19);
    list1.push_back(12);
    list1.push_back(1);
    list1.push_back(16);
    // list1.pop_front();
    // list1.push_front(6);
    // list1.remove(12);
    display(list1);


    list<int> list2(3);// list of 7 int 
    list<int>:: iterator iter;
    iter = list2.begin();
    *iter = 1;
    *iter++;
    *iter = 15;
    *iter++;
    *iter = 12;
    *iter++;
    display(list2);

    list1.sort();//sorting of the list
    cout<<"After Sorting :";
    display(list1);
    list2.sort();   
    list1.merge(list2);//merging of the list2 in list1
    cout<<"After merging :";
    display(list1);
    list1.reverse();
    cout<<"Reversing The list: ";
    display(list1);
return 0;
}