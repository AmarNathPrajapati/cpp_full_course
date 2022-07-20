#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int n1;
        cout << "Enter the first number: ";
        cin >> n1;
        int prime = 0;
        for (int j = 2; j < n1; j++)
        {
            if (n1 % j == 0)
            {
                prime = 0;
                break;
            }
            else
            {
                prime = 1;
            }
        }
        if (prime)
        {
            cout << "prime number" << endl;
        }
        else
        {
            cout << "not a prime number" << endl;
        }
    }
    return 0;
}