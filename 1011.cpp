#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int engine(int x, int y) {
	int cnt = 0, len = y - x;
	
	while (1) {
		cnt++;
		if (len - cnt * 2 <= 0) {
			cnt--;
			break;
		}
		else {
			len -= cnt * 2;
		}
	}

	if (len == 0) {
		return cnt * 2;
	}
	else if (len <= cnt + 1) {
		return (cnt * 2) + 1;
	}
	else {
		return (cnt * 2) + 2;
	}
}

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int x, y;
		cin >> x >> y;
		cout << engine(x, y) << endl;
	}

	return 0;
}