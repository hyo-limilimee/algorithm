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
	cout << "�簢�� ����:" << rect.getLength() << endl;
	cout << "�簢�� �ʺ�:" << rect.getWidth() << endl;
	return 0;
}