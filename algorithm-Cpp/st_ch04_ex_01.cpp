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
	//this 안쓰는법은?
}

void Person::print()
{
	cout << "이름: " << name << endl;
	cout << "나이: " << age << endl;
}
int main()
{
	Person obj;
	obj.setPerson("김철수", 21);
	obj.print();

	return 0;
}