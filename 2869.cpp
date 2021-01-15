#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	int a, b, v, cnt;
	cin >> a >> b >> v;
	cnt = (v - a) / (a - b) + 1;

	if ((v - a) % (a - b) != 0) {
		cnt++;
	}

	cout << cnt << endl;

	return 0;
}