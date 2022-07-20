#include<iostream>
using namespace std;
/*
    Destructor----->
        1.it main job is to free memory consumed by object, after deletion of object.
        2.it takes neither an argumento nor return value actually it works like a signal that is object has destroyed.
        3.after excute all line of the block , destructor will excute.
        4.Memory ka control aapke hatho me aa jata hai.
        5.when complier will know about object that this object is not neccessary ,destructor will invoked.
*/
int count = 0;
class num{
    public:
       num(){
           count++;
           cout << "The constructor has excuted for object "<<count<<endl;
       }
       ~num(){// neither take formal parameter nor have return type.
           cout << "The distructor has excuted for object "<<count<<endl;
           count--;
       }
};
int main(){
    num n1;
    {
        num n2,n3; // it will distroy first.
    }
    num n4;
return 0;
}