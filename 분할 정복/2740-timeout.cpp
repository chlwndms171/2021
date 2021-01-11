#include <bits/stdc++.h>

using namespace std;

int A[100][100];
int B[100][100];
int n;
int m;
int k;

int cal(int A[100][100], int B[100][100], int a, int b, int c) {
	int result = 0;
	int i = c;
	while (i > 0) {
		result += A[a][i-1] * B[i-1][b];
		i = i - 1;
		cal(A, B, a, b, i);
	}
	return result;
}
int main() {
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> A[i][j];
	}//A에 할당

	cin >> m;
	cin >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++)
			cin >> B[i][j];
	}//B에 할당

	int result[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			result[i][j] = cal(A, B, i, j, m);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
}