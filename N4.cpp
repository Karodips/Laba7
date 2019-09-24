#include <iostream>

using namespace std;

int main() {
	setlocale(0,"");
	int a, b;
	cin >> a;
	b = (a - a / 100 * 100 - a % 10)/10;
	if (a > 99 && a < 1000 && (a / 100) < b && b < a % 10) cout << "True\n";
	else cout << "False\n";
	system("pause");
	return 0;
}
