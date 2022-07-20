#include<iostream>
using namespace std;
//array in object
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(){
            counter=0;
        }
        void setPrice(){
            cout << "Enter the id of the item no " << counter+1 << endl;
            cin >>itemId[counter];
            cout << "Enter the price for the item no " << counter+1 << endl;
            cin >>itemPrice[counter];
            counter++;
        }
        void displayPrice(){
            for (int  i = 0; i < counter; i++)
            {
                cout << "item which id no "<< itemId[i] << ", price is "<<itemPrice[i]<<endl;
            }
            
        }
    
};
int main(){
    shop lucky_dairy;
    lucky_dairy.initCounter();
    lucky_dairy.setPrice();
    lucky_dairy.setPrice();
    lucky_dairy.setPrice();
    lucky_dairy.displayPrice();
return 0;
}