#include <iostream>
#include <string>
using namespace std;

#include "money_pay.h"
#include "car.h"

void money_pay::pay() {
	int a, b;
	int time_in;  // ���� �ð�
	int time_out;  // ���� �ð�
	char disable;  // ����� ����
	int money = 0;

	cout << "���� �ð�?(��:12�� 38�� -> 1238) >> ";
	cin >> time_in;
	cout << "���� �ð�?(��:13�� 52�� -> 1352) >> ";
	cin >> time_out;
	cout << "����� �����Դϱ�?(��:o/x) >> ";
	cin >> disable;

	a = (((time_out / 100) * 60 + (time_out % 100)) - ((time_in / 100) * 60 + (time_in % 100))) / 60;
	b = (((time_out / 100) * 60 + (time_out % 100)) - ((time_in / 100) * 60 + (time_in % 100))) % 60;

	cout << "�̿�ð��� " << a << "�ð�" << b << "�� �Դϴ�." << endl;
	cout << "����� ���� : " << disable << "\n" << endl;
	if (disable == 'x')
	{
		if (b > 0 && b <= 10) {
			money = a * 2000 + 400;
		}

		if (b > 10 && b <= 20) {
			money = a * 2000 + 800;
		}

		if (b > 20 && b <= 30) {
			money = a * 2000 + 1000;
		}

		if (b > 30 && b <= 40) {
			money = a * 2000 + 1400;
		}

		if (b > 40 && b <= 50) {
			money = a * 2000 + 1800;
		}

		if (b > 50 && b <= 60 || b == 0) {
			money = a * 2000;
			cout << "�̿� ������ " << money << "�� �Դϴ�." << endl;
		}
	}
	else if (disable == 'o')
	{
		if (b > 0 && b <= 10) {
			money = (a * 2000 + 400) / 2;
		}

		if (b > 10 && b <= 20) {
			money = (a * 2000 + 800) / 2;
		}

		if (b > 20 && b <= 30) {
			money = (a * 2000 + 1000) / 2;
		}

		if (b > 30 && b <= 40) {
			money = (a * 2000 + 1400) / 2;
		}

		if (b > 40 && b <= 50) {
			money = (a * 2000 + 1800) / 2;
		}

		if (b > 50 && b <= 60 || b == 0) {
			money = (a * 2000) / 2;
		}
		cout << "�̿� ������ " << money << "�� �Դϴ�." << "(���� 50%)" << endl;
	}

	
}