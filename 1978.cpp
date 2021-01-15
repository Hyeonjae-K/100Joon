#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>

using namespace std;

bool is_decimal(int n) {
	if (n <= 1) {
		return false;
	}

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (is_decimal(t)) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}