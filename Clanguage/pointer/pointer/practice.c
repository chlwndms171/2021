#include <stdio.h>

int main() {
	int ids[50];
	for (int i = 0; i < 10; i++) {
		ids[i] = i + 10;
	}
	int* p = ids;
	//int* p = &ids[0];
	printf("%d  %d", p[2], p[5]);

	return 0;

}