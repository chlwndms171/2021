#include <iostream>
#include <string>
using namespace std;

int main() {
	char num[5];
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}
	cout << '[' << (num[0] - '0') * 10000 << ']' << endl;
	cout << '[' << (num[1] - '0') * 1000 << ']' << endl;
	cout << '[' << (num[2] - '0') * 100 << ']' << endl;
	cout << '[' << (num[3] - '0') * 10 << ']' << endl;
	cout << '[' << (num[4] - '0') * 1 << ']' << endl;
}
//[출처] [CodeUp 기초 100제] 문제 1020~1027까지 C++ 풀이 | 작성자 수성