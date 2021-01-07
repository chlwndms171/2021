#include <bits/stdc++.h>

using namespace std;

int A[100][100];
int B[100][100];
int result[100][100];
int n, m, k;

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> A[i][j];
	}

	cin >> m >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++)
			cin >> B[i][j];
	}

	for (int i = 0; i < n; i++) 
		for (int j = 0; j < k; j++) 
			for (int q = 0; q < m; q++) 
				result[i][j] += A[i][q] * B[q][j];


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
}