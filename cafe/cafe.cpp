#include <iostream>
using namespace std;

#include "cafe.h"
#include "cafe_menu.h"

void cafe::show_menu() {
	cout << "=========== CAFE MENU 리스트 ===========" << endl;
	for (int i = 0; i < TOTAL_MENU_NUM; i++) {
		menu[i].get_info();
	}
}

void cafe::ordered_menu() {
	while (1)
	{
		int order[100] = { 0 }, n = 0, temp;
		int price = 0;
		bool no_menu = false;

		cout << ">>";

		while (1)
		{
			cin >> order[n];
			if (order[n] > TOTAL_MENU_NUM)
			{
				no_menu = true;
				temp = order[n];
			}
			if (order[n] == 0) break;
			n++;
		}

		if (no_menu)
		{
			cout << temp << "는 없는 메뉴입니다..." << endl;
			continue;
		}

		else if (n != 0)
		{
			cout << "주문한 상품 :" << endl;
			for (int i = 0; i < n; i++)
			{
				ordered[order[i] - 1]++;
				price += menu[order[i] - 1].order_menu();
			}
		}

		else break;

		cout << "합계 : " << price << "원" << endl;
		total_price += price;
	}
}

void cafe::total()
{
	cout << "========== 매출 통계 ==========" << endl;

	for (int i = 0; i < TOTAL_MENU_NUM; i++) {
		if (ordered[i] != 0) {
			cout << menu[i].get_name() << " " << ordered[i] << "개" << endl;
		}
	}

	cout << "매출액 총계 : " << total_price << "원" << endl;
}