#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max_index(int a, int b, int c) {
	if (a >= b && a >= c) {
		return 1;
	}
	else if (b >= a && b >= c) {
		return 2;
	}
	else {
		return 3;
	}
}

bool result_condition(int a, int b, int c) {
	int max = max_index(a, b, c);
	if (max == 1) {
		if (a * a == b * b + c * c) {
			return true;
		}
		return false;
	}
	else if (max == 2) {
		if (b * b == a * a + c * c) {
			return true;
		}
		return false;
	}
	else {
		if (c * c == a * a + b * b) {
			return true;
		}
		return false;
	}
}

int main() {
	while (true) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		if (a == b && b == c && c == 0) {
			break;
		}

		if (result_condition(a, b, c)) {
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}
	}

	return 0;
}