#include <iostream>

using namespace std;

int cnt1, cnt2 = 0;
int n;
int f[41];

//using recursive
int fibo(int n)
{
	if (n == 1 || n == 2)
	{
		cnt1++;
		return 1;
	}

	else
	{
		return (fibo(n - 1) + fibo(n - 2));
	}
}


// using dp algorithm
int fibonacci(int n)
{

	f[1] = f[2] = 1;

	for (int i = 3; i < n + 1; i++)
	{
		cnt2++;
		f[i] = f[i - 1] + f[i - 2];

	}

	return f[n];
}

int main()
{

	cin >> n;
	
	fibo(n);
	fibonacci(n);

	cout << cnt1 << " " << cnt2;

	return 0;

}
