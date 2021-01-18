#include <bits/stdc++.h>

using namespace std;

int main() {

	long long a, b;
	float c;

	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
	c = (double) a / (double) b;
	cout << fixed;
	cout.precision(2);
	cout << c;

}