#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 8001
#include <stdio.h>

int main() {
	int n, A[MAX_SIZE] = { 0 };
	scanf("%d", &n);

	int max = -4000, min = 4000, mostCnt = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		A[t + 4000]++;
		sum += t;

		if (t > max) {
			max = t;
		}
		if (t < min) {
			min = t;
		}
		if (A[t + 4000] > mostCnt) {
			mostCnt = A[t + 4000];
		}
	}

	double avr = (double)sum / n;
	int range = max - min, flag = 0, mostVal, midCnt = 0, midVal;
	bool midFlag = false;
	for (int i = min; i <= max; i++) {
		if (A[i + 4000] == mostCnt && flag <= 1) {
			mostVal = i;
			flag++;
		}
		if (A[i + 4000] != 0) {
			midCnt += A[i + 4000];
			if (midCnt >= (n + 1) / 2 && midFlag == false) {
				midVal = i;
				midFlag = true;
			}
		}
		if (midFlag == true && flag > 1) {
			break;
		}
	}

	printf("%.0lf\n%d\n%d\n%d\n", avr, midVal, mostVal, range);


	return 0;
}