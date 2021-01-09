#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int Arr[42] = { 0 }, cnt = 0;
	
	for (int i = 0; i < 10; i++) {
		int t;
		scanf("%d", &t);
		t %= 42;

		if (Arr[t] == 0) {
			cnt++;
			Arr[t]++;
		}
	}

	printf("%d", cnt);

	return 0;
}