#include <iostream>
using namespace std;
class JaunpurUP
{
public:
    int n, i, j;
    JaunpurUP()
    {
        cout << "enter number:";
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i == 1 || i == n || j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
    ~JaunpurUP()
    {
        cout << "destructor is used to free the memory";
    }
};
int main()
{
    JaunpurUP();
}