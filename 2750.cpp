#define _CRT_SECURE_NO_WARNINGS
#define SIZE 2001
#include <iostream>

using namespace std;

int main() {
	bool A[SIZE] = { false };
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		A[1000 + t] = true;
	}

	for (int i = 0; i < SIZE; i++) {
		if (A[i] == true) {
			cout << i - 1000 << endl;
		}
	}

	return 0;
}