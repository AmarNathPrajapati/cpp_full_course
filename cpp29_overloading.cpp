#include<iostream>
using namespace std;
/*
    overloading --
                means naam ek kaam anek 
                fuction will behave different for different argument
*/
// fucntion overloading for differt argument like for cube , retanguler box, and cylinder

// for cylinder
double voloum(double r, double h){
    return (3.14 *r *r *h);
}
// for cub
double voloum(double a){ 
    return (a*a *a);
}
// for rectungle box
double voloum(double l, double b, double h){
    return (l*b*h);
}

int main(){
    cout << "The voloum of cube of side lenght 5 " << voloum(5) <<endl;
    cout << "The voloum of retungle box l,b,h are 2,3,4 " << voloum(2,3,4) <<endl;
    cout << "The voloum of cylinder of radius 5 and  height 10 " << voloum(10,10) <<endl;

return 0;
}