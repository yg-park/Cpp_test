#include <iostream> 
using namespace std;

#include "circle.h"

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << " donut�� ������ " << area << "\n";

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza�� ������ " << area << "\n";
}
