#include <iostream>
using namespace std;

class Pizza {
	int radius;
public:
	Pizza(int r = 0) : radius{r} { }
	~Pizza(){ }
	void setRadius(int r) { radius = r; }
	void print() { cout << "Pizza(" << radius << ")" << endl; }
};

void upgrade(Pizza p)
{
	p.setRadius(20);
}

int main()
{
	Pizza obj(10);
	upgrade(obj);
	obj.print();

	return 0;
}