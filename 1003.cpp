#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int zero;
	int one;
}Cnt;

void swap(Cnt& c1, Cnt& c2) {
	Cnt t = c2;
	c2.zero += c1.zero;
	c2.one += c1.one;
	c1 = t;
}

Cnt fib_cnt(int n) {
	Cnt c1, c2;
	c1.zero = 1;
	c1.one = 0;
	c2.zero = 0;
	c2.one = 1;

	if (n == 0) {
		return c1;
	}
	else if (n == 1) {
		return c2;
	}

	for (int i = 0; i < n - 1; i++) {
		swap(c1, c2);
	}

	return c2;
}

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		Cnt r = fib_cnt(n);

		printf("%d %d\n", r.zero, r.one);
	}

	return 0;
}