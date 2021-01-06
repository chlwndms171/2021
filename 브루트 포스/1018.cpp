#include <bits/stdc++.h>

using namespace std;

int N;
int M;
int result=0;

int main() {
	cin >> N;
	cin >> M;
	int* array = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}
	
	
	for (int k = 0; k < N - 2; k++) {
		for (int i = k + 1; i < N - 1; i++) {
			for (int j = i + 1; j < N; j++) {
				int sum = array[k] + array[i] + array[j];
				if (result < sum && sum <= M)
					result = sum;
			}
		}
	}

	cout << result;
	
}