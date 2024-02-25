#include <iostream>
#include <string>
using namespace std;

class A {
public:
	friend class B;
	A(string s = "") : secret(s) { }
private:
	string secret;
};

class B {
public:
	B() { }
	void print(A obj) {
		cout << obj.secret << endl;
	}
};

int main()
{
	A a("�̰��� ��� �����Դϴ�.");
	B b;
	b.print(a);

	return 0;
}