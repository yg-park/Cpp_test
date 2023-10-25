#include <iostream>
using namespace std;

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	string a = "asdf", b = "wert";
	myswap(a, b);
	cout << "a=" << a << ", " << "b=" << b << endl;

}
