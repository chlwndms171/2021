#include <bits/stdc++.h>

using namespace std;
int multiplying(int leftover,int x, int y, int z) {
	
	while (y>1){
		x = x * leftover % z;
		y--;
		multiplying(leftover, x, y, z);
		//�ٺ����� ���� return 0 ����� �������� ��ģ����
	}
	return x;
	
}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int multi = a % c;
	if (a == b == c == 1) {
		cout << "1";
		return 0;
	}
	else {
		int result = multiplying(multi, multi, b, c);
		cout << result;
	}
}

//�޸� �ʰ� �ߴ� ����??
