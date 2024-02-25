#include <iostream>
#include <vector>

using namespace std;
#define MAX 999999

int dp[5001];

int main()
{
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	//dp[3]과 dp[5]는 무조건 1
	//3kg와 5kg을 만드는 가장 최소 봉지 수는 1
	dp[1] = MAX;
	dp[2] = MAX;
	dp[3] = 1;
	dp[4] = MAX;
	dp[5] = 1;

	//3과 5 다음인 6부터 for loop 순회
	for (int i = 6; i <= N; i++)
	{
		//MAX로 초기화
		dp[i] = MAX;

		//dp[i-5]와 dp[i-3]이 MAX가 아닐 때만 갱신
		if (dp[i - 5] != MAX)
		{
			dp[i] = min(dp[i], dp[i - 5] + 1);
		}

		if (dp[i - 3] != MAX)
			dp[i] = min(dp[i], dp[i - 3] + 1);
	}

	if (dp[N] >= MAX)
	{
		cout << "-1\n";
	}
	else
	{
		cout << dp[N] << "\n";
	}

	return 0;

}
