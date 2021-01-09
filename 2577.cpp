#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, result, Arr[10] = { 0 };
	scanf("%d %d %d", &a, &b, &c);
	result = a * b * c;

	while (result != 0) {
		Arr[result % 10]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", Arr[i]);
	}

	return 0;
}