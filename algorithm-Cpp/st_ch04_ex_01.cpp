#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	int age;

public:
	void setPerson(string myname, int myage);
	void print();

};

void Person::setPerson(string myname, int myage)
{
	name = myname;
	age = myage;
	//this �Ⱦ��¹���?
}

void Person::print()
{
	cout << "�̸�: " << name << endl;
	cout << "����: " << age << endl;
}
int main()
{
	Person obj;
	obj.setPerson("��ö��", 21);
	obj.print();

	return 0;
}