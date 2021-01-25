#define _CRT_SECURE_NO_WARNINGS
#define N 10000
#include <iostream>
#include <vector>

using namespace std;

void set_star(vector<vector<bool>>& v) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			v[i][j] = true;
		}
	}
	v[1][1] = false;
}

void check_star(int cnt, int n, vector<vector<bool>>& v) {
	if (cnt == n) {
		return;
	}
	else {
		for (int i = 0; i < cnt; i++) {
			for (int j = cnt; j < cnt * 3; j++) {
				v[i][j] = v[i][j - cnt];
			}
		}
		for (int i = cnt; i < cnt * 3; i++) {
			for (int j = 0; j < cnt * 3; j++) {
				v[i][j] = v[i - cnt][j];
			}
		}
		for (int i = cnt; i < cnt * 2; i++) {
			for (int j = cnt; j < cnt * 2; j++) {
				v[i][j] = false;
			}
		}
		return check_star(cnt * 3, n, v);
	}
}

void print_star(int n, vector<vector<bool>> v) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v[i][j] == true) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	vector<vector<bool>> vStar(N, vector<bool>(N));
	int n;
	cin >> n;

	set_star(vStar);
	check_star(3, n, vStar);
	print_star(n, vStar);

	return 0;
}