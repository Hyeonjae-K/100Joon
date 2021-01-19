#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min_len(int x, int y, int w, int h) {
	int min = x;
	
	if (min > y) {
		min = y;
	}
	if (min > w - x) {
		min = w - x;
	}
	if (min > h - y) {
		min = h - y;
	}

	return min;
}

int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	printf("%d", min_len(x, y, w, h));

	return 0;
}