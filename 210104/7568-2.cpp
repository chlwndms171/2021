
//2 1010 1010 ��쿡 �� Ǯ�� �Ф̤Ф�
#include <bits/stdc++.h>

using namespace std;

int n;
//bool compare(const vector<int>& v1, const vector<int>& v2) {
//	if (v1[0] == v2[0] && v1[1]==v2[1]) {
//		return v1[2] < v2[2];
//	}
//}
bool SortThirdCol(const vector<int>& v1, const vector<int>& v2) {
	return v1[2] < v2[2];
}
int main() {
	cin >> n;

	vector <vector<int>> name(n, vector<int>(4, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> name[i][j];
		}
		name[i][2] = i;
	}

	sort(name.begin(), name.end());

	/*cout << "���� �� ��:" << endl;*/
	
	for (int i = 0; i < n; i++) {
		name[i][3] = 5-i;
	}
	/*for (int i = 0; i < n; i++) {
		cout << name[i][3] << " ";
		for (int j = 0; j < 2; j++) {
			cout << name[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;*/
	for (int i = 4; i >= 1; i--) {
		if (name[i][1] <= name[i - 1][1])
			name[i - 1][3] = name[i][3];
		 // i ������ n������ �ߴ��� ���� ������ ��
	}

	sort(name.begin(), name.end(), SortThirdCol);
	

	/*for (int i = 0; i < n; i++) {
		cout << name[i][2] << " ";
		cout << name[i][3] << " ";
		for (int j = 0; j < 2; j++) {
			cout << name[i][j] << " ";
		}
		cout << endl;
	}*/

	for (int i = 0; i < n; i++) {
		cout << name[i][3] << " ";
	}
	
	//���� 2�ð�..,

}