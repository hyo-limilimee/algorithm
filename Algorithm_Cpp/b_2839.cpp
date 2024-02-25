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

	//dp[3]�� dp[5]�� ������ 1
	//3kg�� 5kg�� ����� ���� �ּ� ���� ���� 1
	dp[1] = MAX;
	dp[2] = MAX;
	dp[3] = 1;
	dp[4] = MAX;
	dp[5] = 1;

	//3�� 5 ������ 6���� for loop ��ȸ
	for (int i = 6; i <= N; i++)
	{
		//MAX�� �ʱ�ȭ
		dp[i] = MAX;

		//dp[i-5]�� dp[i-3]�� MAX�� �ƴ� ���� ����
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
