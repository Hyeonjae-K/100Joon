#define _CRT_SECURE_NO_WARNINGS
#define N 10001
#include <iostream>

using namespace std;

void check(int end, bool A[]) {
	for (int i = 2; i * i <= end; i++) {
		if (A[i] == false) {
			for (int j = i * i; j <= end; j += i) {
				A[j] = true;
			}
		}
	}
}

void print(int start, int end, bool A[]) {
	int sum = 0, min = -1;

	for (int i = start; i <= end; i++) {
		if (A[i] == false) {
			if (min == -1) {
				min = i;
			}
			sum += i;
		}
	}

	if (min == -1) {
		cout << -1 << endl;
	}
	else {
		cout << sum << endl << min << endl;
	}
}

int main() {
	bool PrimeArr[N] = { true, true };
	int start, end;
	cin >> start >> end;
	check(end, PrimeArr);
	print(start, end, PrimeArr);

	return 0;
}