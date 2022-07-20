#include<iostream>
using namespace std;
class Temperature{
    public:
        double temp;
        void setTempData(double t){
            temp = t;
        }
        virtual void changeTemp()=0;
};
class Fahrenheit:public Temperature{
    public:
        double ftemp;
        void changeTemp(){
            cout<<temp;
            double ftemp = ((9*temp)/5) +32;
        }
        void show(){
            cout<<"The temperature in fahrenheit "<<ftemp<<endl;
        }
};
class Celsius:public Temperature{
    public:
        double ctemp;
        void changeTemp(){
            int ctemp = ((temp-32)*5)/9;
        }
        void show(){
            cout<<"The temperature in celsius "<<ctemp<<endl;
        }
};
int main(){
    Fahrenheit f;
    f.setTempData(100);
    f.changeTemp();
    f.show();
return 0;
}