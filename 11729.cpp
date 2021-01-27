#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pow(int x, int n) {
	if (n == 1) {
		return x;
	}
	else {
		if (n % 2 == 0) {
			return pow(x * x, n / 2);
		}
		else {
			return x * pow(x * x, (n - 1) / 2);
		}
	}
}

void hanoi(int n, int from, int tmp, int to) {
	if (n == 1) {
		printf("%d %d\n", from, to);
	}
	else {
		hanoi(n - 1, from, to, tmp);
		printf("%d %d\n", from, to);
		hanoi(n - 1, tmp, from, to);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%d\n", pow(2, n) - 1);
	hanoi(n, 1, 2, 3);

	return 0;
}