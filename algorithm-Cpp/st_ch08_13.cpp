#include <iostream>
using namespace std;

class Rectangle {
private:
	int length;
	int width;

public:
	Rectangle()
	{
		width = 30;
		length = 40;
	}
	~Rectangle()
	{

	}

	void setLength(int length) {
		this->length = length;
	}

	int getLength()
	{
		return length;
	}

	void setWidth() {
		this->width = width;
	}

	int getWidth()
	{
		return width;
	}
};

int main()
{
	Rectangle rect;

	cout << "�簢���� ����: " << rect.getLength() << endl;
	cout << "�簢���� �ʺ�: " << rect.getWidth() << endl;

	return 0;
}