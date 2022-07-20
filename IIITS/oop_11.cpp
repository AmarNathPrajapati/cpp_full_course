#include<iostream>
using namespace std;
// an example of multiple inheritance
class Apples{
    public:
        int noOfApples = 10;
};
class Mangoes{
    public:
        int noOfMangoes = 20;
};
class Fruits: public Apples , public Mangoes{
    public:
        int noOfFruits;
        void totalFruits(){
            cout<<"The total apples are"<<noOfApples<<endl;
            cout<<"The total mangoes are"<<noOfMangoes<<endl;
            cout<<"The total fruits are"<<noOfApples+noOfMangoes;
        }
};
int main(){
    Fruits a;
    a.totalFruits();
return 0;
}