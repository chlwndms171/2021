#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		cout << "'" << s[i] << "'" << endl;
	}
	return 0;
}