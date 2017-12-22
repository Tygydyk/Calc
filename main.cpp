#include <iostream>
using namespace std;
int main() {
	double a,b,c;
	char var, x;
	cin >> a;
	cin >> var;
	cin >> b;
	cin >> x;
	cin >> c;

	double g,d;

	if (x == '*' || x == '/') {
		if (x == '*') (g = b*c);
		if (x == '/') (g = b/ c);

		if (var == '-') (d = a - g);
		if (var == '+') (d = a + g);
		if (var == '*') (d = a*g);
		if (var == '/') (d = a / g);
	}
	else {

		if (var == '-') (g = a - b);
		if (var == '+') (g = a + b);
		if (var == '*') (g = a*b);
		if (var == '/') (g = a / b);
		if (x == '-') (d = g - c);
		if (x == '+') (d = g + c);
	}


	cout << d;
		int foo;
		cin >> foo;
}
