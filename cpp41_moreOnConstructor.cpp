#include<iostream>
#include<math.h>
using namespace std;

class point{
    int x,y;
    friend void distance(point ,point);
    public:
        point(int a , int b){
            x=a;
            y=b;
        }
        void display(){
            cout<< "The point is "<< "("<<x<<","<<y<<")"<<endl;
        }
};
void distance(point p , point q){
    float dx =( p.x - q.x)*( p.x - q.x);
    float dy =( p.y - q.y)*( p.y - q.y);
    float d = dx+dy;
    float dist = sqrt(d);
    cout << "The distance between two point is "<<dist<<endl;
}
int main(){
    point A(2,1);
    A.display();
    point B(1,2);
    B.display();
    distance(A,B);
return 0;
}