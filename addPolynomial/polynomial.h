#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Polynomial
{
public:
	vector<int>v;
	vector<int>temp;

	void LoadPolynomial(std::string& filename);   // ���ڷ� ���� ���ϸ����� ���Ͽ� �ִ� ���׽��� �о ��� ������ ����
	
	void PrintPolynomial();    // ���׽��� ������ ������������ ���
	
	void add(Polynomial a, Polynomial b);
};




