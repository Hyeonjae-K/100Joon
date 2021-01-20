#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int x1, x2, y1, y2, r1, r2;
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		
		if (r1 == r2 && x1 == x2 && y1 == y2) {
			printf("-1\n");
		}
		else if (abs(r1 - r2) < distance && distance < abs(r1 + r2)) {
			printf("2\n");
		}
		else if (distance == r1 + r2 || distance == abs(r1 - r2)) {
			printf("1\n");
		}
		else {
			printf("0\n");
		}
	}

	return 0;
}