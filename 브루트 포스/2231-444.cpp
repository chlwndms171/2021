#include <bits/stdc++.h>

using namespace std;

int N;
int result;


int bunhaehap(int i) {
	int cal = 0;
	int M = i;

	while (M != 0) {
		cal += M % 10;
		M /= 10;
	}
	int sum = cal + i;
	//cout << sum<<"\n";

	return sum;
}

int main() {
	cin >> N;
	for (int i = 0; i <= 1000000; i++) {
		if (N == bunhaehap(i)) {
			result = i;
			break;
		}
		else result = 0;
	}
	cout << result;
}