#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 2; n != 1; i++) {
		if (n % i == 0) {
			cout << i << endl;
			n /= i;
			i--;
		}
	}

	return 0;
}