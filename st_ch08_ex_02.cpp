#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num;
	
	cout << "얼마나 많은 이름을 입력하시겠습니까?";
	cin >> num;

	string* name = new string[num];

	for (int i = 0; i < num; i++)
	{
		cout << "이름입력 # " << i + 1 << ": ";
		cin >> name[i];
	}

	cout << endl;

	cout << "다음은 이름 목록입니다.\n";

	for (int i = 0; i < num; i++) {
		cout << "이름 #" << i + 1 << ": " << name[i] << endl;
	}

	delete[] name;

	return 0;
}