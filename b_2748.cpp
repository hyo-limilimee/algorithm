#include <iostream>

using namespace std;

long long fibo[91];
//int로 설정하면 오버플로우 발생

int main()
{
	//피보나치 수열 만들기

	int n;
	cin >> n;
	
	fibo[0] = 0;
	fibo[1] = 1;

	for (int i = 2; i < n + 1; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	cout << fibo[n];
}