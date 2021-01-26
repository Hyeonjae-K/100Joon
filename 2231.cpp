#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int num_digit(int n) {
	int digit = 0;
	while (n != 0) {
		digit++;
		n /= 10;
	}

	return digit;
}

int digit_sum(int n) {
	int sum = n;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}

	return sum;
}

int const_num(int n) {
	int digit = num_digit(n);

	for (int i = n - 9 * digit; i < n; i++) {
		int sum = digit_sum(i);
		if (sum == n) {
			return i;
		}
	}

	return 0;
}

int main() {
	int n;
	cin >> n;

	cout << const_num(n) << endl;

	return 0;
}