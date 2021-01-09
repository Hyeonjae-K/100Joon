#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int score = 0, acc = 0;
		char A[81];
		scanf("%s", A);
		
		for (int i = 0; i < strlen(A); i++) {
			if (A[i] == 'O') {
				acc++;
				score += acc;
			}
			else {
				acc = 0;
			}
		}

		printf("%d\n", score);
	}

	return 0;
}