#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n, int n1, int n2) {
	if (n > 2) {
		return fib(n - 1, n2, n1 + n2);
	}
	else {
		return n1 + n2;
	}
}

int main() {
	int n;
	scanf("%d", &n);

	if (n == 0) {
		printf("0\n");
	}
	else if (n == 1) {
		printf("1\n");
	}
	else {
		printf("%d", fib(n, 0, 1));
	}

	return 0;
}