#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>

using namespace std;

bool is_decimal(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int x, y, sum = 0, min = -1;
	cin >> x >> y;

	for (int i = x; i <= y; i++) {
		if (is_decimal(i)) {
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

	return 0;
}