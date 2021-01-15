#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int return_room(int h, int w, int n) {
	int x, y;

	if (n % h == 0) {
		x = n / h;
		y = h;
	}
	else {
		x = n / h + 1;
		y = n % h;
	}
	
	return y * 100 + x;
}

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int h, w, n;
		cin >> h >> w >> n;
		cout << return_room(h, w, n) << endl;
	}

	return 0;
}