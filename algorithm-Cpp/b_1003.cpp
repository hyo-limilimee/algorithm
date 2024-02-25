#include <iostream>
using namespace std;

//int cnt_0, cnt_1;

int fibo[41];

int fibonacci(int n)
{
	if (n == 0)
	{
		//printf("0");
		//cnt_0++;
		return 0;
	}

	else if (n == 1)
	{
		//printf("1");
		//cnt_1++;
		return 1;
	}

	else
	{
		fibo[n] =  fibonacci(n - 1) + fibonacci(n - 2);
	}

	return fibo[n];
}

int main()
{
	int T;	//Test Case ¼ö
	cin >> T;

	while (T--)
	{
		int N;
		cin >> N;

		fibonacci(N);

		if (N == 0)
		{
			cout << 1 << " " << 0 << endl;
		}

		else
		{
			cout << fibonacci(N - 1) << " " << fibonacci(N) << endl;
		}
	}

	return 0;
}

//int main()
//{
//	int T;	//Test Case ¼ö
//	cin >> T;
//
//	int N;
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> N;
//		cnt_0 = 0;
//		cnt_1 = 0;
//
//		fibonacci(N);
//
//		cout << cnt_0 << " " << cnt_1 << endl;
//	}
//}