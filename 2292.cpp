#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	int n, cnt = 1;
	cin >> n;
	n--;

	while (n > 0) {
		n -= cnt * 6;
		cnt++;
	}

	cout << cnt << endl;

	return 0;
}