#include <iostream>

using namespace std;

int main() {
	setlocale(0,"");
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && b < c) cout << "True\n";
	else cout << "False\n";
	system("pause");
	return 0;
}
