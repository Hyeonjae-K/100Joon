#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, t, cnt = 1;
	scanf("%d", &n);
	t = (n % 10) * 10 + (n % 10 + n / 10) % 10;

	while (t != n) {
		t = (t % 10) * 10 + (t % 10 + t / 10) % 10;
		cnt++;
	}

	printf("%d\n", cnt);
	
	return 0;
}