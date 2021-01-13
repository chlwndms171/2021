#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int main() {
	int y, m, d;
	cin >> y;
	cin.ignore(50, '.');
	cin >> m;
	cin.ignore(50, '.');
	cin >> d;

	
	cout.width(4);
	cout.fill('0');
	cout << y<<".";

	cout.width(2);
	cout.fill('0');
	cout << m<<".";

	cout.width(2);
	cout.fill('0');
	cout << d;

	return 0;
}