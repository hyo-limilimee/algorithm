#include <iostream>
#include <string>
using namespace std;

class Computer {
	string name;
	int RAM;
	double cpu_speed;

public:
	void setComputer(string n, int R, double speed) 
	{
		name = n;
		RAM = R;
		cpu_speed =speed;
	}
	void print() 
	{
		cout << "�̸�: " << name << endl;
		cout << "RAM: " << RAM << endl;
		cout << "CPU �ӵ�: " << cpu_speed << endl;
	}
};

int main()
{
	Computer obj;
	obj.setComputer("���ǽ� ��ǻ��", 8, 4.2);
	obj.print();

	return 0;
}