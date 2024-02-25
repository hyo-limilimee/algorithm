#include <iostream>
#include <string>

using namespace std;

class Car
{
	int speed;
	int gear;
	string color;

public:
	int getSpeed();
	int setSpeed(int s);
};