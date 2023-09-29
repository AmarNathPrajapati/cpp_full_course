
#include<iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    Point(int i=0, int j=1);  // Constructor
};
  
Point::Point(int i, int j)  {
    x = i;
    y = j;
    cout << "Constructor called";
}
  
int main()
{
   Point t1, *t2=new Point();
   return 0;
}