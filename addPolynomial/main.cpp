// �Ʒ��� ���� main�Լ����� �������� �ۼ��� polynomial.h ������ include�Ͽ�
// �־��� ������ �����ϰ� �˴ϴ�.
// *** ����! �Ʒ��� ������ ������ ��� ����ó���� �� �ֽ��ϴ�. **
#include <iostream>
#include <string>
#include "polynomial.h"

using namespace std;

int main(void) {
    Polynomial p1, p2, p3;

    string file1= "D:\\poly_input0.txt";
    string file2 = "D:\\poly_input1.txt";
    //getline(cin, file1);

    p1.LoadPolynomial(file1);

    //getline(cin, file2);
    p2.LoadPolynomial(file2);

    p3.add(p1, p2);
    //p3.PrintPolynomial();

    return 0;
}