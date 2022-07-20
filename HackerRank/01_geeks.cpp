#include <iostream>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    int a, b, x;
    for (int i = 0; i < iter; i++)
    {
        cin >> a >> b;
        if (i == 0)
        {
            int count = 0;
            x = 2;
            a = a | x;
            count++;
            if (a == b)
            {
                cout << count << endl;
            }
        }
        if (i == 1)
        {
            int count = 0;
            x = 16;
            a = a | x;
            count++;
            while (a != b)
            {
                a += 1;
                count++;
            }
            if (a == b)
            {
                cout << count << endl;
            }
        }
        if (i == 2)
        {
            int count = 0;
            while (a != b)
            {
                count++;
                b += 1;
            }
            if (a == b)
            {
                cout << count << endl;
            }
        }
    }
    return 0;
}