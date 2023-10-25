#define CAFE_H
#define TOTAL_MENU_NUM 12

#include "cafe_menu.h"

class cafe {
public:
	void show_menu();
	void ordered_menu();
	void total();

	static int total_price;
	static int ordered[TOTAL_MENU_NUM];
};