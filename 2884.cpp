#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);

	if (m < 45) {
		m += 60;
		h -= 1;
		if (h < 0) {
			h = 23;
		}
	}

	m -= 45;

	printf("%d %d", h, m);

	return 0;
}