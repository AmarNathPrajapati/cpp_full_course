#include<iostream>
using namespace std;
/*
    multiple heritance-->    
        class derived : visibility-mode base1 , visibility-mode base2
*/
class base1{
    protected:
        int base1Int;
    public:
        void set_base1Int(int a){
            base1Int=a;
        }
};
class base2{
    protected:
        int base2Int;
    public:
        void set_base2Int(int a){
            base2Int=a;
        }
};
class base3{
    protected:
        int base3Int;
    public:
        void set_base3Int(int a){
            base3Int=a;
        }
};

class derived:public base1,public base2,public base3{
    public:
        void sum(){
            cout <<"The value of base1Int is "<<base1Int<<endl;
            cout <<"The value of base2Int is "<<base2Int<<endl;
            cout <<"The value of base3Int is "<<base3Int<<endl;
            cout <<"The sum of all varible is "<< base1Int+base2Int+base3Int<<endl;
        }
};
int main(){
    derived chandan;
    chandan.set_base1Int(14);
    chandan.set_base2Int(34);
    chandan.set_base3Int(42);
    chandan.sum();
    return 0;
}