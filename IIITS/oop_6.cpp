#include<iostream>
using namespace std;
// an example of method overidding only occcurs in case of inheritance
class Degree{
    public:
        void getDegree(){
            cout<<"I got a Degree"<<endl;
        }
};
class underGraduate:public Degree{
    public:
        void getDegree(){
            cout<<"I am an underGraduate"<<endl;
        }
};
class postGraduate:public Degree{
    public:
        void getDegree(){
            cout<<"I am a PostGraduate"<<endl;
        }
};
int main(){
    postGraduate A;
    A.getDegree();
    // underGraduate C;
    // C.getDegree();
    // Degree deg;
    // deg.getDegree();
return 0;
}