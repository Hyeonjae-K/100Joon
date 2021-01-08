#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long sum(int* a, int n) {
	long long result = 0;
	for (int i = 0; i < n; i++) {
		result += a[i];
	}

	return result;
}

int main() {
	int* a, n;
	scanf("%d", &n);
	a = new int[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	printf("%d\n", sum(a, n));

	return 0;
}