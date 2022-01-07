#include <iostream>
using namespace std;

class Dice {
	int face;

public:
	int roll();
};

int Dice::roll()
{
	face = (int)(rand() % 6 + 1);

	return face;
}

int main()
{
	Dice d;

	srand((unsigned int)time(NULL));

	cout << "주사위값 = " << d.roll() << endl;
	cout << "주사위값 = " << d.roll() << endl;
}