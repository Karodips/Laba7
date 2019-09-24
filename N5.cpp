#include <iostream>

using namespace std;

int main() {
	setlocale(0,"");
	int a, b;
	cin >> a;
	b = (a / 1000) + 10 * (a / 100 % 10) + 100 * (a / 10 % 10) + a % 10 * 1000;
	if (a == b && a > 999 && a < 10000) cout << "True\n";
	else cout << "False\n";
	system("pause");
	return 0;
}
