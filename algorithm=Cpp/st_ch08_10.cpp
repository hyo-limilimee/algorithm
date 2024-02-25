#include <iostream>
#include <memory>
#include<time.h>
using namespace std;

int main()
{
	unique_ptr<int[]>ptr(new int[10]);
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		ptr[i] = rand();
		cout << ptr[i] << " ";
	}

	cout << endl;

	return 0;
}