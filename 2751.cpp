#define _CRT_SECURE_NO_WARNINGS
#define N 2000001
#include <stdio.h>

bool A[N];

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		A[t + 1000000] = true;
	}

	for (int i = 0; i < N; i++) {
		if (A[i] == true) {
			printf("%d\n", i - 1000000);
		}
	}

	return 0;
}