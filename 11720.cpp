#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);

	char* A;
	A = new char[n];
	scanf("%s", A);

	for (int i = 0; i < n; i++) {
		sum += A[i] - '0';
	}

	printf("%d\n", sum);

	return 0;
}