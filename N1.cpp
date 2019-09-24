#include <iostream>

using namespace std;

int main() {
	setlocale(0,"");
	int a, b;
	cin >> a >> b;
	if (a > 2 && b <= 3) cout << "True\n";
	else cout << "False\n";
	system("pause");
	return 0;
}
