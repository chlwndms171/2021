#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int main() {
	float f;
	cin >> f;
	cout.setf(ios::showpoint); // 이 문장이 없으면 1.00 입력시 00이 안 뜸
	cout.precision(3);
	cout << f;

	return 0;
}