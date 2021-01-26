#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int cnt_six(int n) {
	int cnt = 0, maxCnt = 0;

	while (n != 0) {
		if (n % 10 == 6) {
			cnt++;
			if (maxCnt < cnt) {
				maxCnt = cnt;
			}
		}
		else {
			cnt = 0;
		}
		n /= 10;
	}

	return maxCnt;
}

int main() {
	int n, cnt = 0;
	cin >> n;

	for (int i = 666; ; i++) {
		if (cnt_six(i) >= 3) {
			cnt++;
			if (cnt == n) {
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}