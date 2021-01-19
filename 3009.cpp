#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Locations {
	int x;
	int y;
};

int main() {
	struct Locations L[4];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &L[i].x, &L[i].y);
	}

	if (L[0].x == L[1].x) {
		L[3].x = L[2].x;
	}
	else if (L[0].x == L[2].x) {
		L[3].x = L[1].x;
	}
	else {
		L[3].x = L[0].x;
	}

	if (L[0].y == L[1].y) {
		L[3].y = L[2].y;
	}
	else if (L[0].y == L[2].y) {
		L[3].y = L[1].y;
	}
	else {
		L[3].y = L[0].y;
	}

	printf("%d %d", L[3].x, L[3].y);

	return 0;
}