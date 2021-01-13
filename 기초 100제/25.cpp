#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a = 0;
	int b = 0;
	for (int i = 0; i < 5; i++) {
		int num = n / pow(10, 4 - i);
		
		a = num * pow(10, 4 - i);
		
		cout << "["<< a-b<<"]"<<endl;
		b += a - b;
	}
	return 0;
}