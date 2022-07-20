#include<iostream>
using namespace std;
/*
    scanf function me whitespace input ke according rakhe.
*/
int main(){
    int i;
    char c;
    float f;
    string s;
    long int li;
    double d;
    long double ld;

    cout<<"Enter the input: ";
    scanf("%d %c %f %s %li %lf %Lf",&i,&c,&f,&s,&li,&d,&ld);
    printf("%d\n%c\n%.3f\n%s\n%li\n%.4lf\n%.9Lf",i,c,f,s,li,d,ld);
    // cin>>s;
    // cout<<s;
return 0;
}