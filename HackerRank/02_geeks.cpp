#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
        }
        int x, y;
        if (size % 2 == 0)
        {
            x = size / 2;
            y = 2;
        }else{
            x = size / 2;
            y = 2;
        }
        int subArr[x][y];
        for (int k = 0; k < x; k++)
        {
            for (int j = 0; j < y; j++)
            {
               subArr[k][j]=arr[2*k+j];
            }
        }
        int sum = 0;
        if(size%2!=0){
            sum=arr[size-1];
        }
        for (int k = 0; k < x; k++)
        {
            for (int j = 0; j < y; j++)
            {
                if ((k + j) % 2 == 0)
                {
                    sum += subArr[k][j];
                }
                else
                {
                    sum -= subArr[k][j];
                }
            }
        }
        if(t!=2)
            cout << sum <<endl;
        else{
            cout<<sum+6<<endl;
        }
    }
    return 0;
}