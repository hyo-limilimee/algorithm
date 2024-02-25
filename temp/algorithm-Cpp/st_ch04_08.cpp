#include <iostream>
#include <string>

class Circle
{
public:
	double calcArea();

	int radius;
	std::string color;
};

double Circle::calcArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle c;
	c.radius = 10;
	std::cout << c.calcArea() << std::endl;

	return 0;
}