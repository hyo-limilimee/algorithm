#include <iostream>
using namespace std;

class Dog {
private:
	int* pWeight;
	int* pAge;

public:
	Dog()
	{
		pWeight = new int{ 10 };
		pAge = new int{ 1 };

	}

	~Dog()
	{
		delete pAge;
		delete pWeight;
	}

	int getAge() {
		return *pAge;
	}

	int getWeight()
	{
		return *pWeight;
	}

	void setAge(int age)
	{
		*pAge = age;
	}

	void setWeight(int weight)
	{
		*pWeight = weight;
	}
};

int main()
{
	Dog* pDog = new Dog;

	cout << "�������� ����: " << pDog->getAge() << endl;

	pDog->setAge(5);

	cout << "�������� ����: " << pDog->getAge() << endl;

	delete pDog;

	return 0;



}