#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int cnt = 1; ; cnt++) {
		n -= cnt;
		if (n <= 0) {
			if (cnt % 2 == 0) {
				cout << cnt + n << "/" << 1 - n << endl;
			}
			else {
				cout << 1 - n << "/" << cnt + n << endl;
			}

			break;
		}
	}
	
	return 0;
}