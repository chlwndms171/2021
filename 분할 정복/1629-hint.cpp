#include <bits/stdc++.h>

using namespace std;

long long a, b, c;


long long multiple(long long x, long long y, long long z) {
	if (y == 0) {
		return 1;
	}

	long long result = multiple(x, y / 2, z);
	result = result * result % z;

	if (y % 2 == 0) return result;
	else
		return (result * x) % z;
}

int main() {
	cin >> a >> b >> c;
	long long n = multiple(a, b, c);
	cout << n;
}