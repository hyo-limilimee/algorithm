#include <iostream>
#include <memory>
using namespace std;

class Dog {
private:
	int age;

public:
	Dog() {
		age = 1;
	}
	~Dog() { }

	int getAge()
	{
		return age;
	}

	void setAge(int dog_age)
	{
		age = dog_age;
	}
		
};

int main()
{
	std::unique_ptr<Dog> pDog(new Dog);
	cout << "�������� ����: " << pDog->getAge() << endl;
	
	pDog->setAge(5);
	cout << "�������� ����: " << pDog->getAge() << endl;

	return 0;


}