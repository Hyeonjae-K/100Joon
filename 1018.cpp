#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

void input(int n, int m, vector<vector<bool>>& v) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char t;
			cin >> t;
			if (t == 'W') {
				v[i][j] = true;
			}
		}
	}
}

int min(int a, int b) {
	if (a > b) {
		return b;
	}
	return a;
}

int cnt_board(int h, int w, vector<vector<bool>> v) {
	int wCnt = 0, bCnt = 0;

	for (int i = h; i < h + 8; i++) {
		for (int j = w; j < w + 8; j++) {
			if ((i + j) % 2 == 0) {
				if (v[i][j] == true) {
					bCnt++;
				}
				else {
					wCnt++;
				}
			}
			else {
				if (v[i][j] == false) {
					bCnt++;
				}
				else {
					wCnt++;
				}
			}
		}
	}

	return min(wCnt, bCnt);
}

int brute_force(int n, int m, vector<vector<bool>> v) {
	int minCnt = 987654321;

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			minCnt = min(minCnt, cnt_board(i, j, v));
		}
	}

	return minCnt;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<bool>> vChecker(n, vector<bool>(m, false));
	input(n, m, vChecker);
	cout << brute_force(n, m, vChecker);

	return 0;
}