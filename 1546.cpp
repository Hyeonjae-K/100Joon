#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, max = -987654321;
	double avr = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		if (t > max) {
			max = t;
		}
		avr += t;
	}

	printf("%lf", (avr / max) * 100 / n);

	return 0;
}