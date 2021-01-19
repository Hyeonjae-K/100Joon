#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
	int r;
	scanf("%d", &r);

	printf("%lf\n", (double)r * r * M_PI);
	printf("%lf\n", (double)r * r * 2);

	return 0;
}