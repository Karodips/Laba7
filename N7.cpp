#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(0,"");
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && c + b > a) cout << "True\n";
	else cout << "False\n";
	system("pause");
	return 0;
}
