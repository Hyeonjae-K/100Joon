#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

bool check(int n) {
	if (n > 99) {
		int gap = (n / 10) % 10 - n % 10;
		while (n > 99) {
			n /= 10;
			if ((n / 10) % 10 - n % 10 != gap) {
				return false;
			}
		}
	}

	return true;
}

int main() {
	int n, cnt = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (check(i) == true) {
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}