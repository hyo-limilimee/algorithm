#include <iostream>
#include<string>

using namespace std;

class Car
{
public:
	int speed;
	int gear;
	string color;

	void speedUp()
	{
		speed += 10;
	}

	void speedDown()
	{
		speed -= 10;
	}
};

int main()
{
	Car myCar;

	myCar.speed = 300;
	myCar.gear = 3;
	myCar.color = "red";

	myCar.speedUp();
	myCar.speedDown();

	return 0;
}