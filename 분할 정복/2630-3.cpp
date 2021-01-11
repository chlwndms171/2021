#include <bits/stdc++.h>

using namespace std;

int paper[128][128];
int white, blue;

void count(int n, int x, int y) {
	int begin = paper[x][y];
	for (int i = x; i < x+n; i++) {
		for (int j = y; j < y+n; j++) {
			if (begin != paper[i][j]) {
				begin = 2;
			}
			if (begin == 2) {
				count(n / 2, x, y);
				count(n / 2, x + n/2, y);
				count(n / 2, x, y + n/2);
				count(n / 2, x + n / 2, y + n / 2);
				return;
			}
		}
	}
	if (begin == 1)
		blue++;
	else white++;
}

int main() {
	int size;
	cin >> size;
	for (int i = 0; i < size; i++) 
		for (int j = 0; j < size; j++)
			cin >> paper[i][j];
	count(size, 0, 0);
	cout << white << '\n';
	cout << blue << '\n';
	return 0;
}