#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
	cin >> n;

	vector <vector<int>> name(n, vector<int>(3, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> name[i][j];
		}
		name[i][2] = 1;
	}
	int i;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (name[i][0] < name[j][0] && name[i][1] < name[j][1])
				name[i][2] += 1;
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << name[i][2] << " ";
	}
}