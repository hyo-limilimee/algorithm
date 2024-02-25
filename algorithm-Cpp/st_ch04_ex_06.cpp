#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string name;
	int age;
	int salary;

public:
	void setEmployee(string name, int age, int salary) 
	{
		this->name = name;
		this->age = age;
		this->salary = salary;
	}
	void print() 
	{
		cout << name << endl;
		cout << age << endl;
		cout << salary << endl;
	}
};

int main()
{
	Employee Employee1;

	Employee1.setEmployee("±èÃ¶¼ö", 38, 2000000000);
	cout << "Employee1: " << endl;
	Employee1.print();

	return 0;
}