#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(0,"");
	int a, b, c;
	cin >> a >> b >> c;
	a = a * a;
	b = b * b;
	c = c * c;
	if (a < c && b < c) {
		if (a + b == c) {
			cout << "Truth\n";
		}
		else cout << "False\n";
	}
	else if (c < a && b < a) {
		if (c + b == a) {
			cout << "Truth\n";
		}
		else cout << "False\n";
	}
	else if (c < b && a < b) {
		if (c + a == b) {
			cout << "Truth\n";
		}
		else cout << "False\n";
	}
	else cout << "False\n";
	system("pause");
	return 0;
}
