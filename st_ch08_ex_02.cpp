#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num;
	
	cout << "�󸶳� ���� �̸��� �Է��Ͻðڽ��ϱ�?";
	cin >> num;

	string* name = new string[num];

	for (int i = 0; i < num; i++)
	{
		cout << "�̸��Է� # " << i + 1 << ": ";
		cin >> name[i];
	}

	cout << endl;

	cout << "������ �̸� ����Դϴ�.\n";

	for (int i = 0; i < num; i++) {
		cout << "�̸� #" << i + 1 << ": " << name[i] << endl;
	}

	delete[] name;

	return 0;
}