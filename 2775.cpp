#define _CRT_SECURE_NO_WARNINGS
#define N 15
#include <iostream>

using namespace std;

int engine(int k, int n) {
	int A[N][N] = { 0 };
	for (int i = 1; i <= n; i++) {
		A[0][i] = i;
	}
	for (int i = 1; i <= k; i++) {
		A[i][1] = 1;
	}

	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			A[i][j] = A[i][j - 1] + A[i - 1][j];
		}
	}

	return A[k][n];
}

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int k, n;
		cin >> k >> n;
		cout << engine(k, n) << endl;
	}

	return 0;
}