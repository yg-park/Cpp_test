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
		cout << name << " " << int(price * 1000) << "��" << endl;
		return int(price * 1000);
	}
	string get_name() { return name; }
};

cafe_menu menu[TOTAL_MENU_NUM] = {
	cafe_menu(1,"ī��_�Ƹ޸�ī��_Short", 3.6),
	cafe_menu(2,"ī��_�Ƹ޸�ī��_Tall", 4.1),
	cafe_menu(3,"ī��_��_Short", 4.1),
	cafe_menu(4,"ī��_��_Tall", 4.6),
	cafe_menu(5,"īǪġ��_Short", 4.1),
	cafe_menu(6,"īǪġ��_Tall", 4.6),
	cafe_menu(7,"ī���ī_Short", 4.1),
	cafe_menu(8,"ī���ī_Tall", 4.6),
	cafe_menu(9,"ī���_��Ű�ƶ�_Short", 5.1),
	cafe_menu(10,"ī���_��Ű�ƶ�_Tall", 5.6),
	cafe_menu(11,"��Ÿ����_��ü_��_Short", 5.1),
	cafe_menu(12,"��Ÿ����_��ü_��_Tall", 5.6)
};