#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

void input(int& n, int& m, vector<int>& v) {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
}

int black_jack(int m, vector<int> v) {
	int sum, t = 0;
	for (int i = 0; i < v.size() - 2; i++) {
		for (int j = i + 1; j < v.size() - 1; j++) {
			for (int k = j + 1; k < v.size(); k++) {
				sum = v[i] + v[j] + v[k];
				if (sum == m) {
					return sum;
				}
				else if (sum < m && sum > t) {
					t = sum;
				}
			}
		}
	}

	return t;
}

int main() {
	vector<int> v;
	int n, m;

	input(n, m, v);
	cout << black_jack(m, v) << endl;

	return 0;
}