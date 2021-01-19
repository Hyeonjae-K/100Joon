#define _CRT_SECURE_NO_WARNINGS
#define N 300000
#include <stdio.h>

void check(int n, bool A[]) {
	for (int i = 2; i * i <= n; i++) {
		if (A[i] == false) {
			for (int j = i * i; j <= n; j += i) {
				A[j] = true;
			}
		}
	}
}

void print(int n, bool A[]) {
	int cnt = 0;

	for (int i = n + 1; i <= n * 2; i++) {
		if (A[i] == false) {
			cnt++;
		}
	}
	
	printf("%d\n", cnt);
}

int main() {
	while (true) {
		bool PrimeArr[N] = { true, true };
		int n;
		scanf("%d", &n);

		if (n == 0) {
			break;
		}
		else {
			check(n * 2, PrimeArr);
			print(n, PrimeArr);
		}
	}

	return 0;
}