#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
	cin >> n;

	vector <vector<int>> name(n, vector<int>(3, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++)
			cin >> name[i][j];
	}

	sort(name.begin(), name.end());

	cout << "���� �� ��:" << endl;

	int num = n;
	int* array = new int[n];

	array[0] = 1;

	for (int i = 0; i < n-1; i++) {
		if (name[i][1] < name[i + 1][1])
			array[i + 1] = array[i] + 1;
		else if (name[i][1] >= name[i+1][1])
			array[i + 1] = array[i]; // i ������ n������ �ߴ��� ���� ������ ��
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cout << name[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}


}