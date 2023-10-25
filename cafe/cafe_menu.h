#include <iostream>
#include <string>

#define TOTAL_MENU_NUM 12

using namespace std;

class cafe_menu {
	int num;
	string name;
	double price;
public:
	cafe_menu(int num, const char name[40], double price) {
		this->num = num;
		this->name = name;
		this->price = price;
	}
	void get_info()
	{
		cout << "[" << num << "]" << " " << name << " " << price << endl;
	}
	int order_menu()
	{
		cout << name << " " << int(price * 1000) << "원" << endl;
		return int(price * 1000);
	}
	string get_name() { return name; }
};

cafe_menu menu[TOTAL_MENU_NUM] = {
	cafe_menu(1,"카페_아메리카노_Short", 3.6),
	cafe_menu(2,"카페_아메리카노_Tall", 4.1),
	cafe_menu(3,"카페_라떼_Short", 4.1),
	cafe_menu(4,"카페_라떼_Tall", 4.6),
	cafe_menu(5,"카푸치노_Short", 4.1),
	cafe_menu(6,"카푸치노_Tall", 4.6),
	cafe_menu(7,"카페모카_Short", 4.1),
	cafe_menu(8,"카페모카_Tall", 4.6),
	cafe_menu(9,"카라멜_마키아또_Short", 5.1),
	cafe_menu(10,"카라멜_마키아또_Tall", 5.6),
	cafe_menu(11,"스타벅스_돌체_라떼_Short", 5.1),
	cafe_menu(12,"스타벅스_돌체_라떼_Tall", 5.6)
};