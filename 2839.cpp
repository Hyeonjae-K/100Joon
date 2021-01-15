#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int engine(int n) {
	for (int i = 0; ; i++) {
		if (n - i * 3 < 0) {
			return -1;
		}
		else if ((n - i * 3) % 5 == 0) {
			return i + (n - i * 3) / 5;
		}
	}
}

int main() {
	int n;
	cin >> n;

	cout << engine(n) << endl;

	return 0;
}