#include <bits/stdc++.h>

using namespace std;

int N;
int length; 
int a;
int num=0;


int main() {
	cin >> N;
	a = N;
	
	int b = N;
	while (b != 0) {
		b /= 10;
		num += 1;
	}

	int* array= new int[num-1];

for (int i = num-1; i >= 0; i--) {
	array[i] = a % 10;
	a /= 10;
	}

for (int i = 0; i < num; i++) {
	cout << array[i] << "\n";
}




	/*double cal;
	for (i = 0; i < 8; i++) {
		cal = N / pow(10, i);
		if (1<= cal < 10) {
			length = i+1;
				i = 8;
		}
	}

	int * array = new int[length];
	for (int j = length-1; j < 1; j--) {
		
	}*/

}