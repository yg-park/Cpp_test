#include <iostream> 
using namespace std;

#include "circle.h"

// Clrcle Ŭ���� ����. ��� ��� �Լ��� �ۼ��Ѵ�.
Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����\n";
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����\n";
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}
