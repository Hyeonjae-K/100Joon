#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	while (1) {
		int a, b;
		if (scanf("%d %d", &a, &b) == EOF) {
			break;
		}
		else {
			printf("%d\n", a + b);
		}
	}

	return 0;
}