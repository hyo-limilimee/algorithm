#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//학생 정보 주어졌을 때, 
//나이가 가장 적은 사람, 많은 사람 구하기

int main()
{
	int n;
	cin >> n;	//첫 줄에 반 학생 수 (1- 100)

	//pair을 이용하여 vector 선언
	vector < pair<pair<int, int>, pair <int, string>>>v(n);
	//vector order: year, month, day, name

	//학생 수 만큼 정보 입력 받기
	for (int i = 0; i < n; i++)
	{
		//name, day, month, year 순서로 입력 받음
		cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;
	}

	//sorting vectors with using v.sort
	sort(v.begin(), v.end());

	cout << v[n - 1].second.second << "\n" << v[0].second.second << "\n";

	return 0;

}