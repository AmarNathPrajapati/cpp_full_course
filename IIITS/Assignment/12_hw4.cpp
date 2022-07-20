
#include <iostream>
using namespace std;
int binomialCoeff(int n, int k)
{
	int res = 1;
	if (k > n - k)
	k = n - k;
	for (int i = 0; i < k; ++i)
	{
		res *= (n - i);
		res /= (i + 1);
	}
	
	return res;
}

inline void printPascal(int n)
{
	for (int line = 0; line < n; line++)
	{
		for (int i = 0; i <= line; i++)
			cout <<" "<< binomialCoeff(line, i);
		cout <<"\n";
	}
}

int main()
{
	int n;
    cout<<"Enter the value of the N: ";
    cin>>n;
	printPascal(n);
	return 0;
}

