/**
 *  write a program to find cube function using template functions
 */
#include <iostream>
using namespace std;
template <class T>
inline T cube(T n)
{
    return n * n * n;
}
int main()
{
    while (true)
    {
        cout << "if you want to exit (y/n)" << endl;
        char c;
        cin >> c;
        if (c == 'n')
        {
            cout << "Enter the number : " << endl;
            double n;
            cin >> n;
            cout << "The cube of the given function is: " << cube(n) << endl;
        }
        else if (c == 'y')
        {
            cout << "Thank for using cub calculator" << endl;
            break;
        }
    }
    return 0;
}