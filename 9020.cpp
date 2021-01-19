#define _CRT_SECURE_NO_WARNINGS
#define N 10001
#include <stdio.h>

void checkArr(bool A[]) {
	for (int i = 2; i * i <= N - 1; i++) {
		if (A[i] == false) {
			for (int j = i * i; j <= N - 1; j += i) {
				A[j] = true;
			}
		}
	}
}

int main() {
	bool PrimeArr[N] = { true, true };
	int t;
	scanf("%d", &t);
	checkArr(PrimeArr);

	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		for (int j = n / 2; j >= 2; j--) {
			if (PrimeArr[j] == false) {
				if (PrimeArr[n - j] == false) {
					printf("%d %d\n", j, n - j);
					break;
				}
			}
		}
	}


	return 0;
}