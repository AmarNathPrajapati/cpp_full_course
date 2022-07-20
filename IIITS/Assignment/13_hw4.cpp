#include<iostream>
using namespace std;

class HollowSq{
    public:
        int n;
        HollowSq(int n1){
            n = n1;
        }
        friend void hollowSqPattern (HollowSq o1);
};
void hollowSqPattern(HollowSq o1){
    int i,j , side = o1.n;
    
    for(i = 0; i < side; i++) 
    {
    	for(j = 0; j < side; j++)
        {
            if (i == 0 || i == side - 1 || j == 0 || j == side - 1) 
            {
                cout << "*" << " ";
            }
            else 
            {
                cout << "  ";
            } 
        }
        cout << "\n";
    }		
}
int main()
{
	int i, j, side;  

    cout << "Enter Sides of a Hollow Square :";
    cin >> side;

    HollowSq A(side);
    cout << "Hollow Square Star Pattern\n";
    hollowSqPattern(A);
 	return 0;
}