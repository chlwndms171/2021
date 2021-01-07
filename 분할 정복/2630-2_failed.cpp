#include <bits/stdc++.h>

using namespace std;

int N;
int white=0;
int blue=0;
int paper[128][128];
int same;
int isSame(int arr[128][128], int n);

int devideArr(int arr[128][128], int p, int q) {
	int m;
	int bPaper = 0;
	int wPaper = 0;
	if (q <= 2)
		return bPaper, wPaper;
	else {
		m = (q - p) / 2;
		return devideArr(arr, p, m) + devideArr(arr, m, q);
	}
}


int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cin >> paper[i][j];
	}
	same = isSame(paper, N);
	if (same == 0) {
		white, blue =devideArr(paper, 0, N);
	}
	else {
		if (paper[0][0] == 0) {
			white = 1;
		}
		else blue = 1;
	}
	
	
}

int isSame(int arr[128][128], int n) {
	int color;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == arr[0][0])
				color = 1;
			else {
				color = 0;
				return color;
			}
			/*while (arr[i][j + 1] == arr[i][j] && arr[i][j] == arr[i + 1][j]) {
				if (arr[i][j] == 1)
					color = 1;
				else if (arr[i][j] == 0)
					color = 0;
			}*/
		}
	}
	return color;
}