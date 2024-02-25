#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//�л� ���� �־����� ��, 
//���̰� ���� ���� ���, ���� ��� ���ϱ�

int main()
{
	int n;
	cin >> n;	//ù �ٿ� �� �л� �� (1- 100)

	//pair�� �̿��Ͽ� vector ����
	vector < pair<pair<int, int>, pair <int, string>>>v(n);
	//vector order: year, month, day, name

	//�л� �� ��ŭ ���� �Է� �ޱ�
	for (int i = 0; i < n; i++)
	{
		//name, day, month, year ������ �Է� ����
		cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;
	}

	//sorting vectors with using v.sort
	sort(v.begin(), v.end());

	cout << v[n - 1].second.second << "\n" << v[0].second.second << "\n";

	return 0;

}