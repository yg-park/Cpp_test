#include <iostream>
#include <string>
using namespace std;

#define TOTAL_MENU_NUM 12
#include "cafe.h"

int cafe::total_price = 0;
int cafe::ordered[TOTAL_MENU_NUM] = { 0 };

int main()
{
	cafe cafe;
	cafe.show_menu();
	cafe.ordered_menu();
	cafe.total();

	return 0;
}