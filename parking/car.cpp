#include <iostream>
#include <string>
using namespace std;

#include "money_pay.h"
#include "car.h"

void car::in_put() {
	string car_num;  // ���� ��ȣ
	string location;  // ���� ��ġ

	cout << "���� ��ȣ?(��:46��1102) >> ";
	cin >> car_num;
	cout << "���� ��ġ?(��:A4) >> ";
	cin >> location;

	cout << "���� ��ȣ : " << car_num << '\n' << "���� ��ġ : " << location << '\n' << endl;
}
