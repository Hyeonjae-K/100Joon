#define _CRT_SECURE_NO_WARNINGS
#define N 1000001
#include <stdio.h>

void check(int end, bool A[]) {
	for (int i = 2; i * i <= end; i++) {
		if (A[i] == false) {
			for (int j = i * i; j <= end; j += i) {
				A[j] = true;
			}
		}
	}
}

void print(int start, int end, bool A[]) {
	for (int i = start; i <= end; i++) {
		if (A[i] == false) {
			printf("%d\n", i);
		}
	}
}

int main() {
	bool PrimeArr[N] = { true, true };
	int start, end;
	scanf("%d %d", &start, &end);

	check(end, PrimeArr);
	print(start, end, PrimeArr);

	return 0;
}