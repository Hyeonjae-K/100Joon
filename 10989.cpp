#define _CRT_SECURE_NO_WARNINGS
#define N 10001
#include <stdio.h>

int main() {
	int n, A[N] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		A[t]++;
	}

	for (int i = 1; i < N; i++) {
		if (A[i] != 0) {
			while (A[i] != 0) {
				printf("%d\n", i);
				A[i]--;
			}
		}
	}

	return 0;
}