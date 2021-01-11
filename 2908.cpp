#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int reverse_num(int a) {
	int reverseNum = 0;

	while (a != 0) {
		reverseNum *= 10;
		reverseNum += a % 10;
		a /= 10;
	}

	return reverseNum;
}

int main() {
	int a, b;
	cin >> a >> b;

	a = reverse_num(a);
	b = reverse_num(b);

	if (a > b) {
		cout << a << endl;
	}
	else {
		cout << b << endl;
	}

	return 0;
}