#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> v(n);

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v[i].push_back(x);
		v[i].push_back(y);
		v[i].push_back(1);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v[i][0] < v[j][0] && v[i][1] < v[j][1]) {
				v[i][2]++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << v[i][2] << " ";
	}

	return 0;
}