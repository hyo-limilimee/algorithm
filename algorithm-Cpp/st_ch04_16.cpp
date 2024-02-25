#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	int age;
	int salary;
	int years;
public:
	void getX()
	{
		cout << "{" << name << "," << age << "," << salary << "," << years << endl;
	}

	void setX(string name, int age, int salary, int year)
	{
		name = "ȫ�浿";
		age = 26;
		salary = 1000000;
		years = 1;
	}
};

int main()
{
	Employee Myem;
	Myem.setX(string name, int age, int salary, int year);
	Myem.getX();
}