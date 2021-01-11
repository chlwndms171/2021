#include <bits/stdc++.h>

using namespace std;

int paper[2187][2187];
int result[3];

void print(int size, int y, int x) {
	int check = paper[y][x];

	if (size == 1) {
		result[check + 1]++;
		return;
	}
	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			int newsize = size / 3;
			if (check != paper[i][j]) {
				check == 2;
				print(newsize, y, x);
				print(newsize, y + newsize, x);
				print(newsize, y + newsize + newsize, x);
				print(newsize, y, x + newsize);
				print(newsize, y + newsize, x + newsize);
				print(newsize, y + newsize + newsize, x + newsize);
				print(newsize, y, x + newsize + newsize);
				print(newsize, y + newsize, x + newsize + newsize);
				print(newsize, y + newsize + newsize, x + newsize + newsize);
				return;
			}
		}
	}

	if (check == -1)
		result[0]++;
	else if (check == 0)
		result[1]++;
	else if (check == 1)
		result[2]++;

	return;
}


int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> paper[i][j];
		}
	}
	print(N, 0, 0);
	for (int i = 0; i < 3; i++)
		cout << result[i] << endl;
}