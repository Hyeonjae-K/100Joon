#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &b, &a);

	printf("%d\n", (a % 10) * b);
	printf("%d\n", ((a / 10) % 10) * b);
	printf("%d\n", (a / 100) * b);
	printf("%d\n", a * b);

	return 0;
}