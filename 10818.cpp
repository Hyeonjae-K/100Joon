#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, max = -987654321, min = 987654321;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		if (t > max) {
			max = t;
		}
		if (t < min) {
			min = t;
		}
	}

	printf("%d %d", min, max);

	return 0;
}