#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int max = -987654321, index = -1;
	for (int i = 0; i < 9; i++) {
		int t;
		scanf("%d", &t);

		if (t > max) {
			max = t;
			index = i + 1;
		}
	}

	printf("%d\n%d", max, index);

	return 0;
}