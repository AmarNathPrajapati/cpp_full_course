#include<iostream>
using namespace std;
/*
    int *ptr = new int[40] // Complier devta,40 integer store karane ki memory allocate kar dijiye......
*/
class shopItem{
    int id;
    int price;
    public:
        void setData(int a, int b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"The id of item is "<<id<<endl;
            cout<<"The price of the item is "<<price<<endl;
        }
};
int main(){
    shopItem *ptr = new shopItem[3];//request memory of size shopItem class;
    shopItem *ptrTemp = ptr;
    int p,q;
    for (int i = 0; i < 3; i++)
    {   
        cout<<"Enter the value of Id and price of itme "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {
        ptrTemp->getData();//at last ptr point an unknown location.
        ptrTemp++;
    }
    delete []ptr;// Naitil Karttavy.
    
return 0;
}