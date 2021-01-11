#include <bits/stdc++.h>

using namespace std;

int N;
int** makeArr(int n) {
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}
	return arr;
}

int main(){
	cin >> N;
	int** array = new int* [N];
	array = makeArr(N);
	


}

