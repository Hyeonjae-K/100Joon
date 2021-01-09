#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int c;
	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		int n, cnt = 0;
		double avr = 0;
		scanf("%d", &n);
		int* scores = new int[n];

		for (int j = 0; j < n; j++) {
			scanf("%d", &scores[j]);
			avr += scores[j];
		}
		avr /= n;

		for (int j = 0; j < n; j++) {
			if (scores[j] > avr) {
				cnt++;
			}
		}

		printf("%.3f%%\n", (float)cnt / n * 100);
	}

	return 0;
}