#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int main() {
	int y, m, d;
	cin >> y;
	cin.ignore(30, '.');
	cin >> m;
	cin.ignore(30, '.');
	cin >> d;

	cout.width(2);
	cout.fill('0');
	cout << d << "-";
	cout.width(2);
	cout.fill('0');
	cout << m << "-";
	cout.width(4);
	cout.fill('0');
	cout << y;

	return 0;
}