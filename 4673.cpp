#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10001
bool A[SIZE];

int selfSum(int n) {
	int sum = n;

	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}

	return sum;
}

int main() {
	for (int i = 1; i < SIZE; i++) {
		A[selfSum(i)] = true;
	}
	for (int i = 1; i < SIZE; i++) {
		if (A[i] == false) {
			printf("%d\n", i);
		}
	}

	return 0;
}