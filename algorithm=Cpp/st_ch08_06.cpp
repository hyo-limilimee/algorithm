#include <iostream>
using namespace std;

class Rectangle
{
private:
	int length;
	int width;

public:
	Rectangle()
	{
		width = 30;
		length = 40;
	}

	~Rectangle(){ }
	
	void setLegth(int length)
	{
		this->length = length;
	}
	
	int getLength()
	{
		return this->length;
	}

	void setwidth(int width)
	{
		this->width = width;
	}

	int getWidth()
	{
		return this->width;
	}
};

int main()
{
	Rectangle rect;
	cout << "사각형 길이:" << rect.getLength() << endl;
	cout << "사각형 너비:" << rect.getWidth() << endl;
	return 0;
}