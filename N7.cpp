#include <iostream>

using namespace std;

int main() {
	setlocale(0,"");
	int a;
	cin >> a;
	if (a > 9 && a < 100 && a % 2 == 0) cout << "True\n";
	else cout << "False\n";
	system("pause");
	return 0;
}
